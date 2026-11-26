/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatham <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:54:01 by adatham           #+#    #+#             */
/*   Updated: 2026/04/14 16:21:39 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	char_count;

	char_count = 0;
	while (*str)
	{
		char_count++;
		str++;
	}
	return (char_count);
}
