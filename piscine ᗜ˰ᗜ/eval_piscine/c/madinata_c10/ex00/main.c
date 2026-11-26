/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madinata <madinata@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:02:12 by madinata          #+#    #+#             */
/*   Updated: 2026/04/28 17:43:32 by madinata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	print_error(char *str, int size)
{
	write(STDERR_FILENO, str, size);
	return (1);
}

int	main(int argc, char *argv[])
{
	char	buffer[8000];
	int		cur_size;
	int		file_desc;

	if (argc < 2)
		return (print_error("File name missing.\n", 19));
	else if (argc > 2)
		return (print_error("Too many arguments.\n", 20));
	file_desc = open(argv[1], O_RDONLY);
	if (file_desc == -1)
		return (print_error("Cannot read file.\n", 18));
	cur_size = 1;
	while (cur_size > 0)
	{
		cur_size = read(file_desc, buffer, 8000);
		if (cur_size > 0)
			write (STDOUT_FILENO, buffer, cur_size);
	}
	close(file_desc);
	if (cur_size < 0)
		return (print_error("Cannot read file.\n", 18));
}
