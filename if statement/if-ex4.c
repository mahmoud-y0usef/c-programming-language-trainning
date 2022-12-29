#include <stdio.h>
int main(void){
    //Asancer Programme (elevator): Some elevators should not be entered by more than 5 people and their total weight should be less than 500 kilos so that the elevator does not collapse. Required: Write a program that asks a person to enter 5 numbers and collect them, if the total is greater than 500 prints "Error, more than 500 kg", and if the total is less than or equal to 500 prints "Okay"

    int n1 , n2 , n3 , n4 , n5 , weight;

    printf("enter the first weight in person1: ");
    scanf("%d" , &n1);
    printf("enter the first weight in person2: ");
    scanf("%d" , &n2);
    printf("enter the first weight in person3: ");
    scanf("%d" , &n3);
    printf("enter the first weight in person4: ");
    scanf("%d" , &n4);
    printf("enter the first weight in person5: ");
    scanf("%d" , &n5);

    weight = n1 + n2 + n3 + n4 + n5;

    if (weight > 500)
    {
        printf("Error, more than 500 kg\n");
    }else if (weight <= 500)
    {
        printf("Okay\n");
    }
    
    

    return 0;
}