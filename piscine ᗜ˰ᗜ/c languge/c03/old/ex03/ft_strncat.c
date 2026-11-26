/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinchong <xinchong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:01:15 by xinchong          #+#    #+#             */
/*   Updated: 2026/04/22 12:34:15 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (nb == 0)
	{
		return (dest);
	}
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	src[] = "Hello";
	char	dest[] = "Hello. ";

	printf ("%s\n", src);
	printf ("%s\n", dest);
	ft_strncat (dest, src, 3);
	printf ("%s\n", dest);
	return (0);
}*/
