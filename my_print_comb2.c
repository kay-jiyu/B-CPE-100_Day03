#include <stdio.h>
#include <unistd.h>
void my_putchar(char a)
{
    write(1, &a, 1);
}

int my_print_comb2()
{
    int x, y;

    for (x = 00; x <= 98; x++)
    {
        for (y = x + 1; y <= 99; y++)
        {
            my_putchar((x / 10) + '0');
            my_putchar((x % 10) + '0');
            my_putchar(' ');
            my_putchar((y / 10) + '0');
            my_putchar((y % 10) + '0');
            if (x != 98 || y != 99)
            {
                my_putchar(',');
                my_putchar(' ');
            }
        }
    }
    return 0;
}

int main(void)
{
    my_print_comb2();

    return 0;
}