/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinchong <xinchong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 18:48:08 by xinchong          #+#    #+#             */
/*   Updated: 2026/04/30 19:04:41 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	num;
	int	i;

	i = 0;
	num = 1;
	if (power == 0 || (nb == 0 && power == 0))
		return (1);
	if (power < 0)
		return (0);
	while (i < power)
	{
		num *= nb;
		i++;
	}
	return (num);
}
