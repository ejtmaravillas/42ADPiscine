void	ft_putnbr_base(int nbr, char *base);

int main()
{
    int nbr = 16;
    char base[] = "0123456789abcdef";
    // char base[] = "01";
    // char base[] = "poneyv if";
    ft_putnbr_base(nbr, base);
    return 0;
}