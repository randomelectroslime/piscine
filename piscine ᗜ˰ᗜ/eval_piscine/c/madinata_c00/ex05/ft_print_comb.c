/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madinata <madinata@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 10:27:09 by madinata          #+#    #+#             */
/*   Updated: 2026/04/09 10:27:16 by madinata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0' - 1;
	while (i++ < '9')
	{
		j = i;
		while (j++ < '9')
		{
			k = j;
			while (k++ < '9')
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &k, 1);
				if (i < '7' || j < '8' || k < '9')
				{
					write(1, (char []){',', ' '}, 2);
				}
			}
		}
	}
}

int	main(void)
{
	ft_print_comb();
}
