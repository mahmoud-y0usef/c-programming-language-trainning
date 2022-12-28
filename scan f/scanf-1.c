#include <stdio.h>

int main(void){
    //A program that asks the user to enter a number and the software prints it in a new line

    int n;
    int result;

    printf("enter your number: ");
    scanf("%d", &n);
    result = n;
    printf("your number is: %d" , result);

    return 0;
}