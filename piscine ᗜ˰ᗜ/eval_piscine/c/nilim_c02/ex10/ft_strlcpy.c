/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilim <nilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 10:05:12 by nilim             #+#    #+#             */
/*   Updated: 2026/04/24 10:38:38 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (*src != '\0')
	{
		if (i < (size - 1))
			dest[i] = *src;
		src++;
		i++;
	}
	*dest = '\0';
	return (i);
}

#include <stdio.h>
int main(){
	char *a = "legendary";
	char b[8] = "";
	printf("%d", ft_strlcpy(b,a,8));
	ft_strlcpy(b,a,8);
	printf("%s", b);
}

