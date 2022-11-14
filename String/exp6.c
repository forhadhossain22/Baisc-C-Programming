#include<stdio.h>
#include<string.h>
int main()
{
    char str[80];
    int i=0;
    printf("\n Enter string : ");
    gets(str);
    printf("\n String entered is %s \n ", str);
    printf("\n Reverse of the given string is :");
    for(i=0;str[i]!='\0'; i++)
    
    for(; i>=0;i--)
    printf("%c",str[i]);
return 0;
}