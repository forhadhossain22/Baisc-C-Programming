#include<stdio.h>
void main(){
    int total = 0;
    int sum[5];
    printf("Enter the five element of Array: ");
    for(int i=0; i<5;i++)
    scanf("%d",&sum[i]);
    for(int i=0; i<5;i++)
    total = total +sum[i];
    printf("Sum of array element is: %d",total);
}
