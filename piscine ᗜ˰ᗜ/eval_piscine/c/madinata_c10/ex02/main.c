/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madinata <madinata@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 19:33:32 by madinata          #+#    #+#             */
/*   Updated: 2026/04/28 18:23:08 by madinata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include "ft_tail.h"

char	*g_buffer;
char	*g_prev_buf;
int		g_return_type = 0;
int		g_path_count = 0;

void	parse_args(int argc, char *argv[], int **filename_array, int *byte_size)
{
	int	i;
	int	j;
	int	len;

	*filename_array = malloc(argc * sizeof(int));
	i = 1;
	j = 0;
	while (i < argc)
	{
		len = strlength(argv[i]);
		if (len > 1 && argv[i][0] == '-' && argv[i][1] == 'c')
		{
			if (len > 2)
				*byte_size = ft_atoi(argv[i] + 2);
			else
				*byte_size = ft_atoi(argv[++i]);
		}
		else
			filename_array[0][j++] = i;
		i++;
	}
	g_path_count = j;
	while (j < argc)
		filename_array[0][j++] = -1;
}

void	rw_loop(int file_desc, int buf_size, char *prog_name, char *file_name)
{
	int		cur_size;
	int		prev_size;

	cur_size = 1;
	prev_size = 0;
	while (cur_size > 0)
	{
		cur_size = read(file_desc, g_buffer, buf_size);
		if (cur_size > 0)
		{
			if (cur_size != buf_size)
			{
				if (prev_size != 0)
					write(STDOUT_FILENO, (g_prev_buf + cur_size),
						(prev_size - cur_size));
				write(STDOUT_FILENO, g_buffer, cur_size);
			}
			prev_size = cur_size;
			ptrswap(&g_buffer, &g_prev_buf);
		}
	}
	if (cur_size < 0)
		print_error_read(prog_name, file_name, strerror(errno), &g_return_type);
}

void	start_rw(int *filename_array, int buf_size, char *argv[])
{
	int		file_desc;
	int		is_first_print;

	is_first_print = 0;
	while (*filename_array != -1)
	{
		if (argv[*filename_array][0] == '-')
			file_desc = STDIN_FILENO;
		else
			file_desc = open(argv[*filename_array], O_RDONLY);
		if (file_desc == -1)
			print_error_open(argv[0], argv[*filename_array],
				strerror(errno), &g_return_type);
		else
		{
			if (g_path_count > 1)
				print_filenames(argv[*filename_array], is_first_print++);
			rw_loop(file_desc, buf_size, argv[0], argv[*filename_array]);
		}
		if (file_desc != STDIN_FILENO)
			close(file_desc);
		filename_array++;
	}
}

// NOTE: Currently doesn't work without -c.
int	main(int argc, char *argv[])
{
	int		*filename_array;
	int		buf_size;

	buf_size = 0;
	if (argc < 2)
		return (1);
	parse_args(argc, argv, &filename_array, &buf_size);
	g_buffer = malloc(buf_size);
	g_prev_buf = malloc(buf_size);
	if (*filename_array == -1)
		rw_loop(STDIN_FILENO, buf_size, argv[0], "-");
	else
		start_rw(filename_array, buf_size, argv);
	free(filename_array);
	free(g_buffer);
	free(g_prev_buf);
	return (g_return_type);
}
