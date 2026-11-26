/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhinlow <bhinlow@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:14:25 by bhinlow           #+#    #+#             */
/*   Updated: 2026/04/16 20:09:25 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	while (*src)
		*(dest++) = *(src++);
	*dest = '\0';
	return (dest);
}

#include <stdio.h>
int	main()
{
	char	me[15];
	
	printf("Before: %s\n", me);
	ft_strcpy(me, "Hello World!");
	printf("After: %s\n", me);
}

