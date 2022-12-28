#include <stdio.h>
int main(void){

//Cashier Employee Program: In any store or supermarket there is a cashier who receives payments from customers, before the appointment to this job the person passes a test to measure whether he qualifies or not, in this test the so-called pal is calculated (deficit) is the difference between the amount received from customers and the actual amount of products. If the deficit is significant, the person is not eligible to work.Required:Write a program that calculates the deficit if it is, where it records the prices of 5 products and asks the cashier about the quantity of products purchased by customers of these products and the total amount paid.
int product1 ,product2 , product3 , product4 , product5;
    int count1 = 20 , count2 = 100 , count3 = 50 , count4 = 200 , count5 = 70;
    int pay, result , total_deficit;
    printf("how much do payment product1: ");
    scanf("%d" , &product1);
    printf("how much do payment product2: ");
    scanf("%d" , &product2);
    printf("how much do payment product3: ");
    scanf("%d" , &product3);
    printf("how much do payment product4: ");
    scanf("%d" , &product4);
    printf("how much do payment product5: ");
    scanf("%d" , &product5);
    printf("what is total payment: ");
    scanf("%d" , &pay);
    result = (product1*count1) + (product2*count2) + (product3*count3) + (product4*count4) +(product5*count5);

    total_deficit = (result - pay);
    printf("the deficit  price is: %d" , total_deficit);

    return 0;
}