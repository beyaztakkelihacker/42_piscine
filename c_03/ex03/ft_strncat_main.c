#include <stdio.h>
#include <string.h>

// ft_strncat fonksiyonu: Verilen dest string'ine belirli bir uzunluktaki src string'ini ekler.
// nb parametresi, en fazla kaç karakterin eklenmesi gerektiğini belirtir.
char *ft_strncat(char *dest, char *src, unsigned int nb) {
    // strncat fonksiyonu kullanılarak src string'i dest string'ine eklenir.
    // nb parametresi, en fazla bu kadar karakterin eklenmesini sağlar.
    return strncat(dest, src, nb);
}

int main() {
    char src[] = "Network"; // Eklenecek olan string
    char dest[] = "42 ";    // Hedef string

    // ft_strncat fonksiyonunu kullanarak dest ve src string'lerini belirli bir uzunlukta birleştir
    ft_strncat(dest, src, 3);

    // Birleştirilmiş string'i ekrana yazdır
    printf("%s\n", dest);

    return 0;
}