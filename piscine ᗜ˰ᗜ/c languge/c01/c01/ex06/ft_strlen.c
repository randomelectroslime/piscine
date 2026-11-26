/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinchong <xinchong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:10:09 by xinchong          #+#    #+#             */
/*   Updated: 2026/04/14 17:07:31 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	str_count;

	str_count = 0;
	while (*str)
	{
		str_count++;
		str++;
	}
	return (str_count);
}

/*int	main(void)
{
	char	*test;
	int		size;

	*test = "This is ex06.";
	size = ft_strlen(test);
	printf("%i", size);
	return (0);
}*/
