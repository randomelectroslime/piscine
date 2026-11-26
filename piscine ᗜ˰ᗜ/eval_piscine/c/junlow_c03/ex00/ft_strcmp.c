/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlow <junlow@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 07:59:32 by junlow            #+#    #+#             */
/*   Updated: 2026/04/24 11:17:54 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
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
	char	s1[] = "Hello world";
	char	s2[] = "Hello qorld";
	int		result;

	result = ft_strcmp(s1, s2);
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

