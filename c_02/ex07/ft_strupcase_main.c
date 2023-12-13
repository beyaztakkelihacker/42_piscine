#include <stdio.h>

// Bir dizideki küçük harf karakterlerini büyük harfe dönüştüren fonksiyon
char *ft_strupcase(char *str)
{
    int i = 0;

    while (str[i])
    {
        // Eğer karakter küçük harfse
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32; // ASCII'de küçük harfin büyük harfe dönüşümü
        }
        i++;
    }

    return str; // Dönüştürülmüş diziyi geri döndür
}

int main()
{
    char str[] = "beyaztakkelihacker";
    printf("%s\n", ft_strupcase(str)); // Dizideki küçük harfleri büyük harfe dönüştür ve ekrana yazdır

    return 0;
}
