/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhinlow <bhinlow@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:47:43 by bhinlow           #+#    #+#             */
/*   Updated: 2026/04/15 13:47:45 by bhinlow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	char alphabet[] = "abcABC~!";

	ft_strlowcase(alphabet);
	printf("%s\n", alphabet);
}
*/
