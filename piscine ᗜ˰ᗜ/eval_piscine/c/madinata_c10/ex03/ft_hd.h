/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hd.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madinata <madinata@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 06:07:26 by madinata          #+#    #+#             */
/*   Updated: 2026/04/28 18:04:41 by madinata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HD_H
# define FT_HD_H

typedef void	(*t_display_func)(char *, int, int, int);
void	char16_to_hex(char *source, char *target, int max_idx);
void	uint_to_hexstr(unsigned int n, char *output, int max_digits);
void	cpy16_printable(char *source, char *target, int max_idx);
void	char16_to_hex2(char *source, char *target, int max_idx);
void	putstr(char *str, int fd);
int		strcmp_fixed(char *s1, char *s2, int n);
int		strlength(char *str);
void	print_default(char *str, int byte_count, int max_idx, int repeat);
void	print_canonical(char *str, int byte_count, int max_idx, int repeat);
void	print_error(char *prog_name, char *file_name,
			char *error_str, int *ret);
void	print_input_failed(char *prog_name, int *ret);
void	print_size(int byte_count, t_display_func func_type);
void	ptrswap(char **ptr1, char **ptr2);

#endif
