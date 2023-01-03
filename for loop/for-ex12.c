#include <stdio.h>
int main(void){
    //A program to calculate the factorial of a given number.

    int i, num;
    unsigned long long fact=1LL;

    /* Input number from user */
    printf("Enter any number to calculate factorial: ");
    scanf("%d", &num);

    /* Run loop from 1 to num */
    for(i=1; i<=num; i++)
    {
        fact = fact * i;
    }

    printf("Factorial of %d = %llu", num, fact);

    return 0;
}