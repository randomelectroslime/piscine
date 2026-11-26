/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalim <jalim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 13:16:48 by jalim             #+#    #+#             */
/*   Updated: 2026/04/22 14:40:16 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;

    while (src[i])
    {
        dest[i] = src[i];
        i = i + 1;
    }

    dest[i] = src[i];
    return (dest);
}

int	main(void)
{
	char	source[] = "Welcome to c02! We still more to go -> ";
	char	destination[] = "error";

	ft_strcpy(destination, source);
	printf("%s", destination);
	return (0);
}
