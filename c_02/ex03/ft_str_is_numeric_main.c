#include <stdio.h>
#include <ctype.h>

// Bir dizide sadece sayısal karakterlerin olup olmadığını kontrol eden fonksiyon
int ft_str_is_numeric(char *str) 
{
    while (*str) 
    {
        if (!isdigit(*str)) 
	{
            return 0; // Sayısal olmayan bir karakter bulunduğunda 0 döndür ve işlemi sonlandır
        }
        str++;
    }
    return 1; // Fonksiyonun bu noktaya ulaşması, sadece sayısal karakterler içerildiği anlamına gelir
}

int main()
{
    printf("%d\n", ft_str_is_numeric("05092000")); // 1 (sadece sayısal karakterler içeriyor)
    printf("%d\n", ft_str_is_numeric("0509beyaz2000")); // 0 (sayısal olmayan bir karakter içeriyor)
    printf("%d\n", ft_str_is_numeric("")); // 1 (boş dizi, herhangi bir sayısal karakter içermiyor)

    return 0;
}
