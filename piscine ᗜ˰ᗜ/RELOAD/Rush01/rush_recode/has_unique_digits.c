/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_unique_digits.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilim <chilim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 18:59:45 by chilim            #+#    #+#             */
/*   Updated: 2026/07/27 19:13:55 by chilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>

bool	is_valid(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0')
			return (false);
		if (str[i] > '9')
			return (false);
		i++;
	}
	return (true);
}

int	has_unique_digits(char *str)
{
	int	i;
	int	j;

	if (!is_valid(str))
		return (0);
	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	int	result;

	result = has_unique_digits("");
	printf("%d\n", result);
}
*/
