/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinchong <xinchong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 12:21:07 by xinchong          #+#    #+#             */
/*   Updated: 2026/07/22 19:42:46 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	ans;
	int	i;

	ans = 1;
	i = 2;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		ans *= i;
		i++;
	}
	return (ans);
}
