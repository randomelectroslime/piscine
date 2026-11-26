/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatham <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:08:50 by adatham           #+#    #+#             */
/*   Updated: 2026/04/13 17:12:40 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	head;
	int	tail;
	int	wagner_holdthisforme;

	head = 0;
	tail = size - 1;

	while (*tab)
	{
		write(1, tab, 1);
		tab++;
	}
	tab = tab -5;
	while (head < tail)
	{
		wagner_holdthisforme = *(tab + head);
		*(tab + head) = *(tab + tail);
		*(tab + tail) = wagner_holdthisforme;
		head++;
		tail--;
	}
	
	while (*tab)
	{
		write(1, tab, 1);
		tab++;
	}
}

int	main(void)
{
	int array[5] = {97,98,99,100,101};
	
	ft_rev_int_tab(&array, 5);
}
	
		
