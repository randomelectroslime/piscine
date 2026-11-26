/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minisort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinchong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 16:04:56 by xinchong          #+#    #+#             */
/*   Updated: 2026/07/22 16:49:56 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	minisort(int *a, int *b, int *c)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = *a;
	n2 = *b;
	n3 = *c;
	if (n1 <= n2 && n1 <= n3)
	{
		*a = n1;
		if (n2 <= n3)
		{
			*b = n2;
			*c = n3;
		}
		else
		{
			*b = n3;
			*c = n2;
		}
	}
	else if (n2 <= n1 && n2 <= n3)
	{	
		*a = n2;
		if (n1 <= n3)
		{
			*b = n1;
			*c = n3;
		}
		else
		{
			*b = n3;
			*c = n1;
		}
	}
	else
	{
		*a = n3;
		if (n1 <= n2)
		{
			*b = n1;
			*c = n2;
		}
		else
		{
			*b = n2;
			*c = n1;
		}
	}
}

#include <stdio.h>

int	main(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = 1000;
	n2 = 45;
	n3 = 523;
	printf(" og: %d %d %d\n", n1, n2, n3);
	minisort(&n1, &n2, &n3);
	printf(" asc: %d %d %d\n", n1, n2, n3);
	return (0);
}	
