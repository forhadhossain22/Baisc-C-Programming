#include<stdio.h>
void main(){
int m;
while(1){
printf("\nIf you press 0(zero), then program is End!\n\n");
printf("Input an integer: ");
 scanf("%d",&m);
if(m==0){
break;
}
printf("You entered %d\n", m);
}
}