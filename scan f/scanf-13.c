#include <stdio.h>

int main(void){

    int wghiet;
    int ton;
    printf("enter your wghiet in kg: ");
    scanf("%d" , &wghiet);

    ton = wghiet/(1000);

    printf("your wghiet in ton is %d" , ton);

    return 0;
}