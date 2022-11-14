#include<stdio.h>
void main(){
    int i, k;
    int ax[10][10] ={{10,20,30}, {11,21,31}};
    for(i=0; i<2; i++)
    {
    for (k=0; k<3; k++)
    {
    printf("%d ",ax[i][k]);
    }
    printf("\n");
    }
}