/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhinlow <bhinlow@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 11:49:32 by bhinlow           #+#    #+#             */
/*   Updated: 2026/04/15 11:49:57 by bhinlow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("abc: %d\n", ft_str_is_lowercase("abc"));
	printf("ABC: %d\n", ft_str_is_lowercase("ABC"));
	printf(": %d\n", ft_str_is_lowercase(""));
}
*/
