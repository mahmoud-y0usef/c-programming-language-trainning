#include <stdio.h>

int main(void){
//A program that  records 3 digits and prints the sum of each two digits in a separate line

    int num1 = 10;
    int num2 = 5;
    int num3 = 4;

    int sum1 = num2 + num3;
    int sum2 = num1 + num3;
    int sum3 = num1 + num2;
    printf("%d\n%d\n%d\n" , sum1 , sum2 , sum3);

    return 0;
}