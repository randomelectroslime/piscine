/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlow <junlow@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 08:37:42 by junlow            #+#    #+#             */
/*   Updated: 2026/04/24 11:22:01 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while ((j < nb) && (src[j] != '\0'))
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
	char			dest[] = "Hello World!";
	char			src[] = "Bye World...";
	unsigned int	nb;
	char			*res;

	nb = 3;
	printf("dest before strcat = %s\n\n", dest);
	res = ft_strncat(dest, src, nb);
	printf("dest after strcat = %s\n", res);
	return (0);
}

