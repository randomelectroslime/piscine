/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatham <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 13:59:48 by adatham           #+#    #+#             */
/*   Updated: 2026/04/13 14:29:02 by adatham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_swap(int *a, int *b)
{
	int	temp;

	if (*a > *b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	position;
	int	j;

	position = 0;
	j = 0;
	size--;
	while (position < size)
	{
		j = position + 1;
		while (j <= size)
		{
			ft_swap((tab + position), &tab[j]);
			j++;
		}
		position++;
	}
}
