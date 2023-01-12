#include <stdio.h>
int main(void){

    /*On holidays, most people go to buy new clothes, so most shops and shops do discounts on clothes. Required: Make a program for a clothing store where it prints the discount value according to the number of pieces purchased by the customer.
Example:

If the number of pieces 1 software prints discount = 10%

If the number of pieces 2 software prints discount = 20%

If the number of pieces 3 software prints discount = 30%

If the number of pieces 4 software prints discount = 40%

If 5 pieces or more software prints discount = 50%*/

    int pieces;
    do
    {
        printf("enter the pieces: ");
        scanf("%d" , &pieces);
        switch (pieces)
        {
        case 1:
            printf("discount = 10%\n");
            break;
        case 2:
            printf("discount = 20%\n");
            break;
        case 3:
            printf("discount = 30%\n");
            break;
        case 4:
            printf("discount = 40%\n");
            break;
        case 5:
            printf("discount = 50%\n");
            break;
        
        }
    } while (pieces != 0);
    

    return 0;
}