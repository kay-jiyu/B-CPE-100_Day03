#include <stdio.h>
#include <unistd.h>
void my_putchar(char a)
{
    write(1, &a, 1);
}

int my_put_nbr(int nb)
{

    if (nb < 0)
    {
        my_putchar('-');
        nb = -nb;
    }
    if (nb >= 10)
    {
        my_put_nbr(nb / 10);
    }
    my_putchar((nb % 10) + '0');

    return nb;
}

int main(void)
{
    int nbr1 = -2147483647;
    my_put_nbr(nbr1);
    my_putchar('\n');

    return 0;
}