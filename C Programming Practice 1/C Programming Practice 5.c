#include <stdio.h>
int main(void){
    //Automotive Software: Before going to a long drive, you need to make sure there's enough gasoline in the car to go to the trip. Required : write a program that asks the person how many litres of gasoline in the car and prints it how many kilometres a car can cut without having to add gasoline. (If the liter of gasoline is enough for 23 km)
    int gasoline;
    int trip_km;

    printf("what is the liter of gasoline now: ");
    scanf("%d" , &gasoline);
    trip_km = gasoline*23;
    printf("the car can cut distance is : %dkm" , trip_km);

    return 0;
}