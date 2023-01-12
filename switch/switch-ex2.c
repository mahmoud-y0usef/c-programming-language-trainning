#include <stdio.h>
int main(void){
//A program that asks a person to enter the number of a day of the week from 1 to 7 and prints the name of the day this week where Saturday is day number 1 (using switch)

    int n;
    printf("enter the number of day: ");
    scanf("%d" , &n);
    switch (n)
    {
    case 1:
        printf("Saturday");
        break;
    
    case 2:
        printf("Sunday");
        break;
    
    case 3:
        printf("Monday");
        break;
    
    case 4:
        printf("Tuesday");
        break;
    
    case 5:
        printf("Wednesday");
        break;
    
    case 6:
        printf("Thursday");
        break;
    
    case 7:
        printf("Friday");
        break;
    
    default:
        printf("you should enter a correct day number");
        break;
    }
    return 0;
}