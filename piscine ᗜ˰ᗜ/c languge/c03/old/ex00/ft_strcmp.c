/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinchong <xinchong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:34:48 by xinchong          #+#    #+#             */
/*   Updated: 2026/04/20 12:06:26 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	*str1;
	char	*str2;
	int		r;

	str1 = "Hello";
	str2 = "Hell";
	r = ft_strcmp(str1, str2);
	printf("%i", r);
}*/
