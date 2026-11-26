/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinchong <xinchong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 18:14:23 by xinchong          #+#    #+#             */
/*   Updated: 2026/04/30 18:22:30 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	ans;
	int	i;

	ans = 1;
	i = 2;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		ans *= i;
		i++;
	}
	return (ans);
}
