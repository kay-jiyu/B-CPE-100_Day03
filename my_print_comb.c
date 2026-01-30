#include <stdio.h>
#include <unistd.h>
void my_putchar(char a){
    write(1, &a, 1);
}

int my_print_comb(void){
    int a, b, c;

    for(a = 0; a <= 7; a++){
        for(b = a + 1; b <= 8; b++){
            for(c = b + 1; c <= 9; c++){
                my_putchar(a + '0');
                my_putchar(b + '0');
                my_putchar(c + '0');
                if(a != 7 || b != 8 || c != 9){
                    my_putchar(',');
                    my_putchar(' ');
                }
            }
        }
    }
return 0;
}

int main(void)
{
    my_print_comb();

    return 0;
}