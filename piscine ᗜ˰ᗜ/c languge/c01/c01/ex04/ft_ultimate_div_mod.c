/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinchong <xinchong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:34:01 by xinchong          #+#    #+#             */
/*   Updated: 2026/04/14 17:11:02 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a % *b;
	*a = *a / *b;
	*b = temp;
}

/*int	main(void)
{
	int	n1;
	int	n2;

	n1 = 1;
	n2 = 2;
	ft_ultimate_div_mod(&n1, &n2);
	printf("%s = %i\n", "1 / 2", n1);
	printf("%s = %i", "1 % 2", n2);
	return (0);
}*/
