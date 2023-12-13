#include <stdio.h>

// Karakter dizilerini karşılaştıran fonksiyon
int ft_strcmp(const char *s1, const char *s2) {
    while (*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }

    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int main() {
    // İki string'i karşılaştır ve sonucu ekrana yazdır
    printf("%d\n", ft_strcmp("Bayaztakkeli", "Beyaztakkeli")); // Negatif değer (ilk farklı karakterin ASCII değerlerinin farkı)
    printf("%d\n", ft_strcmp("Beyaztakkeli", "beyaz takkeli")); // Negatif değer (ilk farklı karakterin ASCII değerlerinin farkı)
    printf("%d\n", ft_strcmp("beyaztakkeli", "beyaztakkeli")); // 0 (her iki string de aynı)

    return 0;
}