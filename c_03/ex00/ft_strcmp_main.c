#include <stdio.h>
#include <string.h>

// ft_strcmp fonksiyonu: Verilen iki string'i karşılaştırır.
int ft_strcmp(char *s1, char *s2) {
    return strcmp(s1, s2);
}

int main() {
    // İki string'i karşılaştır ve sonucu ekrana yazdır
    printf("%d\n", ft_strcmp("Bayaztakkeli", "Beyaztakkeli"));
    // Yukarıdaki örnekte, "B" ve "b" karakterleri arasındaki farkın ASCII değeri döndürülür (negatif bir değer).
    
    printf("%d\n", ft_strcmp("Beyaztakkeli", "beyaz takkeli"));
    // Yukarıdaki örnekte, " " (boşluk) ve "b" karakterleri arasındaki farkın ASCII değeri döndürülür (negatif bir değer).
    
    printf("%d\n", ft_strcmp("beyaztakkeli", "beyaztakkeli"));
    // Yukarıdaki örnekte, iki karakter dizisi arasında hiç fark yoktur, bu nedenle sonuç 0'dır.

    return 0;
}