/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidkhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 19:49:16 by aidkhali          #+#    #+#             */
/*   Updated: 2026/04/16 19:09:42 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*src)
	{
		dest[i]= *src;
		src++;
		i++;
	}
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	str1[] = "Hello World!";
	char	str2[30];

	ft_strcpy(str2, str1);
	printf("%s", str2);
}
