#include <stdio.h>
int main(void){

    //A program that asks the user to enter a number if the number is greater than 20 prints all the numbers from 20 to this number, and if smaller than 20 prints all the numbers from this number to 20
    int n;
    printf("enter the number: ");
    scanf("%d" , &n);

        if (n > 20)
        {
            while (n > 20)
            {
                printf("%d\n" , n--);
            }
            
        }else if(n <= 20){
            while (n <= 20)
            {
                printf("%d\n" , n++);
            }
        }
        
    
    return 0;
}