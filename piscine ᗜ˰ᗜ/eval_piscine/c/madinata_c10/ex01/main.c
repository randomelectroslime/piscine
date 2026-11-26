/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madinata <madinata@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 19:33:32 by madinata          #+#    #+#             */
/*   Updated: 2026/04/28 17:44:03 by madinata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <libgen.h>

#define BUF_SIZE 29696

int	g_return_type = 0;

void	putstr(char *str, int fd)
{
	while (*str != '\0')
		write(fd, str++, 1);
}

int	is_non_escape(char *str)
{
	if (*str == '\0')
		return (0);
	while (*str != '\0')
	{
		if (!((*str >= '+' && *str <= '9') || (*str >= '@' && *str <= 'Z')
				|| (*str >= 'a' && *str <= 'z') || *str == '%' || *str == '_'))
			return (0);
		str++;
	}
	return (1);
}

void	print_error(char *prog_name, char *file_name)
{
	int	need_escape;

	need_escape = !is_non_escape(file_name);
	g_return_type = 1;
	putstr(basename(prog_name), STDERR_FILENO);
	write(STDERR_FILENO, ": ", 2);
	if (need_escape)
		write(STDERR_FILENO, "\'", 1);
	putstr(file_name, STDERR_FILENO);
	if (need_escape)
		write(STDERR_FILENO, "\'", 1);
	write(STDERR_FILENO, ": ", 2);
	putstr(strerror(errno), STDERR_FILENO);
	write(STDERR_FILENO, "\n", 1);
}

void	rw_loop(int file_desc, char *prog_name, char *file_name)
{
	char	buffer[BUF_SIZE];
	int		cur_size;

	cur_size = 1;
	while (cur_size > 0)
	{
		cur_size = read(file_desc, buffer, BUF_SIZE);
		if (cur_size > 0)
			write(STDOUT_FILENO, buffer, cur_size);
	}
	if (cur_size < 0)
		print_error(prog_name, file_name);
}

// FIXME: newlines (and maybe others) are replaced by actual characters.
// FIXME: looks like the real cat (tail and hd too) doesn't use
//		 basename at all. Might be worth to try.
int	main(int argc, char *argv[])
{
	int		file_desc;
	int		i;

	if (argc == 1)
		rw_loop(STDIN_FILENO, argv[0], "-");
	else
	{
		i = 1;
		while (i < argc)
		{
			if (argv[i][0] == '-')
				file_desc = STDIN_FILENO;
			else
				file_desc = open(argv[i], O_RDONLY);
			if (file_desc == -1)
				print_error(argv[0], argv[i]);
			else
				rw_loop(file_desc, argv[0], argv[i]);
			if (file_desc != STDIN_FILENO)
				close(file_desc);
			i++;
		}
	}
	return (g_return_type);
}
