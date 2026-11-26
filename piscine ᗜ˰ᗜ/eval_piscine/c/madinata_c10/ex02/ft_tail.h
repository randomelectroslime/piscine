/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madinata <madinata@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 17:28:28 by madinata          #+#    #+#             */
/*   Updated: 2026/04/28 14:38:45 by madinata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

void	putstr(char *str, int fd);
int		strlength(char *str);
int		ft_atoi(char *str);
void	ptrswap(char **ptr1, char **ptr2);
void	print_filenames(char *fname, int i);
void	print_error_open(char *prog_name, char *file_name,
			char *error_str, int *ret);
void	print_error_read(char *prog_name, char *file_name,
			char *error_str, int *ret);

#endif