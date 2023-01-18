#include <stdio.h>
int main(void){
 
 /*
 Problem statement

Ahmed was thinking about coding a new algorithm to get the unique values in an array A, which holds repetitive values N numbers. Moreover, Ahmed wants to solve it with a perfect approach in order to send it to Gammal Tech for the volunteering points.

Can you help Ahmed to get Gammal Tech volunteering points?

Input

First line contains a number N (1 ≤ N ≤ 10^3) the number of elements.

Second line contains N numbers (0 ≤ A[ i ]≤ 10^9).

Output

Print unique elements in the array.
 */

int x , i ,z;
printf("enter a number of elemnts: ");
scanf("%d" , &x);
int arr[x];
printf("enter a elemnts: ");

for ( i = 0; i < x; i++)
    scanf("%d" , &arr[i]);


for ( i = 0; i < x; i++){
    int matched = 0;
    for ( z = 0; z < x; z++)
        if (arr[i] == arr[z] && i!=z)
            matched = 1;
        
    if (matched == 0)
        printf("%d\n" , arr[i]);
}
    return 0;
}