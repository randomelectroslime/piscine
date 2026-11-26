/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilim <nilim@student.42kl.edu.my           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:01:41 by nilim             #+#    #+#             */
/*   Updated: 2026/04/14 11:24:16 by nilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 97) || (*str > 122))
			return (0);
		else
			str++;
	}
	return (1);
}
/*
int main(){
	char* str = "apple";
	if (ft_str_is_lowercase(str) == 1)
		printf("%s \n", "dopne");
}
*/
