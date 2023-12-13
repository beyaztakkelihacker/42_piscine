#include <stdio.h>

// Açıklama: Bu fonksiyon, bir karakter dizisinin uzunluğunu hesaplar ve sonucu integer olarak döndürür.
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

// Açıklama: Bu fonksiyon, bir karakter dizisini ters çevirir ve ters çevrilmiş karakter dizisini geri döndürür.
char *ft_strrev(char *str)
{
    int i = 0;
    int len = ft_strlen(str) - 1;
    char tmp;

    while (len > i)
    {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        i++;
        len--;
    }

    return str;
}

int main()
{
    char str[] = "Hello, World!";

    // Orijinal karakter dizisini ekrana yazdır.
    printf("Original String: %s\n", str);

    // Karakter dizisini ters çevir.
    ft_strrev(str);

    // Ters çevrilmiş karakter dizisini ekrana yazdır.
    printf("Reversed String: %s\n", str);

    // main fonksiyonu başarıyla tamamlandı.
    return 0;
}
