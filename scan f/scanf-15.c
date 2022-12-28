#include <stdio.h>

int main(void){

//There are a lot of students studying graphs in school and we would like to help them. Required: Write a program that takes the values of 3 variables x, y and z and then prints the x + z and the y + z in parentheses eg 5 7 8 (15, 13)

    int x;int y;int z;
    int result1;int result2;

    printf("enter your first numper of x : ");
    scanf("%d" , &x);
    printf("enter your first numper of y : ");
    scanf("%d" , &y);
    printf("enter your first numper of z : ");
    scanf("%d" , &z);

    result1 = x+z;
    result2 = z+y;

    printf("(%d , %d)" , result1 , result2);
    return 0;
}