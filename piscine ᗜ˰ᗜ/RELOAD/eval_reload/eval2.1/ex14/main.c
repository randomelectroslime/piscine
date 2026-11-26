int	ft_sqrt(int nb);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char *str);

int	main(void)
{
	int	num;
	int	sqrt;
	char	*a;
	char	*b;

	num = 2147483647;
	sqrt = ft_sqrt(num);
	a = " is the square root of ";
	b = " has an irrational number as square root, ";

	if (sqrt == 0)
	{
		ft_putnbr(num);
		ft_putstr(b);
		ft_putnbr(sqrt);
		return (0);
	}
	else
	{
		ft_putnbr(num);
		ft_putstr(a);
		ft_putnbr(sqrt);
		return (0);
	}
	return (0);
}
