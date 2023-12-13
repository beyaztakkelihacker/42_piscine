#include <unistd.h>

// main: Programın başlangıç noktası
int main(int ac, char **av)
{
    int i = 0;

    // Eğer komut satırında argüman varsa devam et
    if (ac > 1)
    {
        ac--;

        // Argümanların sonuncusundan başlayarak ilk karaktere kadar yazdır
        while (av[ac][i] != '\0')
        {
            write(1, &av[ac][i], 1);
            i++;
        }
    }

    // Yeni satır karakteri eklenerek programın normal sonlandırılması
    write(1, "\n", 1);

    return 0;
}
