/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidkhali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:46:07 by aidkhali          #+#    #+#             */
/*   Updated: 2026/04/16 19:18:12 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	i;

	if (!*str)
	{
		return (1);
	}
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	*str01 = "TEST";
	char	*str02 = "abcdefghijklmnopqrstuvwxyz";
	char	*str03 = "\n";
	char	*str04 = "\tempo";
	char	*str05 = "";

	printf("%s: %d\n", str01, ft_str_is_printable(str01));
	printf("%s: %d\n", str02, ft_str_is_printable(str02));
	printf("%s: %d\n", str03, ft_str_is_printable(str03));
	printf("%s: %d\n", str04, ft_str_is_printable(str04));
	printf("%s: %d\n", str05, ft_str_is_printable(str05));
}
