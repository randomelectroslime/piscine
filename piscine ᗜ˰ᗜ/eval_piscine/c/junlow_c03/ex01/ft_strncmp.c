/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlow <junlow@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 08:23:22 by junlow            #+#    #+#             */
/*   Updated: 2026/04/24 11:19:56 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char			s1[] = "Hello World!";
	char			s2[] = "Hello World!";
	unsigned int	n;
	char			result;

	n = 7;
	result = ft_strncmp(s1, s2, n);
	if (result == 0)
	{
		printf("Equal");
	}
	else
	{
		printf("Unequal = %d", result);
	}
	return (0);
}

