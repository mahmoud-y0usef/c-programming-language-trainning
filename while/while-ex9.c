#include <stdio.h>
int main(void){

    //A program that asks a person to enter two numbers smaller than the second and is printed from the first number to the second number (using while)
    int n1 , n2;
    printf("enter the first number: ");
    scanf("%d" , &n1);
    printf("enter the second number it must be less than first number: ");
    scanf("%d" , &n2);

    if (n1 > n2)
    {
        while (n1 >= n2)
        {
            printf("%d\n" , n1--);
        }
        
    }else{
        printf("the second number should be less than first number");
    }
    
    return 0;
}