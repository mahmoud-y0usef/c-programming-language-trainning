#include <stdio.h>
int main(void){

    /*Problem statement 

    Foad finished his Thanway Amma exams, and he is looking for a highly ranked   university to study Computer Science degree. Then, He started to do a college list   with the admission criteria for each college.

    After long research, he found his dream university in the UK, but he got frustrated by   his marks. In fact, his marks may decrease the chance of getting into his dream   university. The admission criteria of the university in terms of school subjects

    He must obtain more than or equal 65 in Math ( m ), more than or equal 55 in physics  ( p ),   and more than or equal 50 in Chemistry ( c ). All must be with a total of more  than or equal to 190, or to obtain more than or equal 140 in Math and Physics. Can  you  solve foad's problem, and tell him if he can be admitted or not into his dream  university.



    Input

    The first line of the input contains one integer m (m ≥ 0 ), the second line is one integer p (p ≥ 0), and the third is c (c  ≥ 0).

    Output

    Print if Foad will pass the admission phase at the university or not.*/

    int m , p , c , sum_mp , total;
    printf("enter your degree in math: ");
    scanf("%d" , &m);
    printf("enter your degree in Physics: ");
    scanf("%d" , &p);
    printf("enter your degree in Chemistry: ");
    scanf("%d" , &c);

    sum_mp = m + p;
    total = m + p + c;
    printf("your total degree is: %d\n" , total);
    printf("your total degree in math and Physics is: %d\n" , sum_mp);

    if (m>=65 && p>=55 && c>=50 || total >= 190 || sum_mp >=140)
    {
        printf("you are Accepted congratulation");
    }else{
        printf("sorry not Accepted good luck");
    }
    
    return 0;
}