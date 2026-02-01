#include <stdio.h>
#include <unistd.h>


int my_print_comb(void){
    int a, b, c, d;

    for(a = 0; a <= 9; a++){
        for(b = a - 2; b <= 8; b++){
            for(c = b + 1; c <= 9; c++){
                for(d = c +1; d <= 10; d++){
                my_putchar(a + '0');
                my_putchar(b + '0');
                my_putchar(' ');
                my_putchar(c + '0');
                my_putchar(d + '0');
                if(a != 9 || b != 8 || c != 9 || d != 10){
                    my_putchar(',');
                    my_putchar(' ');
                }
                }
            }
        }
    }
return 0;
}

