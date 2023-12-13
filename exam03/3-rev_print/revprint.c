#include <unistd.h>
#include <stdio.h>

// ft_strlen: Verilen bir karakter dizisinin uzunluğunu hesaplar
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

// ft_rev_print: Verilen bir karakter dizisini ters çevirip ekrana yazdırır
char *ft_rev_print(char *str)
{
    int i = ft_strlen(str) - 1; // Uzunluğu bir azaltarak, null karakterini göz ardı eder

    while (i >= 0)
    {
        write(1, &str[i], 1);
        i--;
    }

    return str;
}

// main: Programın başlangıç noktası
int main()
{
    char str[] = "Beyaz Takkeli";

    // Ters çevrilmiş karakter dizisini ekrana yazdırma
    ft_rev_print(str);

    // Yeni satır karakteri eklenerek programın normal sonlandırılması
    write(1, "\n", 1);

    return 0;
}
