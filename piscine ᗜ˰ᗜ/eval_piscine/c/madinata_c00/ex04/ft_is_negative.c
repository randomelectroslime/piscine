/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madinata <madinata@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 18:28:52 by madinata          #+#    #+#             */
/*   Updated: 2026/04/08 18:28:56 by madinata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, &(int){'N'}, 1);
	}
	else if (n >= 0)
	{
		write(1, &(int){'P'}, 1);
	}
}

int	main(void)
{
	ft_is_negative(-1);
	ft_is_negative(4);
	ft_is_negative(0);
}
