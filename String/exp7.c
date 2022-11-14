#include<stdio.h>
int main()
{
    char name [20];
    int i=0, length;
    printf("Enter the string:");
    gets(name);
    while(name[i] !='\0')
    i++;
    length=i;
    printf("\n Number Of character in the string is %d", length);

return 0;
}