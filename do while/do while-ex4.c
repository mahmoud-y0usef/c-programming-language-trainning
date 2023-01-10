#include <stdio.h>
int main(void){

    //A program that asks the user for the password if the user enters any number other than 12345 refers the question. If 12345 goes in it says "password is correct" (using do.. while )
    int n = 1;
    int pas;
    do
    {
        printf("enter the password: ");
        scanf("%d" , &pas);
        if (pas != 12345)
        {
            printf("paswword error blease try again\n");
        }else{
            n=0;
        }
        
    } while (n!=0);
    printf("password is correct");

    return 0;
}