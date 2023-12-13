#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int result = 1;

    if (power <= 0)
    {
        return result;
    }

    while (power > 0)
    {
        result *= nb;
        power--;
    }

    return result;
}