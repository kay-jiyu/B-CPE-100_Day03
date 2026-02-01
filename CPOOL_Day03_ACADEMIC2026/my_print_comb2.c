#include <stdio.h>
#include <unistd.h>


int my_print_comb()
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
