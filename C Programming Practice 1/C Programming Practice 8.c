#include <stdio.h>
int main(void){

    //Internet Companies Program : Some companies that provide monthly subscription services upon renewal of the subscription migrate the remaining balance in the last month for the new month. Required: Write a program that asks the person on the monthly subscription balance and on their consumption in the current month of the balance and prints the new month balance
    int month_subscripe , current_month_balance , next_month_balance;

    printf("enter your monthly subscription balance: ");
    scanf("%d" , &month_subscripe);
    printf("enter your current month balance: ");
    scanf("%d"  , &current_month_balance);

    next_month_balance = (month_subscripe - current_month_balance) + month_subscripe;
    printf("the next balance month is : %d" , next_month_balance);
    return 0;
}