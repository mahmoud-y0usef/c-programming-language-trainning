#include <stdio.h>
int main(){
    //A program that asks a person to enter 10 numbers, if he finds that there is an entry number = 5 printed to him "found" and after the program is finished it again on its own.
    while (1){
    int arr[10] , i;
    printf("enter a 10 number: ");
    for ( i = 0; i <=9; i++)
        scanf("%d" , &arr[i]);

    for (i = 0; i <=9; i++)
    {
        if (arr[i] == 5){
            printf("found");
            return 0;
        }
        
    }
    }
    return 0;
}