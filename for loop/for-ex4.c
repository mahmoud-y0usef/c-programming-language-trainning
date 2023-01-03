#include <stdio.h>
int main(void){
    //A program that asks a person to enter any number and applies the numbers from 1 to the number that I enter
    int n;
    printf("enter a number: ");
    scanf("%d" , &n);
    for(int i = 0 ; i <=n ; i++){
        printf("%d\n" , i);
    }
    return 0;
}