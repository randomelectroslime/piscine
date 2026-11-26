int	ft_digital_root(int nb)
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

#include <stdio.h>
int	main(void)
{
	int	num;
	
	num = 502;
	printf("digital root of %d is %d", num, ft_digital_root(num));
	return (0);
}
