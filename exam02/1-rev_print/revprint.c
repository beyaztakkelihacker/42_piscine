#include <unistd.h>
#include <stdio.h>

// ft_strlen: Verilen bir karakter dizisinin uzunluğunu hesaplar
int ft_strlen(char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')
        i++;
    return (i);
}

// ft_rev_print: Verilen bir karakter dizisini ters çevirip ekrana yazdırır
char *ft_rev_print(char *str)
{
    int i;

    i = ft_strlen(str);
    i--;
    while (i >= 0)
    {
        write(1, &str[i], 1);
        i--;
    }
    return(str);
}

int main()
{
    char str[] = "Beyaz Takkeli";

    // ft_rev_print fonksiyonu kullanılarak diziyi ters çevirip ekrana yazdırma
    ft_rev_print(str);
    
    return 0;
}
