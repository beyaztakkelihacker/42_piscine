#include <stdio.h>
#include <ctype.h>

// Her kelimenin ilk harfini büyük yapacak fonksiyon
char *ft_strcapitalize(char *str) 
{
    int i = 0;
    int i1 = 1;  // Bir sonraki karakterin büyük olup olmamasını izleyen bayrak

    while (str[i]) 
    {
        if (isalpha(str[i])) 
        {
            // Eğer karakter bir harfse
            if (i1 == 1) 
            {
                str[i] = toupper(str[i]);  // Mevcut harfi büyük harfe çevir
                i1 = 0;                    // Bayrağı sıradaki karakterin küçük olması için sıfırla
            }
        } 
        else 
        {
            i1 = 1;  // Alfanumerik olmayan karakterler için bayrağı bir sonraki kelimenin büyük olması için ayarla
        }
        i++;
    }

    return str;
}

// Ana fonksiyon
int main() 
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s\n", ft_strcapitalize(str));

    return 0;
}
