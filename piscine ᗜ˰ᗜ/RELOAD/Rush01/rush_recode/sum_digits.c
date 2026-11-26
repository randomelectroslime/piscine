/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_digits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinchong <xinchong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 17:12:29 by xinchong          #+#    #+#             */
/*   Updated: 2026/07/27 17:38:53 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	sum_digits(char *str)
{
	int	i;
	int	j;
	int	ans;

	i = 0;
	j = 0;
	ans = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (-1);
		i++;
	}
	while (str[j] != '\0')
	{
		ans += (str[j] - '0');
		j++;
	}
	return (ans);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc != 2)
		return 0;
	int ret = sum_digits(argv[1]);
	printf("ans: %d\n", ret);
}*/
