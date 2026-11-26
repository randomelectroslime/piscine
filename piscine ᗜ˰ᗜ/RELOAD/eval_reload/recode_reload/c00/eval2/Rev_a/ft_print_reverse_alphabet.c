/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinchong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 13:54:41 by xinchong          #+#    #+#             */
/*   Updated: 2026/07/21 13:57:18 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c >= 'a' && c <= 'z')
	{
		write(1, &c, 1);
		c--;
	}
}

int	main(void)
{
	ft_reverse_alphabet();
}
