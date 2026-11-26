/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilim <nilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:08:01 by nilim             #+#    #+#             */
/*   Updated: 2026/04/14 10:44:37 by nilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str <= 64) || (*str >= 91 && *str <= 96) || (*str >= 123))
			return (0);
		else
			str++;
	}
	return (1);
}
/*
int main(){
	char* str = "19991";
	if (ft_str_is_alpha(str) == 1)
		printf("%s \n", "dopne");
}
*/
