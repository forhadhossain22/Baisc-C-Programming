#include<stdio.h>
int main(){
    int x = 10;
    float y = 20;
    void *p, *q;

    p = &x;
    q = &y;

    printf("x = %d\n",*(int*)p);  //x = 10
    printf("y = %f\n",*(float*)q);  //y = 20.000000

    return(0);
}