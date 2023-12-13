#include <unistd.h>

// Açıklama: Bu program, komut satırından girilen bir kelimenin başındaki boşlukları ve sekme karakterlerini atlayarak, 
// ilk kelimeyi ekrana yazdırır.
int main(int ac, char **av)
{
    // İndeks değişkeni i'yi tanımla ve başlangıç değerini sıfır olarak ayarla.
    int i = 0;

    // Eğer komut satırında bir argüman varsa (program adı dahil).
    if (ac == 2)
    {
        // Başındaki boşlukları ve sekme karakterlerini atlayarak ilerle.
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;

        // Boşluk veya sekme karakteri olmayan ve null karakterine kadar olan kısmı ekrana yazdır.
        while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }

    write(1, "\n", 1);

    // Program başarıyla tamamlandı.
    return 0;
}
