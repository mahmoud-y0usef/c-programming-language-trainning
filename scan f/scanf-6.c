#include <stdio.h>

int main(void){
//A program that requires the user to enter 3 digits and print the sum of each two digits in a separate line

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

    result = n3 + n2;
    printf("%d\n" , result);
    result = n1 + n3;
    printf("%d\n" , result);
    result = n1 + n2;
    printf("%d\n" , result);

    return 0;
}