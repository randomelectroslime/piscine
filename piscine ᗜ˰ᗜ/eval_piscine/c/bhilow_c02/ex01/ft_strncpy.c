/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhinlow <bhinlow@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 10:28:58 by bhinlow           #+#    #+#             */
/*   Updated: 2026/04/16 20:10:42 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i++ < n && *src)
		*(dest++) = *(src++);
	while (i++ < n)
		*(dest++) = '\0';
	return (dest);
}

#include <stdio.h>
int	main()
{
	char	me[15];

	ft_strncpy(me, "Hello World!", 5);
	printf("Result: %s\n", me);
}

