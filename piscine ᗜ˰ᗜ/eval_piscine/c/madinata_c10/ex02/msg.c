/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madinata <madinata@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 20:01:52 by madinata          #+#    #+#             */
/*   Updated: 2026/04/28 18:22:58 by madinata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"
#include <unistd.h>
#include <libgen.h>

void	print_filenames(char *fname, int do_newline)
{
	if (do_newline != 0)
		putstr("\n", STDOUT_FILENO);
	putstr("==> ", STDOUT_FILENO);
	if (fname[0] == '-')
		putstr("standard input", STDOUT_FILENO);
	else
		putstr(fname, STDOUT_FILENO);
	putstr(" <==\n", STDOUT_FILENO);
}

void	print_error_open(char *prog_name, char *file_name,
			char *error_str, int *ret)
{
	*ret = 1;
	putstr(basename(prog_name), STDERR_FILENO);
	putstr(": cannot open \'", STDERR_FILENO);
	putstr(file_name, STDERR_FILENO);
	putstr("\' for reading: ", STDERR_FILENO);
	putstr(error_str, STDERR_FILENO);
	putstr("\n", STDERR_FILENO);
}

void	print_error_read(char *prog_name, char *file_name,
			char *error_str, int *ret)
{
	*ret = 1;
	putstr(basename(prog_name), STDERR_FILENO);
	putstr(": error reading \'", STDERR_FILENO);
	putstr(file_name, STDERR_FILENO);
	putstr("\': ", STDERR_FILENO);
	putstr(error_str, STDERR_FILENO);
	putstr("\n", STDERR_FILENO);
}
