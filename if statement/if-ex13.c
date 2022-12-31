#include <stdio.h>
int main(void){

    //Write a program. If the user enters a number greater than 10, he will be printed "greater than 10", and if he enters a smaller number, he will print "less than 10", and if he enters the same 10, he will print "equal 10".

    int n;
    scanf("%d" , &n);

    if (n > 10)
    {
        printf("greater than 10");
    }else if (n<10)
    {
        printf("less than 10");
    }else if (n == 10)
    {
        printf("equal 10");
    }
    
    
    
    return 0;
}