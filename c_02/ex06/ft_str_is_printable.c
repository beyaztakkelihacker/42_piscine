int ft_str_is_printable(char *str) 
{
    while (*str) 
    {
        if (!isprint(*str))
        {
            return 0;
        }
        str++;
    }
    return 1;
}
