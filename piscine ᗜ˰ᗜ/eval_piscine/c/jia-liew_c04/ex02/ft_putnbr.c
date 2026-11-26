/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jia-liew <jia-liew@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:32:20 by jia-liew          #+#    #+#             */
/*   Updated: 2026/04/16 17:17:39 by jia-liew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(unsigned int n);

void	ft_putnbr(int nb)
{
	unsigned int	n;

	n = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		n = -nb;
	}
	else
		n = nb;
	print_number(n);
}

void	print_number(unsigned int n)
{
	if (n > 9)
		print_number(n / 10);
	n = n % 10 + '0';
	write(1, &n, 1);
}
