int ft_str_is_numeric(char *str) 
{
    while (*str) 
    {
        if (!isdigit(*str))
	{
            return 0;
        }
        str++;
    }
    return 1;
}
