#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;

    // Programa en az iki argüman sağlandığını kontrol et
    if (ac == 2)
    {
        // İkinci argüman (av[1]) üzerinde döngü
        while (av[1][i] != '\0')
        {
            // Eğer karakter 'a' ise, ekrana 'a' yaz ve döngüyü sonlandır
            if (av[1][i] == 'a')
            {
                write(1, "a", 1);
                break;
            }
            i++;
        }

        // Satır sonu karakterini ekrana yazdır
        write(1, "\n", 1);
    }
    else
    {
        // Programa iki argüman sağlanmazsa, sadece 'a\n' yaz
        write(1, "a\n", 2);
    }

    return 0;
}
