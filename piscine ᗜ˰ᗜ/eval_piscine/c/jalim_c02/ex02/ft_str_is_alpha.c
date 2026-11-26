/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalim <jalim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 10:07:45 by jalim             #+#    #+#             */
/*   Updated: 2026/04/22 14:44:22 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	char	str1[] = "Aa";
	char	str0[] = "a1";

	printf("%s : return %d\n", str1, ft_str_is_alpha(str1));
	printf("%s : return %d\n", str0, ft_str_is_alpha(str0));
}
