/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madinata <madinata@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:52:41 by madinata          #+#    #+#             */
/*   Updated: 2026/04/15 13:32:09 by madinata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	is_space(char c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int		neg_mult;
	int		is_prefix;
	int		num;

	neg_mult = 1;
	is_prefix = 2;
	num = 0;
	while (*str != '\0')
	{
		if (is_prefix >= 1 && *str == '-')
		{
			is_prefix = 1;
			neg_mult *= -1;
		}
		else if (*str >= '0' && *str <= '9')
		{
			is_prefix = 0;
			num = num * 10 + (*str - '0');
		}
		else if (!((is_prefix >= 2 && is_space(*str))
				|| (is_prefix >= 1 && *str == '+')))
			break ;
		str++;
	}
	return (num * neg_mult);
}
/*
int main(void)
{
	char str[] = " ---+--+123-4ab567";
	int res = ft_atoi(str);
	printf("%d", res);
}
*/
