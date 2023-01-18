#include <stdio.h>
int main(void){

    //A program that asks a person to enter 10 consecutive numbers and when implemented prints each number in a line and prints their total.
    int j,i,x[10],sum=0;
    do
    {
        printf("enter a number: ");
        for ( i = 0; i < 10; i++)
        {
            scanf("%d" , &x[i]);
        }
        for ( i = 10; i >= 0; i--)
        {
            sum = sum+i;
            printf("%d\n" , x[i-(1)]);
        }
        printf("total number is: %d\n" , sum);
        printf("do you want enter again: 1[yes],0[no]: ");
        scanf("%d" , &j);
        do
        {
            if (j == 0)
            {
                j=0;
                break;
            }else if (j != 1)
            {
                do
                {
                    printf("you should enter correct number: ");
                    scanf("%d" , &j);
                    if (j == 0)
                    {
                        break;
                    }
                    
                } while (j !=1);
                
            }
            break;
        } while (j !=1);
        
        
        
        for ( i = 0; i < 10; i++)
        {
            sum = sum-(i+1);
        }
        
    } while (j != 0);
    printf("thank you see you soon!");
    

    return 0;
}