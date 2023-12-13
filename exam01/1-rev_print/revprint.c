#include <unistd.h>
#include <stdio.h>

// Açıklama: Bu fonksiyon, bir karakter dizisinin uzunluğunu hesaplar ve sonucu integer olarak döndürür.
int ft_strlen(char *str)
{
    // Bir sayaç değişkeni tanımla ve başlangıç değerini sıfır olarak ayarla.
    int i = 0;

    // Karakter dizisinin sonuna kadar olan her karakteri kontrol et.
    while (str[i] != '\0')
        // Sayaç değerini artır.
        i++;

    // Sonuç olarak sayaç değerini döndür.
    return i;
}

// Açıklama: Bu fonksiyon, bir karakter dizisini ters çevirip ekrana yazdırır ve ters çevrilmiş karakter dizisini geri döndürür.
char *ft_rev_print(char *str)
{
    // Karakter dizisinin uzunluğunu hesapla.
    int i = ft_strlen(str);

    // Uzunluktan bir önceki karakterden başlayarak geriye doğru döngüyü çalıştır.
    i--;
    while (i >= 0)
    {
        // Her bir karakteri ekrana yazdır.
        write(1, &str[i], 1);
        // Bir önceki karaktere geç.
        i--;
    }

    // Ters çevrilmiş karakter dizisini geri döndür.
    return str;
}

int main()
{
    // Test için bir karakter dizisi tanımla.
    char str[] = "beyaz takkeli";

    // Ters çevrilmiş karakter dizisini ekrana yazdır.
    ft_rev_print(str);

    // main fonksiyonu başarıyla tamamlandı.
    return 0;
}
