int	ft_hexa_lowercase(unsigned int n, int count)
{
    char *hexa;
    hexa = "0123456789abcdef";
    
    if (n >= 16)
    {
        count = ft_hexa_lowercase(n / 16, count);
    }
    write(1, &hexa[n % 16], 1);
    count++;
    return count;
}
