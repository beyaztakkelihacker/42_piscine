#include <stdio.h>
#include <ctype.h>

// Bir dizide sadece yazdırılabilir karakterlerin olup olmadığını kontrol eden fonksiyon
int ft_str_is_printable(char *str) 
{
    while (*str)
    {
        // Karakter, yazdırılabilir bir karakter değilse
        if (!isprint(*str)) 
        {
            return 0; // 0 döndür ve işlemi sonlandır (yazdırılabilir olmayan bir karakter bulundu)
        }
        str++; // Bir sonraki karaktere geç
    }

    return 1; // Fonksiyonun bu noktaya ulaşması, sadece yazdırılabilir karakterler içerildiği anlamına gelir
}

int main() 
{
    // Fonksiyonu test et
    printf("%d\n", ft_str_is_printable("ABDELKFSCO?I340990%")); // 1 (sadece yazdırılabilir karakterler içeriyor)
    printf("%d\n", ft_str_is_printable("\n\t\v\f")); // 0 (yazdırılabilir olmayan karakterler içeriyor)

    return 0;
}
