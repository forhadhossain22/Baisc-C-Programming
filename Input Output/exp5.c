#include <stdio.h>
int main()
{
 char x;
 printf("I’m waiting for a character: ");
 x = getchar();
 printf("I waited for the '%c' character.\n",x);
 return(0);
} 