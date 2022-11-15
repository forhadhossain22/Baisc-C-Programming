#include<stdio.h>
int main(){
    int q = 10;
    int *p;
    p = &q;

    printf("%d\n",*p);
    printf("%d\n",p);

    return(0);
}