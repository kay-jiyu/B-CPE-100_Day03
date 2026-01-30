#include <stdio.h>
#include <unistd.h>
void my_putchar(char a){
    write(1, &a, 1);
}

int my_print_alpha(void){
    char a = '1';

     while(a <= '9'){
         my_putchar(a);
         a++;
    };
return 0;
}

int main(void)
{
    my_print_alpha();

    return 0;
}