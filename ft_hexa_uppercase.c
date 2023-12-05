int	ft_hexa_uppercase(unsigned int n, int count)
{
    char *hexa;
    hexa = "0123456789ABCDEF";
    
    if (n >= 16)
    {
        count = ft_hexa_uppercase(n / 16, count);
    }
    write(1, &hexa[n % 16], 1);
    count++;
    return count;
}
