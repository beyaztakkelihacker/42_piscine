#include <stdio.h>
#include <ctype.h>

// Bir dizideki küçük harf karakterlerini büyük harfe dönüştüren fonksiyon
char *ft_strupcase(char *str)
{
    int i = 0;

    while (str[i])
    {
        // Eğer karakter küçük harfse
        if (islower(str[i]))
        {
            str[i] = toupper(str[i]); // Küçük harfi büyük harfe dönüştür
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
