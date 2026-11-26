/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arwan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 12:09:24 by arwan             #+#    #+#             */
/*   Updated: 2026/04/10 12:07:04 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;
	int		i;

	i = 0;
	c = 'z';
	while (i < 26)
	{
		write(1, &c, 1);
		c--;
		i++;
	}
}

int	main(void) 
 { 
 	ft_print_alphabet(); 
 	return (0); 
 } 
