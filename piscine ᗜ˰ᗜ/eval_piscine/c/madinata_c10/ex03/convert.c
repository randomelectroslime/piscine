/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madinata <madinata@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 06:06:27 by madinata          #+#    #+#             */
/*   Updated: 2026/04/27 13:47:29 by madinata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define HEXNUM "0123456789abcdef"

void	char16_to_hex(char *source, char *target, int max_idx)
{
	int		i;

	i = 0;
	while (i < max_idx)
	{
		*target++ = HEXNUM[(unsigned char)*source / 16];
		*target++ = HEXNUM[(unsigned char)*source++ % 16];
		*target++ = ' ';
		if ((i + 1) % 8 == 0)
			*target++ = ' ';
		i++;
	}
	while (i < 16)
	{
		*target++ = ' ';
		*target++ = ' ';
		*target++ = ' ';
		if ((i + 1) % 8 == 0)
			*target++ = ' ';
		i++;
	}
}

void	uint_to_hexstr(unsigned int n, char *output, int max_digits)
{
	char	temp[8];
	int		i;

	i = 0;
	while (n > 0)
	{
		temp[i++] = HEXNUM[n % 16];
		n /= 16;
	}
	while (i < max_digits)
		temp[i++] = '0';
	while (i-- > 0)
		*output++ = temp[i];
}

void	cpy16_printable(char *source, char *target, int max_idx)
{
	int	i;

	i = 0;
	while (i < max_idx)
	{
		if (source[i] >= ' ' && source[i] <= '~')
			*target++ = source[i];
		else
			*target++ = '.';
		i++;
	}
}

static void	pad_hex2(char *target, int i)
{
	while (i < 16)
	{
		*target++ = ' ';
		*target++ = ' ';
		*target++ = ' ';
		*target++ = ' ';
		*target++ = ' ';
		i += 2;
	}
}

void	char16_to_hex2(char *source, char *target, int max_idx)
{
	int		i;
	char	temp[2];

	i = 0;
	while (i < max_idx)
	{
		temp[0] = HEXNUM[(unsigned char)source[i] / 16];
		temp[1] = HEXNUM[(unsigned char)source[i++] % 16];
		if (i < max_idx)
		{
			*target++ = HEXNUM[(unsigned char)source[i] / 16];
			*target++ = HEXNUM[(unsigned char)source[i++] % 16];
		}
		else
		{
			*target++ = HEXNUM[0];
			*target++ = HEXNUM[0];
		}
		*target++ = temp[0];
		*target++ = temp[1];
		*target++ = ' ';
	}
	pad_hex2(target, i);
}
