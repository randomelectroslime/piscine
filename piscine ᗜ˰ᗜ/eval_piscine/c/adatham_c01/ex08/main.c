/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinchong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:14:24 by xinchong          #+#    #+#             */
/*   Updated: 2026/04/13 17:14:39 by xinchong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_sort_int_tab(int *tab, int size);

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
        if (nb >= 10)
                ft_putnbr(nb / 10);
        ft_putchar((nb % 10) + '0');
}

void    ft_print_array(int *tab, int size)
{
        int i;

        i = 0;
        while (i < size)
        {
                ft_putnbr(tab[i]);
                if (i < size - 1)
                        ft_putchar(' ');
                i++;
        }
        ft_putchar('\n');
}

int     main(void)
{
        int tab[] = {5, 2, 9, 1, 3};
        int size;

        size = sizeof(tab) / sizeof(tab[0]);

        ft_print_array(tab, size);
        ft_sort_int_tab(tab, size);
        ft_print_array(tab, size);

        return (0);
}
