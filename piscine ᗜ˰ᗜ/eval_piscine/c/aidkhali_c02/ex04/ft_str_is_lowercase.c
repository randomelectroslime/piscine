/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidkhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:41:17 by aidkhali          #+#    #+#             */
/*   Updated: 2026/04/16 19:15:49 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	i;

	if (!*str)
	{
		return (1);
	}
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	*str01 = "test";
	char	*str02 = "Test";
	char	*str03 = "test ing";
	char	*str04 = "test123";
	char	*str05 = "";

	printf("%s: %d\n", str01, ft_str_is_lowercase(str01));
	printf("%s: %d\n", str02, ft_str_is_lowercase(str02));
	printf("%s: %d\n", str03, ft_str_is_lowercase(str03));
	printf("%s: %d\n", str04, ft_str_is_lowercase(str04));
	printf("%s: %d\n", str05, ft_str_is_lowercase(str05));
}
