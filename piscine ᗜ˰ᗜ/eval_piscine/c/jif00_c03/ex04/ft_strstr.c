/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jifoo <jifoo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 20:10:48 by jifoo             #+#    #+#             */
/*   Updated: 2026/04/18 19:05:24 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		strc;
	int		findc;

	if (*to_find == '\0')
		return (str);
	strc = 0;
	while (str[strc])
	{
		findc = 0;
		while (str[strc + findc] && str[strc + findc] == to_find[findc])
		{
			findc++;
			if (to_find[findc] == '\0')
				return (&str[strc]);
		}
		strc++;
	}
	return (str);
}


char	*ft_strstr(char *str, char *to_find);

int	main()
{
		char	str[] = "Hello World nice to meeet you";
		char	to_find[] = "World";

		printf("%s\n", ft_strstr(str, to_find));
}

