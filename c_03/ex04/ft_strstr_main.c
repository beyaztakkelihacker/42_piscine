#include <stdio.h>

// Bir string içinde alt bir dize arayan fonksiyon
char *ft_strstr(char *str, char *to_find) {
    if (*to_find == '\0') {
        return str;  // Özel durum: boş alt dize, orijinal diziyi döndür
    }

    while (*str) {
        int i = 0;

        // str ve to_find dizilerini karşılaştır
        while (str[i] == to_find[i] && str[i] && to_find[i]) {
            i++;
        }

        if (to_find[i] == '\0') {
            return str;  // Alt dize bulundu
        }

        str++;
    }

    return NULL;  // Alt dize bulunamadı
}

int main() {
    char str[] = "42Kocaeli havuz öğrencisi Beyaz Takkeli HACKER";
    char to_find[] = "HACKER";

    // ft_strstr fonksiyonunu kullanarak to_find string'ini str içinde ara
    char *sonuc = ft_strstr(str, to_find);

    if (sonuc != NULL) {
        // Alt dize bulundu, konumu ekrana yazdır
        printf("Alt dize bulundu, konum: %ld\n", sonuc - str);
    } else {
        // Alt dize bulunamadı
        printf("Alt dize bulunamadı\n");
    }

    return 0;
}