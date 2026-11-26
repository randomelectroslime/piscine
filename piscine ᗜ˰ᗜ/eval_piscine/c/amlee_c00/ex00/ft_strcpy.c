/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amlee <amlee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 08:02:46 by amlee             #+#    #+#             */
/*   Updated: 2026/04/22 14:06:24 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
//essentially, duplicating *src to *dest letter by letter.

int	main(void)
{
	char	source[] = "hi! im grassy!";
	char	destination[15];
//adjuest the byte to size (including \0)

	ft_strcpy(destination, source);

	printf("original: %s\n", source);
	printf("duplicated: %s\n", destination);

	return (0);
}
