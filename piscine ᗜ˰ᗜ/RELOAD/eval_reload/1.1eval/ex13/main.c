int	ft_recursive_factorial(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int n);

int	main(void)
{
	int	num;
	int	fac;
	char	*a;
	char	*b;
	char	*e;
	
	num = 5;
	fac = ft_recursive_factorial(num);
	a = "Factorial of ";
	b = " : ";
	e = "Error : 0";

	if (fac == 0)
	{
		ft_putstr(e);
	}
	else
	{
		ft_putstr(a);
		ft_putnbr(num);
		ft_putstr(b);
		ft_putnbr(fac);
	}
	return (0);
}

