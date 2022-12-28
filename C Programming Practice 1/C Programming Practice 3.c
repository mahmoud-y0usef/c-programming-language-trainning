#include <stdio.h>
int main(void){

    //A program that asks the user to enter the value of his monthly salary and then calculates the value of his annual salary and prints it on the screen.
    int money_month;
    int mony_year;

    printf("enter your salary for month: ");
    scanf("%d" , &money_month);
    mony_year = money_month*12;

    printf("your salary in the year is: %d" , mony_year);


    return 0;
}