/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinchong <xinchong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 17:39:44 by xinchong          #+#    #+#             */
/*   Updated: 2026/04/14 20:13:37 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	num;
	int	temp;

	num = 0;
	while (num < size / 2)
	{
		temp = tab[num];
		tab[num] = tab[size - num - 1];
		tab[size - num - 1] = temp;
		num++;
	}
}

/*void	print_rev(void)
{
	int	arr[6];
	int	arr_size;
	int	i;

	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 3;
	arr[4] = 4;
	arr[5] = 5;
	arr_size = 6;
	i = 0;
	printf("\n");
	ft_rev_int_tab(arr, arr_size);
	while (i < arr_size)
	{
		printf("%i", arr[i]);
		i++;
	}
}

int	main(void)
{
	int	arr[6];
	int	arr_size;
	int	i;

	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 3;
	arr[4] = 4;
	arr[5] = 5;
	arr_size = 6;
	i = 0;
	while (i < arr_size)
	{
		printf("%i", arr[i]);
		i++;
	}
	print_rev();
	return (0);
}*/
