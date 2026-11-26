/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halim <halim@student.edu.my>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 19:00:23 by halim             #+#    #+#             */
/*   Updated: 2026/04/16 18:38:51 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	*a = *b;
	*b = *a;
}

#include <stdio.h>
int	main()
{
	int a = 10;
	int b = 5;

	printf("Before swap: \n");
	printf("%d\n", a);
	printf("%d\n", b);

	ft_swap(&a, &b);
	printf("After swap: \n");
	printf("%d\n", a);
	printf("%d\n", b);
}
