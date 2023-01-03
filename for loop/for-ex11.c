#include <stdio.h>
int main(void){
    // A program to find the sum of the first 10 numbers.
    int sum =0;
    int i;
    printf("the sum of first 10 number of: ");
    for(i = 1 ; i<=10 ; i++){
        sum = sum +i;
        printf("%d" , i);
    }
    printf("\nresult: %d" , sum);

    return 0;
}