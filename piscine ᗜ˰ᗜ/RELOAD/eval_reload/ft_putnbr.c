#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	int	n;

	n = nb;
	if (nb > 2147483647 || nb < -2147483648)
	{
		ft_putstr("int limit");
	}
	if (nb < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n < 10)	
	{
		ft_putchar(n + '0');
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
}

int	main(void)
{
	int	n;

	n = 2147483648;
	ft_putnbr(n);
	return (0);
}
