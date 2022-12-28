#include <stdio.h>
int main(void){

    //Each of us dreams of owning many luxurious cars. Required: A program that asks the user how many cars he owns now and how many cars he wants, then prints the rest of the cars for him.
    int car_want;
    int car_owner;
    int result;

    printf("enter your number of car you want: ");
    scanf("%d" , &car_want);
    printf("enter your car owner: ");
    scanf("%d" , &car_owner);

    result = car_want - car_owner;
    printf("your rest of the car is %d" , result);
    
    return 0;
}