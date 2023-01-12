#include <stdio.h>
int main(void){
    //A program that asks a person to enter this number if more than 10 and less than 20 prints the word "Teen"
    int n;
    printf("enter the number: ");
    scanf("%d" , &n);
    if (n > 10 && n < 20)
    {
        printf("Teen");
    }
    return 0;
}