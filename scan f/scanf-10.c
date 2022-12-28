#include <stdio.h>
int main(void){
    //A program that asks the user to enter 5 digits and print their total


    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    int result;

    printf("enter your first number: ");
    scanf("%d" , &n1);
    printf("enter your second number: ");
    scanf("%d" , &n2);
    printf("enter your third number: ");
    scanf("%d" , &n3);
    printf("enter your fouth number: ");
    scanf("%d" , &n4);
    printf("enter your fifth number: ");
    scanf("%d" , &n5);

    result = n1 + n2 + n3 + n4 + n5;
    printf("%d" , result);

    return 0;
}