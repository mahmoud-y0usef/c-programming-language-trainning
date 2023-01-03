#include <stdio.h>
int main(void){
    //A program that requests the user to enter a number if the number is greater than 20 prints all the numbers from 20 to this number, and if smaller than 20 prints all the numbers from this number to 20
    int n ;
    printf("enter the number: ");
    scanf("%d" , &n);
    if (n>20)
    {
        for(int i =n ; i>=20 ; i--){
            printf("%d\n" , i);
        }
    }else if (n<20)
    {
        for(int i =n ; i<=20 ; i++){
            printf("%d\n" , i);
        }
    }
    
    
    return 0;
}