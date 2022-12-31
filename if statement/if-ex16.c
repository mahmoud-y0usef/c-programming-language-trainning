#include <stdio.h>
int main(void){
    //Gammal Tech Degree Program. After the end of each course, the participant on the gammal.tech website must pass an exam on the course in order to know if they fully understood the course or if they need to review some topics. Required: Write a program if the student gets a score of 100%, printing “congratulations”, otherwise  it prints "good luck next time"

    int score;
    scanf("%d" , &score);

    if (score == 100)
    {
        printf("congratulations");
    }else{
        printf("good luck next time");
    }
    
    return 0;
}