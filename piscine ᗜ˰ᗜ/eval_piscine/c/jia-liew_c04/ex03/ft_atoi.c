/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jia-liew <jia-liew@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 19:16:00 by jia-liew          #+#    #+#             */
/*   Updated: 2026/04/16 14:27:08 by jia-liew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	number_counter(char *str, int i);

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		else if (str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
			i++;
		else
		{
			result = number_counter(str, i);
			return (result);
		}
	}
	return (0);
}

int	number_counter(char *str, int i)
{
	int	result;
	int	is_negative;
	int	lock;

	result = 0;
	is_negative = 0;
	lock = 0;
	while ((str[i] == '+' || str[i] == '-') && lock == 0)
	{
		if (str[i] == '-')
			is_negative++;
		i++;
	}
	lock = 1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	if (is_negative % 2 != 0)
		result = -result;
	return (result);
}
/*
int number_counter(char *str, int is_negative);

int	ft_atoi(char *str)
{
	int	number_only;
	int	result;
	int	counter;

	number_only = 0;
	result = 0;
	counter = 0;
	while (str[counter])
	{
		while (str[counter] == '-' || str[counter] == '+')
		{
			if (str[counter] == '-')
				is_negative++;
			counter++
			number_only = 1;
		}	
		if (str[counter] >= '0' && str[counter] <= '9')
			number_only = 1;
		if(number_only == 1)
		{
			result = number_counter(str, counter);
			return (result);
		}
		counter++;
	}
	return (0);
}

int	number_counter(char *str, int counter)
{
	int	result;
	int	is_negative;
	int n_counter;

	result = 0;
	is_negative = 0;
	n_counter = 1;
	while(str[counter - n_counter] == '+' || str[counter - n_counter] == '-')
	{
		if(str[counter - n_counter] == '-')
			is_negative++;
		n_counter++;
	}
	while(str[counter] >= '0' && str[counter] <= '9')
	{
		result = result*10 + str[counter] - '0';
		counter++;
	}
	if (is_negative % 2 != 0)
		result = -result;
	return(result);
}
*/
