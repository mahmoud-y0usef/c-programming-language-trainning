#include <stdio.h>
int main(void){
    //A program that asks the user to enter the number from 1 to 8 and prints this number with the name of the number (using the switch)

    int n;
    do
    {
        printf("enter the number: ");
        scanf("%d" , &n);
        switch (n)
        {
        case 1:
            printf("1-one\n");
            break;
        case 2:
            printf("2-two\n");
            break;
        case 3:
            printf("3-three\n");
            break;
        case 4:
            printf("4-four\n");
            break;
        case 5:
            printf("5-five\n");
            break;
        case 6:
            printf("6-six\n");
            break;
        case 7:
            printf("7-seven\n");
            break;
        case 8:
            printf("8-eight\n");
            break;
        }
    } while (n <= 8);
    
    return 0;
}