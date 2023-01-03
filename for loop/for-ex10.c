#include <stdio.h>
int main(void){
    //A program that asks a person to enter two different numbers and print the numbers from the smallest to the largest.

    int n1 , n2;
    printf("enter the first number: ");
    scanf("%d" , &n1);
    printf("enter the second number: ");
    scanf("%d" , &n2);
    if (n1<n2)
    {
        for(int i = n1 ; i<=n2 ; i++){

            printf("%d\n" , i);
        }
    }else if(n2<n1){
        for(int i = n2 ; i<=n1 ; i++){

            printf("%d\n" , i);
        }
    }
    
    return 0;
}