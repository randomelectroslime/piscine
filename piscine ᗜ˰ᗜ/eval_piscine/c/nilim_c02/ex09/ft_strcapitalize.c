/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilim <nilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 09:31:33 by nilim             #+#    #+#             */
/*   Updated: 2026/04/24 10:37:24 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

void	wordcounter(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 97) && (*str <= 122))
		{
			*str -= 32;
			while ((*str > 64 && *str < 91) || (*str > 96 && *str < 123))
			{
				str++;
				if (*str > 64 && *str < 91)
					*str += 32;
			}
		}
		else if ((*str >= 65) && (*str <= 90))
		{
			while ((*str > 64 && *str < 91) || (*str > 96 && *str < 123))
			{
				str++;
				if (*str > 64 && *str < 91)
					*str += 32;
			}
		}
		str++;
	}
}

char	*ft_strcapitalize(char *str)
{
	char	*backup;

	backup = str;
	if (*str == 0)
		return (0);
	wordcounter(str);
	return (backup);
}

#include <stdio.h>
int main(){
	char a[] ="hi, how are you? 42worDs forty-two; fifty+and+oNe";
	printf("%s", ft_strcapitalize(a));
}

