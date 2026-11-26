/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 09:58:18 by nilim             #+#    #+#             */
/*   Updated: 2026/04/14 10:46:19 by nilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 48) || (*str > 57))
			return (0);
		else
			str++;
	}
	return (1);
}
/*
int main(){
	char* str = "apple";
	if (ft_str_is_numeric(str) == 1)
		printf("%s \n", "dopne");
}
*/
