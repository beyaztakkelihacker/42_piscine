#include <unistd.h>

// ft_write_number: Verilen sayıyı ekrana yazdıran fonksiyon
void ft_write_number(int number)
{
    // Sayı 9'dan büyükse, basamaklarına ayrılarak rekürsif bir şekilde yazdırılır
    if (number > 9)
        ft_write_number(number / 10);

    // Birler basamağındaki rakamı ekrana yazdırma
    write(1, &"0123456789"[number % 10], 1);
}

// main: Programın başlangıç noktası
int main(void)
{
    int number = 1;

    // 1'den 100'e kadar olan sayıları kontrol eden döngü
    while (number <= 100)
    {
        // Sayının hem 3'e hem de 5'e tam bölünüyorsa "fizzbuzz" yazdır
        if (number % 3 == 0 && number % 5 == 0)
            write(1, "fizzbuzz", 8);
        // Sayı sadece 3'e tam bölünüyorsa "fizz" yazdır
        else if (number % 3 == 0)
            write(1, "fizz", 4);
        // Sayı sadece 5'e tam bölünüyorsa "buzz" yazdır
        else if (number % 5 == 0)
            write(1, "buzz", 4);
        // Diğer durumda sayıyı yazdır
        else
            ft_write_number(number);

        // Her durumdan sonra yeni satır karakteri ekle
        write(1, "\n", 1);

        // Bir sonraki sayıya geç
        number++;
    }

    return 0;
}
