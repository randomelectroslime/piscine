/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlow <junlow@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 08:37:42 by junlow            #+#    #+#             */
/*   Updated: 2026/04/24 11:21:03 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[] = "Hello World!";
	char	src[] = "Bye World...";
	char	*res;

	printf("dest before strcat = %s\n\n", dest);
	res = ft_strcat(dest, src);
	printf("dest after strcat = %s\n", res);
	return (0);
}

