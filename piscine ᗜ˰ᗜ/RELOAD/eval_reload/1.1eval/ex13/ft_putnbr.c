#include <unistd.h>

void	ft_putnbr(int num);
void	ft_putchar(char c);

void	ft_putnbr(int num)
{
	unsigned int	n;

	n = num;
	if (num < 0)
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
