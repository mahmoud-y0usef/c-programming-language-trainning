#include <stdio.h>
int main(void){

    //A program that asks a person to enter two different numbers and print the numbers from the smallest to the largest (using while)
    int n1 , n2;
    printf("enter the first number: ");
    scanf("%d" , &n1);
    printf("enter the second number: ");
    scanf("%d" , &n2);

    if (n1 > n2)
    {
        while (n1 >= n2)
        {
            printf("%d\n" , n2++);
        }
        
    }else if (n2 > n1)
    {
        while (n2 >= n1)
        {
            printf("%d\n" , n1++);
        }
    }
    
    

    return 0;
}