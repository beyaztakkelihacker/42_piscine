#include <stdio.h>
#include <ctype.h>

int ft_str_is_lowercase(char *str) 
{
    while (*str) 
    {
        // Karakter, küçük harf değilse
        if (!islower(*str)) 
        {
            return 0; // 0 döndür ve işlemi sonlandır (küçük harf dışında bir karakter bulundu)
        }
        str++; // Bir sonraki karaktere geç
    }
    return 1; // Fonksiyonun bu noktaya ulaşması, sadece küçük harf karakterleri içerildiği anlamına gelir
}

int main()
{
    // Fonksiyonu çeşitli girdilerle test et
    printf("%d\n", ft_str_is_lowercase("abcdefghijkl"));     // 1 (sadece küçük harf karakterleri içeriyor)
    printf("%d\n", ft_str_is_lowercase("abcAdefghijkl"));     // 0 (küçük harf olmayan bir karakter içeriyor)
    printf("%d\n", ft_str_is_lowercase("-_134556efSghij67")); // 0 (küçük harf dışında karakterler içeriyor)

    return 0; // Programın başarıyla tamamlandığını belirtmek için 0 döndür
}
