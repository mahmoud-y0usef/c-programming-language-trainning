#include <stdio.h>
int main(void){

    //A program that asks a person to enter different numbers if the number is positive and his side applies the word "is positive" and if he negatively applies the number and his side applies the word "is negative" and the program closes to what enters 0 (using while)
    int num;
    printf("enter the number: ");
    scanf("%d" , &num);
    while (num != 0)
    {   
        if (num > 0)
        {
            printf("%d is \"positive\"\n" , num);
        }else if(num < 0){
            printf("%d is \"negative\"\n" , num);
        }
        printf("enter the number: ");
        scanf("%d" , &num);
    }
    return 0;
}