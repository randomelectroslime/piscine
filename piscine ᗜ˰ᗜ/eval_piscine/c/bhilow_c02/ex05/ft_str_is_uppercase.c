/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhinlow <bhinlow@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 11:59:42 by bhinlow           #+#    #+#             */
/*   Updated: 2026/04/15 11:59:43 by bhinlow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("ABC: %d\n", ft_str_is_uppercase("ABC"));
	printf("abc: %d\n", ft_str_is_uppercase("abc"));
	printf(": %d\n", ft_str_is_uppercase(""));
}
*/
