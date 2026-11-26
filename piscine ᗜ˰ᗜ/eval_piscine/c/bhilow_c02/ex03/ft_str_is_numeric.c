/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhinlow <bhinlow@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 11:10:49 by bhinlow           #+#    #+#             */
/*   Updated: 2026/04/16 20:12:34 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	printf("0123456789: %d\n", ft_str_is_numeric("0123456789"));
	printf("Hello, 42: %d\n", ft_str_is_numeric("Hello, 42"));
	printf(": %d\n", ft_str_is_numeric(""));
}

