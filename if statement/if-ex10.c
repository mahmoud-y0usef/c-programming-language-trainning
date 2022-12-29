#include <stdio.h>
int main(void){
    //Type a program that asks a person to enter the value of his or her salary and the number of days off during the year, if the number of days is less than or equal to 21 is added to the salary 10,000 pounds, if more than 21 the increase is 5000 pounds, and prints the value of the annual increase and the value of the new salary on the screen

    int salary , holiday_year;
    printf("enter your salary: ");
    scanf("%d" , &salary);
    printf("enter your holiday in the year: ");
    scanf("%d" , &holiday_year);

    if (holiday_year <= 21)
    {   
        printf("increase: %d\n" , (10000-salary));
        printf("value is a new salary: %d\n" , (salary+10000));
    }else if (holiday_year > 21)
    {
        printf("increase: %d\n" , (5000-salary));
        printf("value is a new salary: %d\n" , (salary+5000));
    }
    
    
    return 0;   
}