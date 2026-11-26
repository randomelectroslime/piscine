/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinchong <xinchong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:40:48 by xinchong          #+#    #+#             */
/*   Updated: 2026/04/21 15:17:03 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			if (to_find[j] != '\0')
				return (&str[i]);
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "This is ex04.";
	char	find[] = "ex";

	printf ("My string : %s\n", str);
	printf ("To find : %s\n", find);
	printf ("Result : %s\n", ft_strstr(str, find));
	return (0);
}*/
