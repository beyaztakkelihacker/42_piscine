#include <stdio.h>

// Açıklama: Bu fonksiyon, bir karakter dizisinin uzunluğunu hesaplar ve sonucu integer olarak döndürür.
int ft_strlen(char *str)
{
    int i = 0;

    // Karakter dizisinin sonuna kadar olan her karakteri kontrol et.
    while (str[i])
        // Sayaç değerini artır.
        i++;

    // Sonuç olarak sayaç değerini döndür.
    return i;
}

int main()
{
    char myString[] = "Merhaba Dunya";

    // ft_strlen fonksiyonunu çağırarak karakter dizisinin uzunluğunu hesapla
    int length = ft_strlen(myString);

    // Sonucu ekrana yazdır
    printf("Karakter dizisinin uzunluğu: %d\n", length);

    return 0;
}