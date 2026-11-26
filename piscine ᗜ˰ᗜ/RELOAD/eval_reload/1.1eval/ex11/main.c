void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_putnbr(int n);
void	ft_putchar(char c);

int	main(void)
{
	int	num1;
	int	num2;
	int	div;
	int	mod;

	num1 = 4;
	num2 = 2;
	ft_div_mod(num1, num2, &div, &mod);
	ft_putnbr(num1);
	ft_putchar('/');
	ft_putnbr(num2);
	ft_putchar('=');
	ft_putnbr(div);
	ft_putchar('\n');
	ft_putnbr(num1);
	ft_putchar('%');
	ft_putnbr(num2);
	ft_putchar('=');
	ft_putnbr(mod);
	return (0);
}
