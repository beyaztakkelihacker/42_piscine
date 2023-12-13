#include <unistd.h>

int main(int ac, char **av)
{
    int i;

    i = 0;

    // Komut satırı argümanı kontrolü: Eğer sadece bir argüman varsa devam et
    if (ac == 2)
    {
        // Boşluklar veya sekme karakterleri ignore edilir
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;

        // Boşluk veya sekme karakterleri sona kadar yazdırılır
        while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }

    // Yeni satır karakteri eklendikten sonra programın normal sonlandırılması
    write(1, "\n", 1);
    return (0);
}
