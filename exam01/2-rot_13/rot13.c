#include <unistd.h>

// Açıklama: Bu fonksiyon, gelen karakter dizisini ROT13 şifreleme algoritmasına göre değiştirir ve sonucu ekrana yazdırır.
void rot13(char *str)
{
    int i = 0;

    // Karakter dizisinin sonuna kadar olan her karakteri kontrol et.
    while (str[i] != '\0')
    {
        // Karakter, büyük harf A-M arasında veya küçük harf a-m arasında ise 13 ekleyerek şifrele.
        if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
            str[i] += 13;
        // Karakter, büyük harf N-Z arasında veya küçük harf n-z arasında ise 13 çıkararak şifrele.
        else if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
            str[i] -= 13;

        // Her bir karakteri ekrana yazdır.
        write(1, &str[i], 1);
        i++;
    }
}

// Açıklama: Bu program, komut satırından girilen bir kelimenin ROT13 şifrelemesini ekrana yazdırır.
int main(int ac, char **av)
{
    // Eğer komut satırında bir argüman varsa (program adı dahil).
    if (ac == 2)
        // ROT13 şifrelemesini uygula ve sonucu ekrana yazdır.
        rot13(av[1]);

    write(1, "\n", 1);

    // Program başarıyla tamamlandı.
    return 0;
}

