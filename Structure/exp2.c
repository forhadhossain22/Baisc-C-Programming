#include<stdio.h>

//input structure elements

struct person
{
    int age; float salary;
};

int main(){
    struct person p1,p2;

    //person one
    printf("\n\tInformation for Person One\n\n");
    
    printf("Enter age: ");
    scanf("%d",&p1.age);
    printf("Enter Salary: ");
    scanf("%f",&p1.salary);

    printf("\n\tPerson One\n");
    printf("Age: %d\n",p1.age);
    printf("Salary: %.2f\n",p1.salary);
    printf("\n");

    //peroson two
    printf("\n\tInformation for Person Two\n\n");
    
    printf("Enter age: ");
    scanf("%d",&p2.age);
    printf("Enter Salary: ");
    scanf("%f",&p2.salary);

    printf("\n\tPerson Two\n");
    printf("Age: %d\n",p2.age);
    printf("Salary: %.2f\n",p2.salary);
    

    return 0;
}
