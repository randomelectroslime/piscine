/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhinlow <bhinlow@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:27:50 by bhinlow           #+#    #+#             */
/*   Updated: 2026/04/15 13:27:59 by bhinlow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main()
{
	char	newline = 10;

	printf("AbC!@#: %d\n", ft_str_is_printable("AbC!@#"));
	printf("[space]: %d\n", ft_str_is_printable(" "));
	printf("[newline]: %d\n", ft_str_is_printable(&newline));
	printf(": %d\n", ft_str_is_printable(""));
}
*/
