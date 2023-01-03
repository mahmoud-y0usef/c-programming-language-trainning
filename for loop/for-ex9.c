#include <stdio.h>
int main(void){
    //A program that asks a person to enter two numbers, second one smaller than the first one; then prints the numbers from to first one to the second one

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
    }
    
    return 0;
}