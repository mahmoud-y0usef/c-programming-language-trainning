#include <stdio.h>
int main(void){

    //Drinking water program. In order for athletes to function well, they must drink a large amount of water, and non-athletes also, water is the secret of life. Required: Write a program if the user drinks less than 3 liters per day, it will print "drink more water", otherwise it will print "well". done".
    int water;

    scanf("%d" , &water);
    if (water<3)
    {
        printf("drink more water");
    }else{
        printf("done");
    }
    
    return 0;
}