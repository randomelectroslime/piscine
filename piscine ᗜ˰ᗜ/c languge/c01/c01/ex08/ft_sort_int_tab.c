/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinchong <xinchong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:55:45 by xinchong          #+#    #+#             */
/*   Updated: 2026/04/14 20:14:17 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size -1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

/*void	print_sort(void)
{
	int	arr[6];
	int	size;
	int	i;

	arr[0] = 4;
	arr[1] = 2;
	arr[2] = 1;
	arr[3] = 5;
	arr[4] = 3;
	arr[5] = 0;
	size = 6;
	i = 0;
	printf("\n");
	ft_sort_int_tab(arr, size);
	while (i < size)
	{
		printf("%d", arr[i]);
		i++;
	}
}

int	main(void)
{
	int	arr[6];
	int	size;
	int	i;

	arr[0] = 4;
	arr[1] = 2;
	arr[2] = 1;
	arr[3] = 5;
	arr[4] = 3;
	arr[5] = 0;
	size = 6;
	i = 0;
	while (i < size)
	{
		printf("%d", arr[i]);
		i++;
	}
	print_sort();
	return (0);
}*/
