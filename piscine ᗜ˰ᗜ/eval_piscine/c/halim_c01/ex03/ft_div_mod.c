/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halim <halim@student.edu.my>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 15:33:22 by halim             #+#    #+#             */
/*   Updated: 2026/04/16 18:40:11 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>
int	main()
{
	int c;
	int d;
	int e;
	int f;

	c = 100;
	d = 30;

	ft_div_mod(c, d, &e, &f);
	printf("%d\n", e);
	printf("%d", f);

}
