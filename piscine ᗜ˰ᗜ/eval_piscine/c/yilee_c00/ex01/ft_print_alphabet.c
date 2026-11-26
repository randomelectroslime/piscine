/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 16:56:08 by yilee             #+#    #+#             */
/*   Updated: 2026/04/10 09:50:51 by yilee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	a;

	a = 97;
	while (a <= 122)
	{
		write(1, &a, 1);
		a ++;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
}
