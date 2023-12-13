#include <stdio.h>

// Büyük harfleri küçük harfe çeviren fonksiyon
char *ft_strlowcase(char *str) {
    int i = 0;
    while (str[i]) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;  // Büyük harf ile küçük harf arasındaki ASCII farkı
        i++;
    }
    return str;
}

// Her kelimenin ilk harfini büyük yapacak fonksiyon
char *ft_strcapitalize(char *str) {
    int i = 0;
    int i1 = 1;  // Bir sonraki karakterin büyük olup olmamasını izleyen bayrak
    ft_strlowcase(str);  // Önce tüm string'i küçük harfe çevir
    while (str[i]) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (i1 == 1) {
                str[i] -= 32;  // Mevcut küçük harfi büyük harfe çevir
                i1 = 0;       // Bayrağı sıradaki karakterin küçük olması için sıfırla
            }
        } else if (str[i] >= '0' && str[i] <= '9') {
            i1 = 0;  // Eğer karakter bir rakam ise bayrağı sıfırla
        } else {
            i1 = 1;  // Alfanumerik olmayan karakterler için bayrağı bir sonraki kelimenin büyük olması için ayarla
        }
        i++;
    }
    return str;
}

// Ana fonksiyon
int main() {
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s\n", ft_strcapitalize(str));

    return 0;
}