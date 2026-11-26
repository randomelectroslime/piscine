/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madinata <madinata@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 10:27:09 by madinata          #+#    #+#             */
/*   Updated: 2026/04/09 10:27:16 by madinata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	inner_comb(char i, char j)
{
	char	orig_i;
	char	orig_j;

	orig_i = i + 1;
	orig_j = j;
	while (i++ < '9')
	{
		if (j > '9')
		{
			j = '8';
		}
		while (j++ < '9')
		{
			write(1, &orig_i, 1);
			write(1, &orig_j, 1);
			write(1, &(int){' '}, 1);
			write(1, &i, 1);
			write(1, &j, 1);
			write(1, &(int){','}, 1);
			write(1, &(int){' '}, 1);
		}
	}
}

void	ft_print_comb2(void)
{
	char	i;
	char	j;

	i = '0' - 1;
	while (i++ < '9')
	{
		j = '0' - 1;
		while (j++ < '9')
		{
			inner_comb(i - 1, j);
		}
	}
	write(1, &(int){'\b'}, 1);
	write(1, &(int){'\b'}, 1);
}

int	main(void)
{
	ft_print_comb2();
}
