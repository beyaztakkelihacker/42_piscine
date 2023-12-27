#include <stdio.h>
#include <string.h>

// ft_strcat fonksiyonu: Verilen dest string'ine src string'ini ekler.
char *ft_strcat(char *dest, char *src) {
    return strcat(dest, src);
}

int main() {
    char src[] = "Takkeli";
    char dest[] = "Beyaz ";

    // ft_strcat fonksiyonunu kullanarak dest ve src string'lerini birleştir
    ft_strcat(dest, src);

    printf("%s\n", dest); // Birleştirilmiş string'i ekrana yazdır

    return 0;
}