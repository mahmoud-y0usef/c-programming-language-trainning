#include <stdio.h>
int main(void){
    //A program that requires the user to enter 4 digits and print the sum of the first two digits in a line and the sum of the second two digits in a separate line
    int n1;
    int n2;
    int n3;
    int n4;
    int result;

    printf("enter your first number: ");
    scanf("%d" , &n1);
    printf("enter your second number: ");
    scanf("%d" , &n2);
    printf("enter your third number: ");
    scanf("%d" , &n3);
    printf("enter your fouth number: ");
    scanf("%d" , &n4);

    result = n1 + n2;
    printf("%d\n" , result);
    result = n3 + n4;
    printf("%d" , result);
    return 0;
}