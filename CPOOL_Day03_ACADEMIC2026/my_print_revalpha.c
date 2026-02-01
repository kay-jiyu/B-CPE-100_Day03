#include <stdio.h>
#include <unistd.h>


int my_print_alpha(void){
    char letter = 'z';

     while(letter >= 'a'){
         my_putchar(letter);
         letter--;
    };
return 0;
}

