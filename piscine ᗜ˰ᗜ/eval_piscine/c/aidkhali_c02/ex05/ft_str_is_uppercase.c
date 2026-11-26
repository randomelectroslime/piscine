/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidkhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:44:09 by aidkhali          #+#    #+#             */
/*   Updated: 2026/04/16 19:16:32 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	i;

	if (!*str)
	{
		return (1);
	}
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	*str01 = "TEST";
	char	*str02 = "Test";
	char	*str03 = "TEST ING";
	char	*str04 = "TEST123";
	char	*str05 = "";

	printf("%s: %d\n", str01, ft_str_is_uppercase(str01));
	printf("%s: %d\n", str02, ft_str_is_uppercase(str02));
	printf("%s: %d\n", str03, ft_str_is_uppercase(str03));
	printf("%s: %d\n", str04, ft_str_is_uppercase(str04));
	printf("%s: %d\n", str05, ft_str_is_uppercase(str05));
}
