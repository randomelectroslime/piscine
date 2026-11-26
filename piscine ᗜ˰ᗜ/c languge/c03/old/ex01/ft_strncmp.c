/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinchong <xinchong@student.42kl.edu.my>     +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 14:27:40 by xinchong          #+#    #+#             */
/*   Updated: 2026/04/22 16:24:01 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;
	int		r;

	str1 = "Hello";
	str2 = "Hella";
	r = ft_strncmp(str1, str2, 4);
	printf("%i", r);
}
*/