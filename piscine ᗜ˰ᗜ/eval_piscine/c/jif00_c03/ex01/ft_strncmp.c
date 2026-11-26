/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jifoo <jifoo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 21:38:41 by jifoo             #+#    #+#             */
/*   Updated: 2026/04/18 18:56:10 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i])
	{
		if (s1[i] != s2[i])
			i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}


int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main()
{
	char	s1[] = "teeiv";
	char	s2[] = "Cei";

	printf("%d\n", ft_strncmp(s1, s2, 15));
}

