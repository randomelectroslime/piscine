/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilim <nilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 12:34:11 by nilim             #+#    #+#             */
/*   Updated: 2026/04/15 10:03:23 by nilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*backup;

	backup = str;
	while (*str != '\0')
	{
		if ((*str >= 65) && (*str <= 90))
			*str += 32;
		str++;
	}
	return (backup);
}
/*
int main(){
	char r[] = {"apple"};
	printf("%s \n", ft_strlowcase(r));
}
*/
