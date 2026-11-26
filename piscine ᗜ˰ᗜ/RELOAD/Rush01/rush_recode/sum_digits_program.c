/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_digits_program.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinchong <xinchong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 17:56:00 by xinchong          #+#    #+#             */
/*   Updated: 2026/07/27 18:12:16 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	sum_digits(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	int	num;

	num = n;
	if (n < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num < 10)
	{
		ft_putchar(num + '0');
	}
	else
	{
		ft_putnbr(num / 10);
		ft_putchar(num % 10 + '0');
	}
}

int	main(int argc, char **argv)
{
	int	a;

	if (argc != 2)
		return (0);
	a = sum_digits(argv[1]);
	ft_putnbr(a);
	return (0);
}
