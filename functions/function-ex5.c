#include <stdio.h>
int num(){
    //A program calculator that performs operations (combination, subtraction, multiplication and division) using the functions
    int first, second, add, subtract, multiply;
    float divide;
    
    printf("Enter two integers\n");
    scanf("%d%d", &first, &second);
    add        = first + second;
    subtract = first - second;
    multiply = first * second;
    divide     = first / (float)second;   //typecasting
    printf("Sum = %d\n",add);
    printf("Difference = %d\n",subtract);
    printf("Multiplication = %d\n",multiply);
    printf("Division = %.2f\n",divide);
    return 0;
}
int main(){
    while (1)
    {
        num();
    }
    
    
}