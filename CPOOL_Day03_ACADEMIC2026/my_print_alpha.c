#include <stdio.h>
#include <unistd.h>
void my_putchar(char a){
    write(1, &a, 1);
}

int my_print_alpha(void){
    

    // while(letter <= 'z'){
    //     my_putchar(letter);
    //     letter++;
    // };
    // return 0;

    /*do {
        my_putchar(letter);
        letter++;
    } while(letter <= 'z');
    return 0;
*/

/*for(char letter = 'a'; letter <= 'z'; letter++){
    my_putchar(letter);
}*/

return 0;
}

int main(void)
{
    my_print_alpha();

    return 0;
}