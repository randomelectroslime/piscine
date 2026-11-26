/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinchong <xinchong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:00:48 by xinchong          #+#    #+#             */
/*   Updated: 2026/04/14 15:12:22 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	n1;
	int	n2;

	n1 = 1;
	n2 = 2;
	printf("%i %i\n", n1 ,n2);
	ft_swap(&n1, &n2);
	printf("%i %i", n1 ,n2);
	return (0);
}*/
