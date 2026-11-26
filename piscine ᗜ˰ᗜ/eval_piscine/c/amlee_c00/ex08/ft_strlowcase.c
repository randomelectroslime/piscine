/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amlee <amlee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 08:19:39 by amlee             #+#    #+#             */
/*   Updated: 2026/04/17 08:19:42 by amlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//the fixed difference between lower and upper is 32 EXACTLY
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	char c[] = "GrAsSy~\0";
	ft_strupcase(c);
	printf("%s\n", c);
}
*/
