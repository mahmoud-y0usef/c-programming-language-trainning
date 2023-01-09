#include <stdio.h>
int main(void){

    //A program that asks a person to enter any number and applies the numbers from 1 to the number that you enter and prints the total numbers from 1 to the number that you enter (using while)
    int n;
    int sum = 0;
    printf("enter the number: ");
    scanf("%d" , &n);
    while (n > sum)
    {
        sum += n;
        printf("%d\n" , n++);
    }
    printf("the sumition is: %d" , sum);
    
    return 0;
}