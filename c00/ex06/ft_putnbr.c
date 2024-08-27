#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if(nb == -2147483647)
    {
        write(1,"-2147483647", 11);
        return ;
    }
    else if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb / 10 > 0)//exemple nb=15 | 15/10 = 1 > 0 (true ya3ni atkhdm)
    {
        ft_putnbr(nb / 10);//fonction tt3yt lrassha hna nb = 1 7it 15/10 = 1
    }
    ft_putchar(nb % 10 + '0');
}

int main(void)
{
    int nb = 15;
    ft_putnbr(nb);
    write(1, "\n", 1);
}