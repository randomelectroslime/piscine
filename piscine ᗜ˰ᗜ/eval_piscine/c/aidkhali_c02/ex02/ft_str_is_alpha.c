/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidkhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:33:40 by aidkhali          #+#    #+#             */
/*   Updated: 2026/04/16 19:14:13 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (!*str)
	{
		return (1);
	}
	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
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

	printf("%s: %d\n", str01, ft_str_is_alpha(str01));
	printf("%s: %d\n", str02, ft_str_is_alpha(str02));
	printf("%s: %d\n", str03, ft_str_is_alpha(str03));
	printf("%s: %d\n", str04, ft_str_is_alpha(str04));
	printf("%s: %d\n", str05, ft_str_is_alpha(str05));
}
