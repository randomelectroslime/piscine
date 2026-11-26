#include <stdio.h>

int	ft_atoi(char *str);

int main(void)
{
	char *str1 = "123";
	char *str2 = "-----123 45";
	char *str3 = "-A 123";
	char *str4 = "     123";
	char *str5 = "   A -123";
	char *str6 = "--- -123";

	printf("%s turns into %d (correct: 123)\n", str1, ft_atoi(str1));
	printf("%s turns into %d (correct: -123)\n", str2, ft_atoi(str2));
	printf("%s turns into %d (correct: 0)\n", str3, ft_atoi(str3));
	printf("%s turns into %d (correct: 123)\n", str4, ft_atoi(str4));
	printf("%s turns into %d (correct: 0)\n", str5, ft_atoi(str5));
	printf("%s turns into %d (correct: 0)\n", str6, ft_atoi(str6));
	return (0);
}
