#include <stdio.h>
int main(void){

    //Library Access Management Program:  When you go to the library, you are assigned an Internet browser and you are handed a paper with the number of the role in which the device is assigned to you. Required: Type a program that asks the user to enter a number and print "Take the stairs" if the number is 1 and print "Take the elevator" if another number

    int n;
    printf("entre the number: ");
    scanf("%d" , &n);
    if (n == 1)
    {
        printf("Take the stairs");
    }else{
        printf("Take the elevator");
    }
    
    return 0;
}