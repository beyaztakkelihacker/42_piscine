#include <stdio.h>

// Bir dizideki büyük harf karakterlerini küçük harfe dönüştüren fonksiyon
char *ft_strlowcase(char *str) {
    int i = 0;

    while (str[i]) {
        // Eğer karakter büyük harfse
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32; // ASCII'de büyük harfin küçük harfe dönüşümü
        }
        i++;
    }

    return str; // Dönüştürülmüş diziyi geri döndür
}

int main() {
    char str[] = "BEYAZTAKKELİHACKER";
    
    printf("Original: %s\n", str); // Orijinal diziyi ekrana yazdır
    printf("Lowercase: %s\n", ft_strlowcase(str)); // Dizideki büyük harfleri küçük harfe dönüştür ve ekrana yazdır

    return 0;
}