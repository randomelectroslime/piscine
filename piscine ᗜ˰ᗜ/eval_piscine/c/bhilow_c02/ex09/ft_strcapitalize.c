/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhinlow <bhinlow@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:56:32 by bhinlow           #+#    #+#             */
/*   Updated: 2026/04/16 20:18:59 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
			i = 1;
		if (i == 0 && (*str >= 'A' && *str <= 'Z'))
			*str += 32;
		if (i == 1)
		{
			if (*str >= 'a' && *str <= 'z')
			{
				*str -= 32;
				i = 0;
			}
			if ((*str >= 'A' && *str <= 'Z') || (*str >= '0' && *str <= '9'))
				i = 0;
		}
		str++;
	}
	return (str);
}

#include <stdio.h>
int	main()
{
	char alphabet[] = "Hi, how are YOU? 42WORDS forty-two; fifty+and+one";
	ft_strcapitalize(alphabet);
	printf("%s\n", alphabet);
}

