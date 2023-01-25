#include <stdio.h>
int main(void){
    // hexadicemal - dicemal | dicemal - hexadicemal
    while (1)
    {
        int hexadicemal , dicemal , n;
        printf("1- hexadicemal - dicemal\n");
        printf("2-dicemal - hexadicemal\n");
        scanf("%d" , &n);
        if (n == 1)
        {
            printf("enter a hexadicemal: ");
            scanf("%x" , &hexadicemal);
            dicemal = hexadicemal;
            printf("hexadicemal-> %x to dicemal-> %d\n\n" , hexadicemal , dicemal);
        }else if (n == 2)
        {
            printf("enter a dicemal: ");
            scanf("%d" , &dicemal);
            hexadicemal = dicemal;
            printf("dicemal-> %d to hexadicemal-> %x\n\n" , dicemal , hexadicemal);
        }
    }
    return 0;
}