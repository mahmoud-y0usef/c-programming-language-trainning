#include <stdio.h>
int main(void){

    //A program that requires the user to enter a set of numbers whenever the user enters a positive number. The tally is provided with 1. Whenever it enters a negative number, 1 of the tally is decreased and the program stops working when zero enters and prints the tally (using do.. while )
    int n;
    int sum = 0;

    do
    {
       printf("enter the number: ");
       scanf("%d" , &n);
       if (n > 0)
       {
            sum = sum +1;
       }else if (n < 0)
       {
            sum = sum -1;
       } 
    } while (n!=0);
    printf("total: %d" , sum);
    return 0;
}