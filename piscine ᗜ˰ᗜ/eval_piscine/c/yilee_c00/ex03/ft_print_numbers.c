/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 14:47:30 by yilee             #+#    #+#             */
/*   Updated: 2026/04/09 18:12:38 by yilee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

int	main(void)
{
	ft_print_numbers();
}

void	ft_print_numbers(void)
{
	char	number;

	number = '1';
	while (number < ':')
	{
		write(1, &number, 1);
		number ++;
	}
}
