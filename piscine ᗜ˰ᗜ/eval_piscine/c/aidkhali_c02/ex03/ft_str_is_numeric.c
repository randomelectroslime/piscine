/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidkhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:36:54 by aidkhali          #+#    #+#             */
/*   Updated: 2026/04/16 19:15:07 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	i;

	if (!*str)
	{
		return (1);
	}
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	*str01 = "123";
	char	*str02 = "T100";
	char	*str03 = "123 456";
	char	*str04 = "";

	printf("%s: %d\n", str01, ft_str_is_numeric(str01));
	printf("%s: %d\n", str02, ft_str_is_numeric(str02));
	printf("%s: %d\n", str03, ft_str_is_numeric(str03));
	printf("%s: %d\n", str04, ft_str_is_numeric(str04));
}
