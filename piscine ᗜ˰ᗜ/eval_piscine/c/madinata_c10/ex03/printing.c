/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madinata <madinata@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 08:35:00 by madinata          #+#    #+#             */
/*   Updated: 2026/04/28 18:07:08 by madinata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hd.h"
#include <unistd.h>
#include <libgen.h>

void	print_canonical(char *str, int byte_count, int max_idx, int repeat)
{
	char	result[80];
	int		i;

	uint_to_hexstr(byte_count, result, 8);
	result[8] = ' ';
	result[9] = ' ';
	char16_to_hex(str, result + 10, max_idx);
	result[60] = '|';
	cpy16_printable(str, result + 61, max_idx);
	result[61 + max_idx] = '|';
	result[62 + max_idx] = '\n';
	result[63 + max_idx] = '\0';
	i = 0;
	while (i++ < repeat)
		putstr(result, STDOUT_FILENO);
}

void	print_default(char *str, int byte_count, int max_idx, int repeat)
{
	char	result[49];
	int		i;

	uint_to_hexstr(byte_count, result, 7);
	result[7] = ' ';
	char16_to_hex2(str, result + 8, max_idx);
	result[47] = '\n';
	result[48] = '\0';
	i = 0;
	while (i++ < repeat)
		putstr(result, STDOUT_FILENO);
}

void	print_error(char *prog_name, char *file_name,
			char *error_str, int *ret)
{
	*ret = 1;
	putstr(basename(prog_name), STDERR_FILENO);
	write(STDERR_FILENO, ": ", 2);
	putstr(file_name, STDERR_FILENO);
	write(STDERR_FILENO, ": ", 2);
	putstr(error_str, STDERR_FILENO);
	write(STDERR_FILENO, "\n", 1);
}

void	print_input_failed(char *prog_name, int *ret)
{
	*ret = 1;
	putstr(basename(prog_name), STDERR_FILENO);
	write(STDERR_FILENO, ": all input file arguments failed\n", 34);
}

void	print_size(int byte_count, t_display_func func_type)
{
	char	result[10];
	int		max_digits;

	max_digits = 0;
	if (func_type == print_default)
		max_digits = 7;
	else if (func_type == print_canonical)
		max_digits = 8;
	uint_to_hexstr(byte_count, result, max_digits);
	result[max_digits] = '\n';
	result[max_digits + 1] = '\0';
	putstr(result, STDOUT_FILENO);
}
