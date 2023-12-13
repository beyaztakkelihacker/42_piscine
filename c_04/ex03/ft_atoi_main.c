#include <stdio.h>

// Verilen bir karakter dizisini tamsayıya dönüştüren fonksiyon
int ft_atoi(char *str) {
    int i = 0;
    int sign = 1;    // İşareti belirten değişken
    int result = 0;  // Dönüştürülen tamsayıyı tutan değişken

    // Beyaz boşluk karakterlerini atla
    while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
        i++;

    // İşareti ele al
    while (str[i] == '+' || str[i] == '-') {
        // Eğer '-' işareti varsa, işareti negatif yap, aksi halde pozitif bırak
        sign = (str[i] == '-') ? sign * -1 : sign;
        i++;
    }

    // Sayı karakterlerini oku ve tamsayıya dönüştür, bir sayı karakteri bulana kadar devam et
    while (str[i] >= '0' && str[i] <= '9') {
        // Karakteri tamsayıya dönüştür ve sonuca ekle
        result = (str[i] - '0') + (result * 10);
        i++;
    }

    // İşaret ile çarp ve sonucu döndür
    return result * sign;
}

int main(void) {
    char *s = "   ---~+--+01234506789ab567";
    
    // ft_atoi fonksiyonunu kullanarak bir karakter dizisini tamsayıya dönüştür ve ekrana yazdır
    printf("%d\n", ft_atoi(s));

    return 0;
}