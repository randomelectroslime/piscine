/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digital_root.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinchong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 17:02:32 by xinchong          #+#    #+#             */
/*   Updated: 2026/07/22 18:46:19 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_digital_root(int nb)
{
	int	ans;

	ans = 0;
	while (nb > 0 || ans > 9)
	{
		if (nb == 0)
		{
			nb = ans;
			ans = 0;
		}

		ans += nb % 10;
		nb = nb / 10;
	}
	return (ans);
}

#include <stdio.h>

int	main(void)
{
	int n = 12345;

	printf("DigitalRoot of %d is %d.", n, ft_digital_root(n));
	return (0);
}
