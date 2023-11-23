#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int	main()
{
	int x = 5;
	int y = 10;

	printf("After: x = %d, y = %d\n", x, y);

	ft_swap(&x, &y);

	printf("Before: x = %d, y = %d\n", x, y);
}