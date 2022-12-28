#include <stdio.h>
int main(void){
    //It is necessary to read books from time to time in order to increase and increase your information. Required: Write a program that asks the user to enter the number of books he reads daily and then tells him if he continues at the same level, he will read how many books at the end of the month.

    int read_book_daily;
    int read_book_month;
    printf("how many reading the book in daily: ");
    scanf("%d" , &read_book_daily);

    read_book_month = read_book_daily * 30;
    
    printf("if you contnue this read daily you will git book in the month this number: %d" , read_book_month);
    return 0;
}