// use both of Break and Continue
 #include<stdio.h>
 void main() {
    int i,n;
    for(n = 0; n < 100; n++) {
    if(n == 74) break; // Out of for loop
    if(n % 9 != 0) continue; // Next iteration
    printf("%d\n",n);
 }
 }