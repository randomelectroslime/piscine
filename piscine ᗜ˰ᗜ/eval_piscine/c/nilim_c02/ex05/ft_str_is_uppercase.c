/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilim <nilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:24:59 by nilim             #+#    #+#             */
/*   Updated: 2026/04/14 11:27:43 by nilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 65) || (*str > 90))
			return (0);
		else
			str++;
	}
	return (1);
}
/*
int main(){
	char* str = "apple";
	if (ft_str_is_uppercase(str) == 1)
		printf("%s \n", "dopne");
}
*/
