#include <stdio.h>
int main(void){

    //Temperature programme. In the summer, we turn on the air conditioner in order to control the temperature to make it lower. Required: Write a program if the temperature is above 30 degrees Celsius, it prints "turn on AC", otherwise it prints "Temp is fine".

    int Temperature;
    scanf("%d" , &Temperature);

    if (Temperature > 30)
    {
        printf("turn on AC");
    }else{
        printf("Temp is fine");
    }
    

    return 0;
}