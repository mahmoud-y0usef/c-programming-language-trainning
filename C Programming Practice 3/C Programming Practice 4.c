#include <stdio.h>
int main(void){

    /*برنامج يقوم بطباعة مثلث على هيئة:

          1

          22

          333

          4444

          55555

*/
    int i,j,n;
    printf("enter the number: ");
    scanf("%d" , &n);
    for (i = 1 ; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d" , i);
        }
        printf("\n");
    }
    

    return 0;
}