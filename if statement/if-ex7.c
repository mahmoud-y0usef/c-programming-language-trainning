#include <stdio.h>

int main(void){

    //Gammal Tech Students Program: Some subscribers on gammal tech are keen to excel and be one of the world's most powerful programmers. After completing their lesson, they continue to resolve questions and exercises throughout the day. Required: Write a program that asks  the user to enter a number expressing the number of visits to the site if more than 20 times printed "Excellent"

    int vists;
    printf("enter vistors: ");
    scanf("%d" ,&vists );

    if (vists > 20){
        printf("Excellent");
    }
    

    return 0;
}