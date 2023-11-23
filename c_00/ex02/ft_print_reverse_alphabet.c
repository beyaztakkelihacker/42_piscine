#include <unistd.h>

void    ft_print_reverse_alphabet()
{
    int i = 122;
    while(i >= 97)
    {
        write(1, &i, 1);
        i--;
    }
}

int     main()
{
    ft_print_reverse_alphabet();
}