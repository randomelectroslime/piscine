#include <unistd.h>

void	ft_ft(int *nbr);
void	ft_putchar(char c);
void	ft_putnbr(int n);
int	ft_strlen(char *str);

int	main(void)
{
	int	i;
	char	*a;
	char	*b;
	int	count;
	int	count2;

	i = 1;
	a = "Before: ";
	count = 0;
	count2 = 0;
	while (count <= ft_strlen(a))
	{
		ft_putchar(a[count]);
		count++;
	}
	ft_putnbr(i);
	ft_ft(&i);
	ft_putchar('\n');
	b = "After: ";
	while (count2 <= ft_strlen(b))
	{
		ft_putchar(b[count2]);
		count2++;
	}
	ft_putnbr(i);
	return (0);
}
