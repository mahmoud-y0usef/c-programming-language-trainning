#include <stdio.h>
int main(void){

    //A program that asks the user to enter numbers without stopping until the entry of number 5, the program stops working and prints "Is Five" (using do.. while )
    int n;
    do
    {
        printf("enter the number: ");
        scanf("%d" , &n);
        if (n == 5)
        {
            n=0;
        }
        
    } while (n!=0);
    printf("Is Five");

    return 0;
}