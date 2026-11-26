#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char *str = "How many characters does this string have? Hmm...";
	printf("%s | Length: %d\n", str, ft_strlen(str));
	return(0);
}
