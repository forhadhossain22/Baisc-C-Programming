#include<stdio.h>
int main(){
    int x = 10; int y = 12;
    int *p,*q;

    p = &x; q = &y;
    printf("%d and %d\n",x,y);  //10 12

    *p = *q;
    printf("%d and %d\n",x,y);  //12 12

    return 0;
}