#include <stdio.h>

int main(void){

    //A program that takes 4 numbers from the user and combines the first two numbers, then subtracts the third number, then multiplies it by the fourth number and prints the result.

    int n1 ; int n2 ; int n3; int n4;
    int result;

    printf("enter your first numper: ");
    scanf("%d" , &n1);
    printf("enter your second numper: ");
    scanf("%d" , &n2);
    printf("enter your third numper: ");
    scanf("%d" , &n3);
    printf("enter your fourth numper: ");
    scanf("%d" , &n4);

    result = (n1 + n2)-n3*(n4);

    printf("%d" , result);

    return 0;
}