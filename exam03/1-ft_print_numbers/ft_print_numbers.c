#include <unistd.h>

// ft_print_numbers: 0'dan 9'a kadar olan sayıları ekrana yazdıran fonksiyon
void ft_print_numbers(void)
{
    // 'digit' değişkeni, yazdırılacak olan sayıyı temsil eder
    char digit = '0';

    // 'digit' değişkeni '9' kadar olan sayıları yazdırmak için döngü içinde artırılır
    while (digit <= '9')
    {
        // Her bir sayıyı ekrana yazdırma
        write(1, &digit, 1);

        // 'digit' değişkenini bir sonraki sayıya taşıma
        digit++;
    }
}

// main: Programın başlangıç noktası
int main(void)
{
    // ft_print_numbers fonksiyonunu çağırarak sayıları ekrana yazdırma
    ft_print_numbers();

    // Yeni satır karakteri eklenerek programın normal sonlandırılması
    write(1, "\n", 1);

    return 0;
}
