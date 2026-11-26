/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arwan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 12:09:24 by arwan             #+#    #+#             */
/*   Updated: 2026/04/10 12:09:39 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	num_flag;

	num_flag = 'P';
	if (n < 0)
	{
		num_flag = 'N';
		write(1, &num_flag, 1);
	}
	else
	{
		num_flag = 'P';
		write(1, &num_flag, 1);
	}
}

 int	main(void) 
 { 
 	ft_is_negative(-2); 
 	ft_is_negative(100); 
 	return (0); 
 } 
