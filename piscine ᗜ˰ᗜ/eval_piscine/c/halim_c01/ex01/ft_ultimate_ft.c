/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halim <halim@student.edu.my>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 16:01:22 by halim             #+#    #+#             */
/*   Updated: 2026/04/16 18:36:39 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

#include <stdio.h>
int	main()
{
	int n = 10;
	int *atr = &n;
	int **atr1 = &atr;
	int ***atr2 = &atr1;
	int ****atr3 = &atr2;
	int *****atr4 = &atr3;
	int ******atr5 = &atr4;
	int *******atr6 = &atr5;
	int ********atr7 = &atr6;
	int *********atr8 = &atr7;
	printf("Before the function -> %d\n", *********atr8);
	ft_ultimate_ft(atr8);
	printf("After the function -> %d\n", *********atr8);
}
