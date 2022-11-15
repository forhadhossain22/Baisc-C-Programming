#include<stdio.h>
int main(){
    int q;
    int *p;
    p = &q;

    printf("%d",&q);
    printf("\n\n");
    printf("%d",p);

    return 0;
}