#include <stdio.h>

int ft_strlen(char *string)
{
	int n;

	n = 0;
	while (string[n] != '\0')
	{
		n++;
	}
	return (n);
}

int main()
{
	char *str = "beyaztakkelihacker";
	printf("Karakter dizisinin uzunluğu: %d\n", ft_strlen(str));
}