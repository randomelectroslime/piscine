/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madinata <madinata@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 08:38:53 by madinata          #+#    #+#             */
/*   Updated: 2026/04/27 16:46:16 by madinata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstr(char *str, int fd)
{
	while (*str != '\0')
		write(fd, str++, 1);
}

// Compare 2 strings in fixed length instead of stopping with null
int	strcmp_fixed(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}

int	strlength(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ptrswap(char **ptr1, char **ptr2)
{
	char	*temp;

	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
