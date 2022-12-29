#include <stdio.h>
int main(void){
    //A program that asks a person to enter two digits and print the largest between them

    int n1 , n2;

    printf("enter the first number: ");
    scanf("%d" , &n1);
    printf("enter the second number: ");
    scanf("%d" , &n2);

    if (n1 > n2)
    {
        printf("first is the greatest");
    }else if(n2 > n1){
        printf("first is the greatest");
    }else{
        printf("you should enter two different numbers");
    }
    return 0;
}