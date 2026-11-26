/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinchong <xinchong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:17:35 by xinchong          #+#    #+#             */
/*   Updated: 2026/04/21 15:43:06 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	char			temp;

	i = 0;
	if (size == 0)
		return (*dest);
	while (dest[i])
		i++;
	j = 0;
	if (size)
	{
		while (j < size - 1 && src[j] != '\0')
		{
			temp = src[j];
			dest[i] = temp;
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	return (*dest);
}

int	main(void)
{
	char	src[] = "James";
	char	dest[] = "Hello ";
	char	r;

	r = strlcat("hello", "james", 3);
	printf("%s\n", dest);
	printf("%s\n", src);
	ft_strlcat(dest, src, 3);
	printf("%s\n", dest);
	printf("%d\n", r);
	return (0);
}
