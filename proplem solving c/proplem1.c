#include <stdio.h>

int main(void){
/**Problem statement 

Sherif is a student at Gammal Tech. Indeed, every time he finishes a lesson on the   website, he takes a few hours to do the exercise below the video. 

He wanted to increase his rank on the website, so he started making videos to               solve the problems, and posting them on his social media accounts. He sent them to   Gammal Tech Technical Support in order to get his volunteering points. 

The scoring criteria is the following:

- The low quality video gives Sherif 1 point.

- The good quality video gives Sherif 3 points.

You need to calculate the number of  Sherif's volunteering points.

Input

The first line of the input contains one integer L low quality video (L ≥ 0 ) 

The second line of the input contains one integer H High quality video (H ≥ 0 ) 

Output

the total volunteering points*/



    int volte , low , high;

    printf("enter your low quality video: ");
    scanf("%d" , &low);
    printf("enter your high quality video: ");
    scanf("%d" , &high);

    volte = (low)*1 + (high)*3;

    printf("total volunteering points is: %d" , volte);

    return 0;
}