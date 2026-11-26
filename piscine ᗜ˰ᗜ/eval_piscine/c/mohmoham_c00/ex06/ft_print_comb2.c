/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmoham <mohmoham@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 19:47:15 by mohmoham          #+#    #+#             */
/*   Updated: 2026/04/21 18:27:49 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(char a, char b, char c, char d);
void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	char	number[4];
	int		a;
	int		b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			number[0] = (a / 10) + '0';
			number[1] = (a % 10) + '0';
			number[2] = (b / 10) + '0';
			number[3] = (b % 10) + '0';
			print_numbers(number[0], number[1], number[2], number[3]);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

void	print_numbers(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
