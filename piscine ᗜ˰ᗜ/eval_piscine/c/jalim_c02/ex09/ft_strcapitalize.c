/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalim <jalim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:20:12 by jalim             #+#    #+#             */
/*   Updated: 2026/04/22 14:50:26 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (flag == 1 && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				flag = 0;
			}
			else if (flag == 0 && str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] +32;
			flag = 0;
		}
		else
			flag = 1;
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char	str1[] = "hi, how arE you? 42worDs forty-two; fifty+and+oNe";

	printf("Before : %s\n", str1);
	printf("After  : %s\n", ft_strcapitalize(str1));
	return (0);
}
