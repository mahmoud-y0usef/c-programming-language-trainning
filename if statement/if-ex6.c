#include <stdio.h>
int main(void){

    //Staff Programme: To encourage employees to work collectively, a company has made a bonus for employees who come to work on the same time, if two employees attend at the same time take a bonus, but if an employee comes and the other one is delayed, no one takes a bonus. Required: Write a program that asks the user to enter the first two numbers that reflect the date of attendance of the first and second staff member that reflects the date of attendance of the second staff member. If the numbers are equal, they print "same time", if the numbers are different, they print "No bonus".
    int date1 , date2;
    int time = 7;

    printf("enter the first attend time: ");
    scanf("%d" , &date1);
    printf("enter the second attend time: ");
    scanf("%d" , &date2);

    if (date1 != time || date2 != time)
    {
        printf("No bonus");
    }else if(date1 == time || date2 == time){
        printf("same time");
    }
    return 0;
}