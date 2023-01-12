#include <stdio.h>
int main(void){
//‍A program that asks a person to enter a number and if the number is equal to 0 prints "not positive or negative" if not printed "just a number" (using switch)
    int n;
    printf("enter the number: ");
    scanf("%d" , &n);
    switch (n)
    {
    case 0:
        printf("not positive or negative");
        break;
    
    default:
        printf("just a number");
        break;
    }
    return 0;
}