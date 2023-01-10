#include <stdio.h>
int main(void){

    //A program that prints numbers from 1:100 and collects them all and prints the total (using do.. while )
    int n = 1;
    int sum = 0;
    do
    {
        sum +=n;
        printf("%d\n" , n);
        n++;
    } while (n <= 100);
    printf("total number is: %d" , sum);

    return 0;
}