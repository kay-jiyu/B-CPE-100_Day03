#include <stdio.h>
#include <unistd.h>
void my_putchar(char a){
    write(1, &a, 1);
}

int my_isneg(int n){
    if(n < 0){
        my_putchar('N');
    }
    else{
        my_putchar('P');
    }
return 0;
}

int main(void)
{
    int nbr = 0;
    my_isneg(nbr);

    return 0;
}