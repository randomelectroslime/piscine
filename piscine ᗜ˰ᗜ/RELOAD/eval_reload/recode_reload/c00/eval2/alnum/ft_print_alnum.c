/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alnum.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinchong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 13:59:33 by xinchong          #+#    #+#             */
/*   Updated: 2026/07/21 14:09:10 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alnum(void)
{
	int	count;
	char	c;
	char	n;

	count = 1;
	c = 'a';
	n = '0';
	while (c <= 'z' && count == 1)
	{
		write(1, &c, 1);
		if ( c == 'z')
		{
			count = count + 1;
		}
		c++;
	}
	while (n <= '9' && count == 2)
	{
		write(1, &n, 1);
		if ( c == '9')
		{
			count = count + 1;
		}
		n++;
	}
}

int	main(void)
{
	ft_print_alnum();
	return (0);
}
