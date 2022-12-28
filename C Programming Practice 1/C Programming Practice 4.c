#include <stdio.h>
int main(void){

    //A program that asks a person about his age and prints for him the year of his birth
    int age;
    int year;
    int year_of_birth;
    printf("enter your age: ");
    scanf("%d" , &age);
    printf("enter the year of now: ");
    scanf("%d" , &year);
    year_of_birth = year - age;
    printf("your year of birth is : %d" , year_of_birth);
    return 0;
}