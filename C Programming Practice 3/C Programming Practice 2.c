#include <stdio.h>
int main(void){

    //At the club there are some games that are dangerous to some people's ages. If this person is younger than 10 years or older than 50 years, he or she is prohibited from entering. Required: Make a program that asks a person to enter a number expressing his age, if he is older than 50 or less than 10 prints the word "not allowed"
    int age;
    printf("enter the age: ");
    scanf("%d" , &age);
    if (age > 50 || age < 10)
    {
        printf("not allowed");
    }
    
    return 0;
}