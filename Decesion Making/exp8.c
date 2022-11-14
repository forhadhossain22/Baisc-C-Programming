#include<stdio.h>
int main(){
    //char grade = args[0].charAt(0);
    char grade = 'C';
    switch(grade)
    {
    case 'A' :
    printf("Excellent!");
    break;
    case 'B' :
    case 'C' :
    printf("Well done");
    break;
    case 'D' :
    printf("You passed");
    case 'F' :
    printf("Better try again");
    break;
    default :
    printf("Invalid grade");
    }
    printf("Your grade is " + grade);

    return 0;
 }