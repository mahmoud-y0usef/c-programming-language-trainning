#include <stdio.h>
int main(void){
    //Study Subjects Program: In one school after performing the exams of 5 subjects each from 100 degrees, and the grades of 5 subjects emerged, some students wanted to calculate their total and the total grades they lack to try next year to reduce this difference. Required: Write a program that asks the student for his grades in the 5 subjects and the program prints the total and total grades missing

    int n1 , n2 , n3 ,n4 , n5;
    int total_of_grades , total_of_grades_refuse;

    printf("enter your first grade numper from 100grades: ");
    scanf("%d" , &n1);

    printf("enter your second grade numper from 100grades: ");
    scanf("%d" , &n2);

    printf("enter your third grade numper from 100grades: ");
    scanf("%d" , &n3);

    printf("enter your fourth grade numper from 100grades: ");
    scanf("%d" , &n4);

    printf("enter your fifth grade numper from 100grades: ");
    scanf("%d" , &n5);

    total_of_grades = n1 + n2 + n3 + n4 + n5;
    total_of_grades_refuse =  500 - total_of_grades;
    printf("your total grade is: %d\n grade refuse is: %d" , total_of_grades , total_of_grades_refuse);
    return 0;
}