#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    if(b != 0)
    {
        *div = a / b;
        *mod = a % b;
    }
    else
    {
        printf("Hata: Sıfıra bölme tanımsızdır.\n");
    }
}

int     main()
{
    int a = 17;
    int b = 5;
    int div, mod;

    ft_div_mod(a, b, &div, &mod);

    printf("%d, %d'e bölündüğünde bölüm %d, kalan %d'dir.\n", a, b, div, mod);
}