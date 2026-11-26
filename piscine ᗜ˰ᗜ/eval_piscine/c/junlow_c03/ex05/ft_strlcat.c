/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlow <junlow@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 21:45:23 by junlow            #+#    #+#             */
/*   Updated: 2026/04/24 11:32:11 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	to_fill;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	to_fill = size - dest_len - 1;
	if (dest_len >= size)
		return (size + src_len);
	while ((src[i] != '\0') && (to_fill != 0))
	{
		dest[dest_len + i] = src[i];
		i++;
		to_fill--;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

int	main(void)
{
	char			dest[50] = "Hello World!";
	char			src[] = " Bye World...";
	unsigned int	res;
	unsigned int	size;

	size = 10;
	printf("dest before: %s\nsrc before: %s\n\n", dest, src);
	res = ft_strlcat(dest, src, size);
	printf("dest after: %s\nsize: %d\n", dest, size);
	if (size >= res)
		printf("size of %d was sufficient\n", size);
	else
		printf("size of %d is required\n", res);
	return (0);
}

