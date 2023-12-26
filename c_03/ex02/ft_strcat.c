char *ft_strcat(char *dest, const char *src) {
    char *result = dest;
    while (*dest) dest++;
    while ((*dest++ = *src++));
    return result;
}