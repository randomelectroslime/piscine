/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madinata <madinata@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:17:21 by madinata          #+#    #+#             */
/*   Updated: 2026/04/09 18:54:16 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	combo_loop(int depth, int max_d, char prev_digits[], char start)
{
	char	i;

	i = start;
	while (i <= '9')
	{
		if (i > '9' - (max_d - depth - 1))
		{
			return ;
		}
		prev_digits[depth] = i;
		if (depth < max_d - 1)
		{
			combo_loop(depth + 1, max_d, prev_digits, i + 1);
		}
		else
		{
			write(1, prev_digits, max_d);
			write(1, (char []){',', ' '}, 2);
		}
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	digits[10];

	if (n < 0 || n > 9)
	{
		return ;
	}
	combo_loop(0, n, digits, '0');
	write(1, &(int){'\b'}, 1);
	write(1, &(int){'\b'}, 1);
}

int	main(void)
{
	ft_print_combn(2);
