#include <stdio.h>
int main(void){

    /*Problem statement

Ahmed was thinking about implementing a password checker (same as his laptop), but a much simpler program. Because he always forgets his passwords, so he saved 3 passwords on his laptop's password checker.

Ahmed's saved password:

    - 1111

    - 2222

    - 3333

You will be given multiple lines, each line containing an N number (Ahmed's password). Check if the password matches Ahmed's 3 saved passwords, and terminate the program if the password is "Correct".

Input

Each of the following lines will contain the passwords N (1 ≤ N ≤ 10^4 ).

Output

Print "Incorrect" if the password is wrong, otherwise print "Correct".*/

    int password , pass1 = 1111 , pass2 = 2222 , pass3 = 3333;
    do
    {
        printf("enter the password: ");
        scanf("%d" , &password);
    } while (password != pass1 && password != pass2 && password != pass3);
    printf("is correct");
    
    return 0;
}