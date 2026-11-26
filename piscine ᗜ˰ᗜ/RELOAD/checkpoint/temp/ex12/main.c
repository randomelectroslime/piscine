int	ft_iterative_factorial(int nb);
void	ft_putnbr(int n);
void	ft_putchar(char c);
int	ft_strlen(char 	*str);

int	main(void)
{
	int	num;
	int	ans;
	int	c;
	int	cc;
	char	*a;
	char	*b;

	num = 13;
	a = "Iterative factorial of ";
	b = " is ";
	c = 0;
	cc = 0;
	while (c <= ft_strlen(a))
	{
		ft_putchar(a[c]);
		c++;
	}
	ft_putnbr(num);
	while (cc <= ft_strlen(b))
	{
		ft_putchar(b[cc]);
		cc++;
	}
	ans = ft_iterative_factorial(num);
	ft_putnbr(ans);
	return (0);
}
