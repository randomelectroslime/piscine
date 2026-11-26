/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilum <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 13:31:36 by jilum             #+#    #+#             */
/*   Updated: 2026/04/14 16:55:58 by jilum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)

{
	char	alphabet;

	alphabet = 'a';
	while (alphabet <= 'z' )
	{
		write(1, &alphabet, 1);
		alphabet++;
	}
}
