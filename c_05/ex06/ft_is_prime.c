#include <stdio.h>

int ft_is_prime(int nb)
{
    int i;

    if (nb <= 1)
        return 0;

    i = 2;

    while (i <= (nb / 2))
    {
        if (!(nb % i))
            return 0;
        else
            i += 1;
    }

    return 1;
}