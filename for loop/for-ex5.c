#include <stdio.h>
int main(void){
    //A program that asks a person to enter any number and applies the numbers from the number I enter to the number 1
    int n ;
    printf("enter a number: ");
    scanf("%d" , &n);
    for(int i=0 ; i <= n ; i++){
        printf("%d\n" , n-i);
    }
    return 0;
}