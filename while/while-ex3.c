#include <stdio.h>
int main(void){

    //A program that prints 8 Multiplication Table (Using While)

    int num = 8;
    int result = 1;
    while (result <= 12 && result >= 1)
    {
        printf("%d * %d = %d \n" , num , result++ , (num*result));
    }
     
    return 0;
}