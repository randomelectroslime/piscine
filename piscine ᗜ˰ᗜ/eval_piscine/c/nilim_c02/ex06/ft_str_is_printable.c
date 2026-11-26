/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilim <nilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:51:20 by nilim             #+#    #+#             */
/*   Updated: 2026/04/14 11:57:10 by nilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 32) || (*str > 126))
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
