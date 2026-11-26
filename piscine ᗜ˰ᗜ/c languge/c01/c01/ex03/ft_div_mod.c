/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinchong <xinchong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:17:10 by xinchong          #+#    #+#             */
/*   Updated: 2026/04/14 17:12:09 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	n1;
	int	n2;
	int	a1;
	int	a2;

	n1 = 1;
	n2 = 2;
	ft_div_mod(n1, n2, &a1, &a2);
	printf("%i / %i = %i\n", n1, n2, a1);
	printf("%i %s %i = %i", n1, "%", n2, a2);
	return(0);
}*/
