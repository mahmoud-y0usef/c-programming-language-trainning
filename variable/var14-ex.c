#include <stdio.h>
int main(void){
 //Write a program that assgins a person’s age in a variable (Example: 23) and assgins the year in another variable (Example: 2022), then the program subtracts them and prints the result on the screen (Example: 1999).

    int age = 23;
    int year = 2022;
    int birth_date = year - age;

    printf("your birth date is :> %d" , birth_date);

    return 0;
}