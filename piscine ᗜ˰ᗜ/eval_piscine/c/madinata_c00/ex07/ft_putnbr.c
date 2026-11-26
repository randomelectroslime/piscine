/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madinata <madinata@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 15:40:54 by madinata          #+#    #+#             */
/*   Updated: 2026/04/09 15:40:58 by madinata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		n;
	int		digit_count;
	int		idx;
	char	digits[11];

	n = nb;
	digit_count = 0;
	while (n > 0)
	{
		digit_count++;
		n /= 10;
	}
	n = nb;
	idx = digit_count;
	while (n > 0)
	{
		digits[idx] = '0' + n % 10;
		n /= 10;
		idx--;
	}
	write(1, &digits, digit_count + 1);
}

int	main(void)
{
	ft_putnbr(42);
}
