#include <stdio.h>
int main(void){
//A program that asks the user to enter two numbers and print the value of their combined product

    int n1;
    int n2;
    int result;

    printf("enter your first number: ");
    scanf("%d" , &n1);
    printf("enter your second number: ");
    scanf("%d", &n2);

    result = n1 + n2;
    printf("your sumition number is : %d" , result);

    return 0;
}