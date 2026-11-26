/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilum <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:51:31 by jilum             #+#    #+#             */
/*   Updated: 2026/04/14 17:15:03 by jilum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)

{
	char	alphabet;

	alphabet = 'z';
	while (alphabet >= 'a' )
	{
		write(1, &alphabet, 1);
		alphabet--;
	}
}
