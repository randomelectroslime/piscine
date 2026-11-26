/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilim <nilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:58:29 by nilim             #+#    #+#             */
/*   Updated: 2026/04/14 12:38:07 by nilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*backup;

	backup = str;
	while (*str != '\0')
	{
		if ((*str >= 97) && (*str <= 122))
			*str -= 32;
		str++;
	}
	return (backup);
}
/*
int main(){
	char r[] = {"apple"};
	printf("%s \n", ft_strupcase(r));
}
*/
