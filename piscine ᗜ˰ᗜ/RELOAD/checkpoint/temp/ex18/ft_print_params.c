/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinchong <xinchong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 15:56:08 by xinchong          #+#    #+#             */
/*   Updated: 2026/07/24 18:15:17 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	main(int argc, char *argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc < 2)
	{
		return (0);
	}
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
