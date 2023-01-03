#include <stdio.h>
int main(void){
    //A program that asks the user to enter a number smaller than 15 and then prints all the numbers from this number to the number 15
    int n;
    printf("enter a number less than 15: ");
    scanf("%d" , &n);
    for(int i=n ; i<=15 ; i++){
        printf("%d\n" , i);
    }

    return 0;
}