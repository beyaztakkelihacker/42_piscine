#include <stdio.h>
#include <string.h>

// src dizisinin belirtilen uzunluk kadarını dest dizisine kopyalayan fonksiyon
char *ft_strncpy(char *dest, const char *src, size_t n) {
    return strncpy(dest, src, n); // strncpy fonksiyonunu kullanarak kopyalama yap
}

int main() {
    char src[] = "beyaztakkelihacker"; // Kaynak dizisi
    char dest[10]; // Hedef dizisi (maksimum 10 karakter)

    printf("Source: %s\n", src); // Orijinal diziyi ekrana yazdır

    // İlk 2 karakteri kopyala
    printf("Copied (2 chars): %s\n", ft_strncpy(dest, src, 2));

    // İlk 4 karakteri kopyala
    printf("Copied (4 chars): %s\n", ft_strncpy(dest, src, 4));

    // İlk 6 karakteri kopyala
    printf("Copied (6 chars): %s\n", ft_strncpy(dest, src, 6));

    return 0;
}
