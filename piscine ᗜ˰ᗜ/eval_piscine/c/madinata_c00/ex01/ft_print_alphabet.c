/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madinata <madinata@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 17:45:41 by madinata          #+#    #+#             */
/*   Updated: 2026/04/08 17:45:59 by madinata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a' - 1;
	while (letter++ < 'z')
	{
		write(1, &letter, 1);
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
