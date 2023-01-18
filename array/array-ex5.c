#include <stdio.h>
int main(void){

    //A program in which array contains 10 digits, implemented threshold prints the numbers in the marital positions inside the array
    int j,i,x[10];


    do
    {
        printf("enter a number: ");
        for ( i = 0; i <=9; i++)
        {
            scanf("%d" , &x[i]);
        }
        for ( i = 0; i <= 9; i++)
        {
            if (x[i]%2 != 0)
            {
                printf("%d\n" , x[i]);
            }
        }
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
    } while (j != 0);
    printf("thank you see you soon!");
    

    return 0;
}