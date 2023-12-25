int ft_str_is_uppercase(char *str) 
{
    while (*str)
        {
        if (!isupper(*str))
        {
            return 0;
        }
        str++;
    }
    return 1;
}
