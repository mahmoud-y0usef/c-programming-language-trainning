#include <stdio.h>
int main(void){

    //Sharif finished his high school exams, and when the result appeared, he wanted to calculate the number of grades he had lost. Required: Write a program that asks the person about his grades in 6 different subjects, assuming that each subject is out of 100, and then prints a missing score in all subjects

    int article1 ,article2 ,article3 , article4 , article5 , article6 ;
    int grade1 = 100 , grade2 = 100 , grade3 = 100 , grade4 = 100 , grade5 = 100 , grade6 = 100;
    int refuse;

    printf("enter your grade in article1: ");
    scanf("%d" , &article1);
    printf("enter your grade in article2: ");
    scanf("%d" , &article2);
    printf("enter your grade in article3: ");
    scanf("%d" , &article3);
    printf("enter your grade in article4: ");
    scanf("%d" , &article4);
    printf("enter your grade in article5: ");
    scanf("%d" , &article5);
    printf("enter your grade in article6: ");
    scanf("%d" , &article6);

    refuse = (grade1-article1) + (grade2-article2) + (grade3-article3) + (grade4-article4) +(grade5-article5) + (grade6-article6);
    printf("your refuse grade is: %d" , refuse);


    return 0;
}