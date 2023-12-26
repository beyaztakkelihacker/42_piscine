#include <stdio.h>

// Karakter dizilerini karşılaştıran fonksiyon
int ft_strcmp(const char *s1, const char *s2) {
    // İki karakter dizisi arasındaki her karakterin eşit olduğu ve bitiş işaretine (null karakter) gelinmediği sürece devam et
    while (*s1 && *s2 && *s1 == *s2) {
        s1++;  // İlk karakter dizisinde bir sonraki karaktere geç
        s2++;  // İkinci karakter dizisinde bir sonraki karaktere geç
    }

    // İlk farklı karakterin ASCII değerlerinin farkını döndür
    return *(unsigned char *)s1 - *(unsigned char *)s2;
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
