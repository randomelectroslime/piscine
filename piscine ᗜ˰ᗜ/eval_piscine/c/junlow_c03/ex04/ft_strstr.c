/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junlow <junlow@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 20:41:57 by junlow            #+#    #+#             */
/*   Updated: 2026/04/24 11:29:29 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0')
		{
			if (str[i + j] == to_find[j])
				j++;
			else
				break ;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	*str;
	char	*to_find;
	char	*res;

	str = "Hello World!";
	to_find = "l";
	printf("str: %s\nto_find: %s\n\n", str, to_find);
	res = ft_strstr(str, to_find);
	printf("Where it was found: %s", res);
	return (0);
}

