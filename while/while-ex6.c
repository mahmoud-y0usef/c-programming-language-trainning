#include <stdio.h>
int main(void){

    //A program that asks the user to enter a number smaller than 15 and then prints all the numbers from this number to the number 15 (using while)

    int n;
    printf("enter the number less than 15 : ");
    scanf("%d" , &n);
    while (n <= 15)
    {
        printf("%d\n" , n++);
    }
    
    return 0;
}