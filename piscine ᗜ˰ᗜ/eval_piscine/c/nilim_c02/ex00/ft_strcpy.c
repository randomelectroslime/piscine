/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilim <nilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 07:29:19 by nilim             #+#    #+#             */
/*   Updated: 2026/04/24 10:32:38 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

int main()
{
	char src[3] = "lah"; 
//altho size is 3, by initialising with a string literal, 
//the null terminator is automatically added.
//
	char dest[4];
//hence, an extra space is required in destination array in order to
//make room for null terminator.
//
	printf("%s \n", ft_strcpy(dest, src));
}

