#include <stdio.h>
int main(){
    //A program that asks a person to enter 10 numbers, if he finds that there is an entry number = 5 printed to him "found" and if he does not find a print "not found" and after the program is finished, it will be reinstated on its own.
    while (1)
    {
        int arr[10] , i;
        printf("enter the 10 number: ");
        for (i = 0; i <=9; i++)
            scanf("%d" , &arr[i]);
        
        for ( i = 0; i <=9; i++)
            if (arr[i] == 5)
            {
                printf("found\n");
                break;
            } 

        if (arr[i] !=5)
            printf("not found\n");
        
    }
    
    return 0;
}