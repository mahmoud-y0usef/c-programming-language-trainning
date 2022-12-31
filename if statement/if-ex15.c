#include <stdio.h>
int main(void){

    //Game of chance. We all love games. What do you think about making one then. What is required: Write a program that takes input from the user and if 1 prints "jump 30 times" and if 2 prints "run 1 km" and so on and you can add more.
    int game;
    printf("enter a number less than or equel 4: ");
    scanf("%d" , &game);

    if (game==1)
    {
        printf("jump 30 times");
    }else if (game == 2)
    {
        printf("jump 20 times");
    }else if (game == 3)
    {
        printf("jump 50 times");
    }else if (game == 4)
    {
        printf("run 1 km");
    }else{
        printf("you shou;d enter a number les than or equel 4");
    }
    
    
    
    
    return 0;
}