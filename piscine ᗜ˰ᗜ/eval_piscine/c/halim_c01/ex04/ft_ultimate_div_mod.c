/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halim <halim@student.edu.my>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 16:15:22 by halim             #+#    #+#             */
/*   Updated: 2026/04/16 18:42:11 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	*a = *a % *b;
	*b = c;
}

#include <stdio.h>
int 	main()
{
	int a = 50;
	int b = 17;

	printf("Before divide:\n");
	printf("%d\n", a);
	printf("%d\n", b);

	ft_ultimate_div_mod(&a, &b);

	printf("After divide:\n");
	printf("%d\n", a);
	printf("%d\n", b);
}
