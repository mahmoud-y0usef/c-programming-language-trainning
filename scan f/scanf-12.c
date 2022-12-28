#include <stdio.h>
int main(void){

    //A program that asks a person about his age in years and then prints his age in days without leap years.
    int age;
    int day;

    printf("enter your age: ");
    scanf("%d" , &age);

    day = age*365.25;

    printf("your age in days is: %d" , day);

    return 0;
}