#include <stdio.h>
#include <unistd.h>


int my_print_combn(int n)
{

    if (n == 1)
    {
        for (int a = 0; a <= 9; a++)
        {
            my_putchar(a + '0');
            if (a != 9)
            {
                my_putchar(',');
                my_putchar(' ');
            }
        }
    }
    if (n == 2)
    {
        for (int a = 0; a <= 8; a++)
        {
            for (int b = a + 1; b <= 9; b++)
            {
                my_putchar(a + '0');
                my_putchar(b + '0');
                if (a != 8 || b != 9)
                {
                    my_putchar(',');
                    my_putchar(' ');
                }
            }
        }
    }
    if (n == 3)
    {
        for (int a = 0; a <= 7; a++)
        {
            for (int b = a + 1; b <= 8; b++)
            {
                for (int c = b + 1; c <= 9; c++)
                {
                    my_putchar(a + '0');
                    my_putchar(b + '0');
                    my_putchar(c + '0');
                    if (a != 7 || b != 8 || c != 9)
                    {
                        my_putchar(',');
                        my_putchar(' ');
                    }
                }
            }
        }
    }
    if (n == 4)
    {
        for (int a = 0; a <= 6; a++)
            for (int b = a + 1; b <= 7; b++)
                for (int c = b + 1; c <= 8; c++)
                    for (int d = c + 1; d <= 9; d++)
                    {
                        my_putchar(a + '0');
                        my_putchar(b + '0');
                        my_putchar(c + '0');
                        my_putchar(d + '0');
                        if (a != 6 || b != 7 || c != 8 || d != 9)
                        {
                            my_putchar(',');
                            my_putchar(' ');
                        }
                    }
    }
    else if (n == 5)
    {
        for (int a = 0; a <= 5; a++)
            for (int b = a + 1; b <= 6; b++)
                for (int c = b + 1; c <= 7; c++)
                    for (int d = c + 1; d <= 8; d++)
                        for (int e = d + 1; e <= 9; e++)
                        {
                            my_putchar(a + '0');
                            my_putchar(b + '0');
                            my_putchar(c + '0');
                            my_putchar(d + '0');
                            my_putchar(e + '0');
                            if (a != 5 || b != 6 || c != 7 || d != 8 || e != 9)
                            {
                                my_putchar(',');
                                my_putchar(' ');
                            }
                        }
    }
    if (n == 4)
    {
        for (int a = 0; a <= 6; a++)
            for (int b = a + 1; b <= 7; b++)
                for (int c = b + 1; c <= 8; c++)
                    for (int d = c + 1; d <= 9; d++)
                    {
                        my_putchar(a + '0');
                        my_putchar(b + '0');
                        my_putchar(c + '0');
                        my_putchar(d + '0');
                        if (a != 6 || b != 7 || c != 8 || d != 9)
                        {
                            my_putchar(',');
                            my_putchar(' ');
                        }
                    }
    }
    if (n == 5)
    {
        for (int a = 0; a <= 5; a++)
            for (int b = a + 1; b <= 6; b++)
                for (int c = b + 1; c <= 7; c++)
                    for (int d = c + 1; d <= 8; d++)
                        for (int e = d + 1; e <= 9; e++)
                        {
                            my_putchar(a + '0');
                            my_putchar(b + '0');
                            my_putchar(c + '0');
                            my_putchar(d + '0');
                            my_putchar(e + '0');
                            if (a != 5 || b != 6 || c != 7 || d != 8 || e != 9)
                            {
                                my_putchar(',');
                                my_putchar(' ');
                            }
                        }
    }
    if (n == 6)
    {
        for (int a = 0; a <= 4; a++)
            for (int b = a + 1; b <= 5; b++)
                for (int c = b + 1; c <= 6; c++)
                    for (int d = c + 1; d <= 7; d++)
                        for (int e = d + 1; e <= 8; e++)
                            for (int f = e + 1; f <= 9; f++)
                            {
                                my_putchar(a + '0');
                                my_putchar(b + '0');
                                my_putchar(c + '0');
                                my_putchar(d + '0');
                                my_putchar(e + '0');
                                my_putchar(f + '0');
                                if (a != 4 || b != 5 || c != 6 || d != 7 || e != 8 || f != 9)
                                {
                                    my_putchar(',');
                                    my_putchar(' ');
                                }
                            }
    }
    if (n == 7)
    {
        for (int a = 0; a <= 3; a++)
            for (int b = a + 1; b <= 4; b++)
                for (int c = b + 1; c <= 5; c++)
                    for (int d = c + 1; d <= 6; d++)
                        for (int e = d + 1; e <= 7; e++)
                            for (int f = e + 1; f <= 8; f++)
                                for (int g = f + 1; g <= 9; g++)
                                {
                                    my_putchar(a + '0');
                                    my_putchar(b + '0');
                                    my_putchar(c + '0');
                                    my_putchar(d + '0');
                                    my_putchar(e + '0');
                                    my_putchar(f + '0');
                                    my_putchar(g + '0');
                                    if (a != 3 || b != 4 || c != 5 || d != 6 || e != 7 || f != 8 || g != 9)
                                    {
                                        my_putchar(',');
                                        my_putchar(' ');
                                    }
                                }
    }
    if (n == 8)
    {
        for (int a = 0; a <= 2; a++)
            for (int b = a + 1; b <= 3; b++)
                for (int c = b + 1; c <= 4; c++)
                    for (int d = c + 1; d <= 5; d++)
                        for (int e = d + 1; e <= 6; e++)
                            for (int f = e + 1; f <= 7; f++)
                                for (int g = f + 1; g <= 8; g++)
                                    for (int h = g + 1; h <= 9; h++)
                                    {
                                        my_putchar(a + '0');
                                        my_putchar(b + '0');
                                        my_putchar(c + '0');
                                        my_putchar(d + '0');
                                        my_putchar(e + '0');
                                        my_putchar(f + '0');
                                        my_putchar(g + '0');
                                        my_putchar(h + '0');
                                        if (a != 2 || b != 3 || c != 4 || d != 5 || e != 6 || f != 7 || g != 8 || h != 9)
                                        {
                                            my_putchar(',');
                                            my_putchar(' ');
                                        }
                                    }
    }
    else if (n == 9)
    {
        for (int a = 0; a <= 1; a++)
            for (int b = a + 1; b <= 2; b++)
                for (int c = b + 1; c <= 3; c++)
                    for (int d = c + 1; d <= 4; d++)
                        for (int e = d + 1; e <= 5; e++)
                            for (int f = e + 1; f <= 6; f++)
                                for (int g = f + 1; g <= 7; g++)
                                    for (int h = g + 1; h <= 8; h++)
                                        for (int i = h + 1; i <= 9; i++)
                                        {
                                            my_putchar(a + '0');
                                            my_putchar(b + '0');
                                            my_putchar(c + '0');
                                            my_putchar(d + '0');
                                            my_putchar(e + '0');
                                            my_putchar(f + '0');
                                            my_putchar(g + '0');
                                            my_putchar(h + '0');
                                            my_putchar(i + '0');
                                            if (a != 1 || b != 2 || c != 3 || d != 4 || e != 5 || f != 6 || g != 7 || h != 8 || i != 9)
                                            {
                                                my_putchar(',');
                                                my_putchar(' ');
                                            }
                                        }
    }

    return 0;
}

