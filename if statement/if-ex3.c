#include <stdio.h>
int main(void){
    //A program for traders, requires a person to enter two different numbers the first expressing the value of the initial money and the second expressing the total money after a month and calculating the value of the difference, if the profit prints "profit =.... "And if the loss prints" loss =...... "

    int initial_money , total_money , loser , win;

    printf("enter your expressing the value of the initial money: ");
    scanf("%d" , &initial_money);

    printf("enter your total money: ");
    scanf("%d" , &total_money);

    if (total_money < initial_money)
    {
        loser = initial_money - total_money;
        printf("you are loser: %d" , loser);
    }else if(total_money > initial_money)
    {
        win = total_money - initial_money;
        printf("you are win: %d" , win);
    }
    
    

    return 0;
}