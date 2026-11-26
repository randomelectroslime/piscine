/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinchong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 17:25:08 by xinchong          #+#    #+#             */
/*   Updated: 2026/07/24 19:24:44 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*b = *a;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 1;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_sort(int c, char **argv)
{
	int	j;
	int	i;

	i = 0;
	while (i < c - 1)
	{
		j = 0;
		while ( j < c - i - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1] )> 0)
				ft_swap(&argv[j], &argv[j + 1]);
			j++;
		} i++; 
	} 
}

int	main(int argc, char **argv) 
{ 
	int	i;

	i = 1;
	ft_sort(argc, argv);
	if (argc < 2)
	{
		return(0);
	}
		
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}

	return (0);
}
