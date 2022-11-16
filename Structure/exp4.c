#include<stdio.h>
#include<string.h>

/* Global structure */
struct person{
    int age; char name[25]; float cgpa;
};

/* This function for dispay output */
void printdisplay(struct person p){
    printf("Name: %s\n",p.name);
    printf("Age: %d\n",p.age);
    printf("CGPA: %.2f\n",p.cgpa);
}

/* Drive Code */
int main(){
    struct person p1;

    strcpy(p1.name,"Jhon Wick");
    p1.age = 20;
    p1.cgpa = 4.00;
    
    printdisplay(p1);

    return 0;
}