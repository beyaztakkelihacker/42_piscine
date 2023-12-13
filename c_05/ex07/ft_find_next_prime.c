#include <stdio.h>

int ft_is_prime(int nb)
{
    int i;

    i = 2;
    
    if (nb < 2)
        return 0;

    while (i * i <= nb)
    {
        if (nb % i == 0)
            return 0;
        i++;
    }

    return 1;
}

int ft_find_next_prime(int nb)
{
    if (nb < 2)
        return 2;

    while (!ft_is_prime(nb))
    {
        nb++;
    }

    return nb;
}