/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madinata <madinata@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 13:39:33 by madinata          #+#    #+#             */
/*   Updated: 2026/04/28 18:13:42 by madinata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include "ft_hd.h"

char			*g_buffer;
char			*g_prev_buff;
int				g_buf_idx = 0;
int				g_return_type = 0;
int				g_total_bytes = 0;
int				g_open_success = 0;
int				g_is_same_data = 0;
t_display_func	g_display_hex = print_default;
int				g_print_multiplier = 1;

void	parse_args(int argc, char *argv[], int **filename_array)
{
	int	i;
	int	j;

	*filename_array = malloc(argc * sizeof(int));
	i = 1;
	j = 0;
	while (i < argc)
	{
		if (strlength(argv[i]) > 1 && argv[i][0] == '-' && argv[i][1] == 'C')
		{
			if (g_display_hex == print_default)
				g_display_hex = print_canonical;
			else
				g_print_multiplier++;
		}
		else
			filename_array[0][j++] = i;
		i++;
	}
	i = j;
	while (i < argc)
		filename_array[0][i++] = -1;
}

static void	try_display_hex(int prev_idx)
{
	if (strcmp_fixed(g_buffer, g_prev_buff, 16) == 0)
	{
		if (g_is_same_data == 0)
			putstr("*\n", STDOUT_FILENO);
		g_is_same_data = 1;
	}
	else
	{
		g_is_same_data = 0;
		g_display_hex(g_buffer, (g_total_bytes - prev_idx),
			16, g_print_multiplier);
	}
	ptrswap(&g_buffer, &g_prev_buff);
}

void	rw_loop(int file_desc, char *prog_name, char *file_name)
{
	int	cur_size;
	int	prev_idx;

	cur_size = 1;
	while (cur_size > 0)
	{
		cur_size = read(file_desc, g_buffer + g_buf_idx, 16 - g_buf_idx);
		if (cur_size > 0)
		{
			prev_idx = g_buf_idx;
			g_buf_idx = (g_buf_idx + cur_size) % 16;
			if (g_buf_idx == 0)
				try_display_hex(prev_idx);
			g_total_bytes += cur_size;
		}
	}
	if (cur_size < 0)
		print_error(prog_name, file_name, strerror(errno), &(int){0});
}

/*
TODO:
O if there's duplicate within the output block, replace with * and skips
O multiple files means they are appended
O leftover buffer will only be printed after everything is done.
O repeated -C means print mutiple of same line?
O when all inputs fails, print extra errors
- options currently only check for the 2nd char.
  No chaining options and no printing if option is wrong.
*/
void	start_rw(int *filename_array, char *argv[])
{
	int	file_desc;

	while (*filename_array != -1)
	{
		file_desc = open(argv[*filename_array], O_RDONLY);
		if (file_desc == -1)
			print_error(argv[0], argv[*filename_array],
				strerror(errno), &g_return_type);
		else
		{
			g_open_success = 1;
			rw_loop(file_desc, argv[0], argv[*filename_array]);
			close(file_desc);
		}
		filename_array++;
	}
	if (g_total_bytes == 0 && !g_open_success)
		print_input_failed(argv[0], &g_return_type);
	else if (g_total_bytes > 0)
	{
		if (g_buf_idx)
			g_display_hex(g_buffer, (g_total_bytes - g_buf_idx),
				g_buf_idx, g_print_multiplier);
		print_size(g_total_bytes, g_display_hex);
	}
}

int	main(int argc, char *argv[])
{
	int		*filename_array;

	if (argc == 1)
		return (1);
	parse_args(argc, argv, &filename_array);
	g_buffer = malloc(16);
	g_prev_buff = malloc(16);
	start_rw(filename_array, argv);
	free(g_buffer);
	free(filename_array);
	return (g_return_type);
}
