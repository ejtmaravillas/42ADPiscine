#include <unistd.h>

void	ft_putnbr(int nb);

int main()
{
    ft_putnbr(-12323);
    write(1,"\n",1);
    ft_putnbr(0);
    write(1,"\n",1);
    ft_putnbr(-2147483648);
    write(1,"\n",1);
    ft_putnbr(2147483647);
    write(1,"\n",1);
    ft_putnbr(214647);
}
