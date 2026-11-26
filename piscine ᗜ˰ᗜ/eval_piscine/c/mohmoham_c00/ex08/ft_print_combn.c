/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmoham <mohmoham@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 12:50:36 by mohmoham          #+#    #+#             */
/*   Updated: 2026/04/21 18:40:05 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_buffer(int buffer[10], int n);
void	ft_combn(int index, int start_digit, int n, int buffer[10]);
void	ft_print_combn(int n);

void	ft_print_combn(int n)
{
	int	buffer[10];

	if (n <= 0 || n >= 10)
		return ;
	ft_combn(0, 0, n, buffer);
	write(1, "\n", 1);
}

void	ft_combn(int index, int start_digit, int n, int buffer[10])
{
	int	d;

	if (index == n)
	{
		ft_print_buffer(buffer, n);
		if (!(buffer[0] == 10 - n))
			write(1, ", ", 2);
		return ;
	}
	d = start_digit;
	while (d <= 9)
	{
		buffer[index] = d;
		ft_combn(index + 1, d + 1, n, buffer);
		d++;
	}
}

void	ft_print_buffer(int buffer[10], int n)
{
	int		i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = buffer[i] + '0';
		write(1, &c, 1);
		i++;
	}
}

int	main()
{
	ft_print_combn(4);
	return (0);
}
