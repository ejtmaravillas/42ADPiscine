void	ft_putnbr_base(int nbr, char *base);

int main()
{
    int nbr = 123421;
    // char base[] = "0123456789abcdef";
    // char base[] = "01";
    char base[] = "poneyvif";
    ft_putnbr_base(nbr, base);
    return 0;
}