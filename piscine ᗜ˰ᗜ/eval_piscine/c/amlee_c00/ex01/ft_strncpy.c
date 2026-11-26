/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amlee <amlee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 08:03:02 by amlee             #+#    #+#             */
/*   Updated: 2026/04/22 14:10:11 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
//no auto put \0, should have memory leak as original function intended.

#include <stdio.h>

int	main(void)
{
	char	source[] = "Hi! I'm Grassy!\0";
	char	destination[20];
	unsigned int	n = 10;

	ft_strncpy(destination, source, n);
	printf("copied (n=%u): %s\n", n, destination);
	return (0);
}

