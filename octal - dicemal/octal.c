#include <stdio.h>
int main(){
    // convert dicemal to octal - octal to dicemal
    while (1)
    {
        int dicemal , octal , n;
        printf("1-dicemal to octal\n");
        printf("2-octal to dicemal\n");
        scanf("%d" , &n);
        if (n == 1)
        {
            printf("enter a dicemal number: ");
            scanf("%d" , &dicemal);
            octal = dicemal;
            printf("your dicemal number -> %d in octal -> %o\n*----------------*\n\n" , dicemal , octal);
        }else if (n == 2)
        {
            printf("enter a octal number: ");
            scanf("%o" , &octal);
            dicemal = octal;
            printf("your octal number -> %o in dicemal -> %d\n*----------------*\n\n" , octal , dicemal);
        }
        
    }
    
    return 0;
}