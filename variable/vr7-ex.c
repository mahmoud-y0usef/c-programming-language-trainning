#include <stdio.h>

int main(void){
//A program that records 4 digits and prints the sum of the first two digits in a line and the sum of the second two digits in a separate line

    int n1 = 2000;
    float n2 = 1.5;
    long n3 = 10000000;
    short n4 = 8;

    float sum1 = n1+n2;
    long sum2 = n3+n4;
    printf("%f\n%ld\n" , sum1 , sum2 );
    return 0;
}