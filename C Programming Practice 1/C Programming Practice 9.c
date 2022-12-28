#include <stdio.h>
int main(void){

    //Supermarket Program: When Rowan shopped, she had a list of products she wanted to buy, and she would buy different quantities of these products, she wanted to calculate the total amount required to buy the products.Required: Write a program that records the prices of 5 products, then the user asks how much of each product he wants and prints the total amount at the end.
    int product1 ,product2 , product3 , product4 , product5;
    int price1 = 20 , price2 = 100 , price3 = 50 , price4 = 200 , price5 = 70;
    int result;
    printf("how much do you want this product1: ");
    scanf("%d" , &product1);
    printf("how much do you want this product2: ");
    scanf("%d" , &product2);
    printf("how much do you want this product3: ");
    scanf("%d" , &product3);
    printf("how much do you want this product4: ");
    scanf("%d" , &product4);
    printf("how much do you want this product5: ");
    scanf("%d" , &product5);

    result = (product1*price1) + (product2*price2) + (product3*price3) + (product4*price4) +(product5*price5);
    printf("the total price is: %d" , result);
    return 0;
}