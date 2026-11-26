/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinchong <xinchong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 13:51:54 by xinchong          #+#    #+#             */
/*   Updated: 2026/04/29 15:32:46 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 1;
	while (s1[i] != '\0' || s2 != '\0')
	{
		if (s1[i] != s2 [i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

void	ft_swap(char *a, char *b)
{
	int	temp;

	temp = *a;
	*b = *a;
	temp = *b;
}

void	ft_sort(int argc, char *argv)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (j < argc - i - 1)
		{
			if (ft_strcmp(&argv[j], &argv[j + 1]) > 0)
				ft_swap(&argv[j], &argv[j + 1]);
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	**str;

	*str = *argv;
	ft_sort(argc,str);
	i = 1;
	if (argv < 2)
	{
		return (0);
	}
	while (i < argc)
	{
		j = 0;
		while (str[i][j])
		{
			write(1, &str[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
