#include <unistd.h>

int main(int ac, char **av)
{
    // (void) kullanarak kullanılmayan parametre uyarılarını engelle
    (void)ac;
    (void)av;

    // Ekrana "z" ve bir satır sonu karakteri yazdır
    write(1, "z\n", 2);

    // Program başarıyla tamamlandı
    return 0;
}
