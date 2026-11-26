/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arwan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 12:09:24 by arwan             #+#    #+#             */
/*   Updated: 2026/04/09 12:09:37 by arwan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char	num_as_char;

	num_as_char = '0';
	while (num_as_char <= '9')
	{
		write(1, &num_as_char, 1);
		num_as_char++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
