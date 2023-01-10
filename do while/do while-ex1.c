#include <stdio.h>
int main(void){

    //‍A program that prints a person's name 10 times (using do.. while )
    int rebeat = 1;
    char name[25];
    printf("whats you name: ");
    scanf("%s" , &name);
    do
    {
        printf("%s\n" , (name));
        rebeat++;
    } while (rebeat <= 10);
    
    return 0;
}