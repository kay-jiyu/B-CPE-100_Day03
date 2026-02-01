#include <stdio.h>
#include <unistd.h>


int my_print_alpha(void){
    char a = '1';

     while(a <= '9'){
         my_putchar(a);
         a++;
    };
return 0;
}
