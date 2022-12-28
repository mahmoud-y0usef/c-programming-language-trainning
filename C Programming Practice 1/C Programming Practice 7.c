#include <stdio.h>
int main(void){
    //Carpenters' Program: The carpenter uses many nails while making furniture, the carpenter wanted to make some chairs and tables, if the one chair needs 25 nails to make it and the table needs 30 nails. Required: Write a program that asks a person how many chairs and how many tables he wants to make and prints the total nails he needs.

    int chair , tables , nails;
    printf("how many chair do you need: ");
    scanf("%d" , &chair);
    printf("how many tables do you need: ");
    scanf("%d" , &tables);
    nails = (tables*30)+(chair*25);

    printf("the count of nails is : %d" , nails);
    return 0;
}