char *ft_strncat(char *dest, char *src, unsigned int nb) {
    char *result = dest;

    while (*dest) dest++;

    unsigned int y = 0;

    for (; y < nb && (*dest++ = *src++); y++);

    *dest = '\0';

    return result;
}