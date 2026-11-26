#include <unistd.h>

void	ft_print_alnum(void)
{
	char 	c;
	char	n;
	int	i;

	c = 'a';
	n = '0';
	i = 1;
	while (c <= 'z' && i == 1)
	{
		write(1 , &c, 1);
		if (c == 'z')
			i = 2;
		c++;
	}
	while ( n <= '9' && i == 2)
	{
		write(1, &n, 1);
		if (n == '9')
			i = 3;
		n++;
	}
}

int	main(void)
{
	ft_print_alnum();
	return (0);
}

