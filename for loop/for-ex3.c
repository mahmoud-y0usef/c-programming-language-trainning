#include <stdio.h>
int main(void){
    //A program that prints multiples of 9 ( from 1 to 12)
    int n = 9;
    for(int i = 1 ; i<=12 ; i++){

        printf("%d * %d = %d\n" , n , i , n*i);
    }
    return 0;
}