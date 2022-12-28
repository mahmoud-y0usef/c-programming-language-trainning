#include <stdio.h>
int main(void){
//A program that asks the user to enter 3 digits and print the sum of the first two digits multiplied by the third number

    int n1;
    int n2;
    int n3;
    int result;

    printf("enter your first number: ");
    scanf("%d" , &n1);
    printf("enter your second number: ");
    scanf("%d" , &n2);
    printf("enter your third number: ");
    scanf("%d" , &n3);


    result = (n1+n2)*n3;
    printf("%d" , result);

    return 0;
}