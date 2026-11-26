/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_unique_digits_program.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinchong <xinchong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 19:17:49 by xinchong          #+#    #+#             */
/*   Updated: 2026/07/27 19:23:54 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	has_unique_digits(char *str);

int	main(int argc, char **argv)
{
	int	a;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	a = has_unique_digits(argv[1]) + '0';
	write(1, &a, 1);
	write(1, "\n", 1);
	return (0);
}
