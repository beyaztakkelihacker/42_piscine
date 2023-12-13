#include <unistd.h>

// Açıklama: Bu program, standart çıkışa (stdout) "a" karakterini yazdırır.
int main(void)
{
    write(1, "a", 1);
    return 0;
}