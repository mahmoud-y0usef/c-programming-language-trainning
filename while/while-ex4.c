#include <stdio.h>
int main(void){

    //A program that prints numbers from 1:100 (using while)
    int n = 1;
    while (n >= 1 && n <= 100 )
    {
        printf("%d\n" , n++);
    }
        

    return 0;
}