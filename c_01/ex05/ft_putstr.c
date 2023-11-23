#include <stdio.h>

void ft_putstr(char *str) 
{
    while (*str != '\0')
    { 
	putchar(*str);
        str++;
    }
}

int main() 
{
    char string[] = "Selamun Aleyküm";

    ft_putstr(string);
}