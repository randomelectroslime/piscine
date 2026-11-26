/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 14:37:42 by yilee             #+#    #+#             */
/*   Updated: 2026/04/09 18:01:44 by yilee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

int	main(void)
{
	ft_print_reverse_alphabet();
}

void	ft_print_reverse_alphabet(void)
{
	int	z;

	z = 122;
	while (z >= 97)
	{
		write(1, &z, 1);
		z --;
	}
}
