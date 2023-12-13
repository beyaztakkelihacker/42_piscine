#include <unistd.h>

int main(int ac, char **av)
{
    // Program, komut satırından herhangi bir argüman almadan sabit bir çıktı üretir
    // Bu nedenle, argc ve argv parametreleri kullanılmaz ve (void) ile belirtilir
    (void)ac;
    (void)av;

    // "z\n" stringini ekrana yazdırma
    write(1, "z\n", 2);

    // Programın normal sonlandırılması
    return 0;
}
