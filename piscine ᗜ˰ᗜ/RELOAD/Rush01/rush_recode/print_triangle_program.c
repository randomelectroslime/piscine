/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_triangle_program.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinchong <xinchong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 18:38:55 by xinchong          #+#    #+#             */
/*   Updated: 2026/07/27 18:56:35 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	print_triangle(int n);

int	is_valid(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (!(*str <= '9' && *str > '0'))
			return (0);
		str++;
		count++;
	}
	if (count > 1)
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	int	a;

	if (argc != 2)
		return (1);
	if (is_valid(argv[1]) != 1)
		return (1);
	a = argv[1][0] - '0';
	print_triangle(a);
	return (0);
}
