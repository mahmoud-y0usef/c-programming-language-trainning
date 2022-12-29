#include <stdio.h>
int main(void){

    //The playstation program : when playing Match Football on the playstation is calculated the earner and loser based on the number of goals. Required: Write a program that asks the user to enter two numbers, the first expresses the number of goals of the first player and the second expresses the number of goals of the second player. If the first number is greater than the second number the program prints player 1 is the winner and if the second number is greater than the first number, the player 2 is the winner
     int n1 , n2;

    printf("enter the count of goal in first player: ");
    scanf("%d" , &n1);
    printf("enter the count of goal in second player: ");
    scanf("%d" , &n2);

    if (n1 > n2)
    {
        printf("first player is win");
    }else if(n2 > n1){
        printf("second player is win");
    }else{
        printf("you should enter two different numbers");
    }
    return 0;

}