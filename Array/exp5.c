#include<stdio.h>
int main(void){
    int num[3];
    int sum = 0;

    printf("Enter three number: ");
    for(int i=0; i<3; i++){
        scanf("%d",&num[i]);  
    }
   // sum = num[0]+num[1]+num[2];
    for(int i=0; i<3; i++){
        sum = sum+num[i];
    }
    printf("%d",sum);
    return 0;
}