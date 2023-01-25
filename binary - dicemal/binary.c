#include <stdio.h>
int main(){
    // convert binary to dicemal
    while (1)
    {
        int binary,decimal=0 , y=1;
        printf("enter a binary number: ");
        scanf("%d" , &binary);
        while (binary != 0)
        {
            decimal += binary%10 *y;
            binary /= 10;
            y *= 2;
        }
        printf("%d\n" , decimal);
    }
    
    
    
    return 0;
}