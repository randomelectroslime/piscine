/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinchong <xinchong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 10:44:22 by xinchong          #+#    #+#             */
/*   Updated: 2026/07/22 12:00:56 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	num;

	num = 1;
	while (num * num <= nb)
	{
		num++;
		if (num * num == nb)
			return (num);
	}
	return (0);
}
