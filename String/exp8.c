#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10],str2[20];
    int i,length1,length2;
    printf("\n Enter the first string: ");
    gets(str1);
    length1=strlen(str1);
    printf("\n Enter the secondstring: ");
    gets(str2);
    length2=strlen(str2);
    for(i=0;i<length2;i++)
    str1[length1+i]=str2[i];
    str1[length1+length2]='\0';
    printf("\n Concatenated string is %s",str1);

return 0;
} 