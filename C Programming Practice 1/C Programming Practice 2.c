#include <stdio.h>
int main(void){
    //A program that asks a person about the date of birth and predicts that the person will set any sign or interval after the day, month and year, and prints them that the date of birth is (day/month/year).

    int day , month , year;
    printf("enter your birth date: ");
    scanf("%d %*c %d %*c %d" , &day , &month , &year);

    printf("(%d/%d/%d)" , day , month , year);

    return 0;
}