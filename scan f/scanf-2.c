#include <stdio.h>
int main(void){

    //A program that asks the user to enter number 1 to 9 and the software prints the supplementary number to make the value of both numbers equal to 10

    int n1;
    int n2;
    int result;

    printf("enter a number from 1 to 9: ");
    scanf("%d" , &n1);
    n2 = 10-n1;
    result = n1+n2;
    printf("%d", result);

    return 0;
}