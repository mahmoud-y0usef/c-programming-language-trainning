#include <stdio.h>
int main(void){
    //A program that asks the user about the number of pages of the book and how many pages he has read to date and then prints the number of days needed for the user to finish reading all the book (the user reads every page of the book every two days)
    float day = 0.5;
    float result;
    int number_of_page , read_now;
    printf("enter the number of page: ");
    scanf("%d" , &number_of_page);
    printf("enter pages are you readen now: ");
    scanf("%d" , &read_now);
    result = (number_of_page - read_now)/day;
    printf("number the day to finsh the book is: %f" , result);
    return 0;
}