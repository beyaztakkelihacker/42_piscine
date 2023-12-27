#include <stdio.h>
#include <string.h>

// ft_strstr fonksiyonu: Verilen str string'inde to_find string'ini arar.
// Eğer to_find string'i bulunursa, ilk bulunan konumun pointer'ını döndürür.
// Eğer to_find string'i bulunamazsa, NULL döndürür.
char *ft_strstr(char *str, char *to_find) {
    // strstr fonksiyonu kullanılarak str içinde to_find aranır.
    return strstr(str, to_find);
}

int main() {
    // Test için kullanılacak string'ler
    char str[] = "42Kocaeli havuz öğrencisi Beyaz Takkeli HACKER";
    char to_find[] = "HACKER";

    // ft_strstr fonksiyonunu kullanarak to_find string'ini str içinde ara
    char *sonuc = ft_strstr(str, to_find);

    if (sonuc) {
        // Eğer to_find string'i bulunduysa, konumu ekrana yazdır
        printf("Alt dize bulundu, konum: %ld\n", sonuc - str);
    } else {
        // Eğer to_find string'i bulunamazsa
        printf("Alt dize bulunamadı\n");
    }

    return 0;
}