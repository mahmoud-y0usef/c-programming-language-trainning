#include <stdio.h>

int main(void){
    //Program that converts weight from kg to ton (ton = 1000 kg)
    int wghiet;
    int ton;
    printf("enter your wghiet in kg: ");
    scanf("%d" , &wghiet);

    ton = wghiet/(1000);

    printf("your wghiet in ton is %d" , ton);

    return 0;
}
