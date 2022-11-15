#include<stdio.h>

void swapnum(int *n1, int *n2){
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main(){
    int x = 11; int y = 17;

        printf("\t\tBefore Swapping\n\n");
        printf("x = %d and y = %d\n\n",x,y);

        swapnum(&x,&y);
        printf("\t\tAfter Swapping\n\n");
        printf("x = %d and y = %d",x,y);
    return 0;    
}