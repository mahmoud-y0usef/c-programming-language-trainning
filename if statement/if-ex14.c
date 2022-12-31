#include <stdio.h>
int main(void){

    //YouTube Views Program. When we volunteer, we upload our explainer videos to YouTube or any other platform and then send the video link to Gammal Tech so that the volunteering hours will increase. Required: Write a program that takes input from the user expressing the number of views a week ago and Another input expresses the current views and if the views increase it prints "views increased" if the views decreased its prints "views decreased" other than that it prints "same views".

    int last_week;
    int now;

    printf("what is views video in last week: ");
    scanf("%d" , &last_week);
    printf("what is views video now: ");
    scanf("%d" , &now);

    if (now > last_week)
    {
        printf("views increased");
    }else if (now < last_week)
    {
        printf("views decreased");
    }else if (now == last_week)
    {
        printf("same views");
    }
    
    
    
    return 0;
}