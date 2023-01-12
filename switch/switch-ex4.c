#include <stdio.h>
int main(void){

    //A program that asks the mother to enter the number of her children and if they are more than 3 prints (you have a lot of kids) lo 2 prints (you have 2 kids) If 1 asks her he is a boy and not a girl and her hands choose to write number 1 or 2 if I write 1 means a boy. (you have a little prince) and if you write 2 means the daughter of the program prints (you have a little princess)
    int n;
    printf("enter the number of cheldren: ");
    scanf("%d" , &n);
    switch (n)
    {
    case 3:
        printf("you have a lot of kids");
        break;
    case 2:
    printf("you have 2 kids");
        break;
    case 1:
    printf("1 or 2: ");
    scanf("%d" , &n);
    switch (n)
    {
    case 1:
        printf("a boy");
        break;
    case 2:
        printf("you have a little prince");
        break;
    }
    }

    return 0;
}