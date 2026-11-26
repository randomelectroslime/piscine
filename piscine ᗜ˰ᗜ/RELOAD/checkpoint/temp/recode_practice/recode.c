void	minisort(int *a, int *b, int *c)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = *a;
	n2 = *b;
	n3 = *c;

	if ( n1 <= n2 && n1 <= n3)
	{
		a* = n1;
		if ( n2 <= n3)
		{
			b* = n2;
			c* = n3;
		}
		else
		{
			b* = n3;
			c* = n2;
		}
	}
	else if
	{
	}
	else
	{
	}
}

int	ft_digit_root(int nb)
{
	int	ans;

	ans = 0;
	while (nb > 0 || ans > 9)
	{
		if (nb == 0)
		{
			nb = ans;
			ans = 0;
		}
		ans += nb % 10;
		nb = nb / 10;
	}
	return (ans);
}

void ft_putnbr(int nb)
{
	int	n;

	n = nb;
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
		ft_putnbr(n /10);
		ft_putchar(n % 10 + '0');
	}
}
