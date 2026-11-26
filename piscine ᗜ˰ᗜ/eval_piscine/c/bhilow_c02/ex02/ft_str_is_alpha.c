/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhinlow <bhinlow@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 10:57:47 by bhinlow           #+#    #+#             */
/*   Updated: 2026/04/16 20:11:57 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	printf("HelloWorld: %d\n", ft_str_is_alpha("HelloWorld"));
	printf("Hello World: %d\n", ft_str_is_alpha("Hello World"));
	printf(": %d\n", ft_str_is_alpha(""));
}

