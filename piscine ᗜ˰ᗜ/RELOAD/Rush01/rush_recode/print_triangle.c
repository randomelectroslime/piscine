/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_triangle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chilim <chilim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 18:20:51 by chilim            #+#    #+#             */
/*   Updated: 2026/07/27 18:33:10 by chilim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

bool	is_valid_input(int n)
{
	if (n < 0)
		return (false);
	if (n > 9)
		return (false);
	return (true);
}

void	print_triangle(int n)
{
	int		i;
	int		j;
	char	c;

	i = 1;
	if (!is_valid_input(n))
		return ;
	while (i <= n)
	{
		j = 1;
		while (j < i + 1)
		{
			c = j + '0';
			write(1, &c, 1);
			if (j < i)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

/*
int	main(void)
{
	print_triangle(10);
}
*/
