#include <unistd.h>

void	ft_swap(int *a, int *b);
void	ft_putchar(char c);
void	ft_putnbr(int n);
int	ft_strlen(char *str);

int	main(void)
{
	int	i;
	int	j;
	char	*x;
	char	*y;
	int	count;
	int	count2;

	i = 1;
	j = 2;
	x = "Before: ";
	count = 0;
	count2 = 0;
	while (count <= ft_strlen(x))
	{
		ft_putchar(x[count]);
		count++;
	}
	ft_putnbr(i);
	ft_putchar(' ');
	ft_putnbr(j);
	ft_swap(&i, &j);
	ft_putchar('\n');
	y = "After: ";
	while (count2 <= ft_strlen(y))
	{
		ft_putchar(y[count2]);
		count2++;
	}
	ft_putnbr(i);
	ft_putchar(' ');
	ft_putnbr(j);
	return (0);
}
