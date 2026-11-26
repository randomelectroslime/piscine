void	minisort(int *a, int *b, int *c)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = *a;
	n2 = *b;
	n3 = *c;

	if (n1 <= n2 && n1 <= n3)
	{
		*a = n1;
		if (n2 <= n3)
		{
			*b = n2;
			*c = n3;
		}
		else
		{
			*b = n3;
			*c = n2;
		}
	}
	else if (n2 <= n1 && n2 <= n3)
	{
		*a = n2;
		if (n1 <= n3)
		{
			*b = n1;
			*c = n3;
		}
		else
		{
			*b = n3;
			*c = n1;
		}
	}
	else
	{
		*a = n3;
		if (n1 <= n2)
		{
			*b = n1;
			*c = n2;
		}
		else
		{
			*b = n2;
			*c = n1;
		}
	}
}

#include <stdio.h>
int	main(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = 1;
	num2 = 3;
	num3 = 2;
	printf("Org : %d %d %d\n", num1, num2, num3);
	minisort(&num1, &num2, &num3);
	printf("Asc : %d %d %d", num1, num2, num3);
	return (0);
}
	
