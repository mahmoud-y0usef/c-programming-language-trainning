#include <stdio.h>
int main(void){

    // super market
    int price , sum=0;
    printf("enter price item: ");
    scanf("%d" , &price);
    while (price != 0)
    {
        sum += price;
        printf("enter price item: ");
        scanf("%d" , &price);
    }

    printf("total of price: %d" , sum);
    
    return 0;
}