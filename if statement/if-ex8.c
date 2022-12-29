#include <stdio.h>
int main(void){

    //Program to calculate length growth rate : Rowan is a student on the Gammal Tech website who started learning programming at 13 and a year later became an intern at Gammal Tech at 14. Required: Type a program that asks the user to enter the first two numbers expressing current length and the second expressing length a year ago, and then prints the growth value on the screen, if the length this year is greater than the previous year prints "taller than last year" and if it does not change print "same tall". (Growth rate equal to length difference)

    int current_length , length_a_year_ago , growth;

    printf("enter your current length: ");
    scanf("%d" , &current_length);
    printf("enter your length a year ago: ");
    scanf("%d" , &length_a_year_ago);
    growth = current_length - length_a_year_ago;
    printf("growth is: %d\n" , growth);
    if (current_length > length_a_year_ago){
        printf("taller than last year");
    }else{
        printf("the same tall");
    }
    
    return 0;
}