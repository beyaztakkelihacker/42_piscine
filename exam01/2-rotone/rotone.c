#include <unistd.h>

// Açıklama: Bu fonksiyon, gelen karakter dizisini her karakteri bir sonraki karaktere çevirerek değiştirir ve sonucu ekrana yazdırır.
void rotone(char *str)
{
    int i = 0;

    // Karakter dizisinin sonuna kadar olan her karakteri kontrol et.
    while (str[i] != '\0')
    {
        // Eğer karakter A-Y arasında veya a-y arasında ise, bir sonraki karaktere geç.
        if ((str[i] >= 'A' && str[i] <= 'Y') || (str[i] >= 'a' && str[i] <= 'y'))
            str[i] += 1;
        // Eğer karakter Z veya z ise, A veya a'ya geri dön.
        else if (str[i] == 'Z' || str[i] == 'z')
            str[i] -= 25;

        // Her bir karakteri ekrana yazdır.
        write(1, &str[i], 1);
        i++;
    }
}

// Açıklama: Bu program, komut satırından girilen bir kelimenin her karakterini bir sonraki karaktere çevirir ve sonucu ekrana yazdırır.
int main(int ac, char **av)
{
    // Eğer komut satırında bir argüman varsa (program adı dahil).
    if (ac == 2)
        // Her karakteri bir sonraki karaktere çevir ve sonucu ekrana yazdır.
        rotone(av[1]);

    write(1, "\n", 1);

    // Program başarıyla tamamlandı.
    return 0;
}
