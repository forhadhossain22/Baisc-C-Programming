#include<stdio.h>
struct person
{
    int age; float salary;
};

int main(){
    //direct inital
    struct person p1 = {23,5000.50};
    struct person p2,p3;

    //element wise assignment
    p2.age = 10;
    p2.salary = 6000.66;

    //structure variable assignment
    p3 = p2;

    printf("\n\tperson one\n");
    printf("Age: %d\n",p1.age);
    printf("Salary: %.2f\n",p1.salary);

    printf("\n\tperson two\n");
    printf("Age: %d\n",p2.age);
    printf("Salary: %.2f\n",p2.salary);

    printf("\n\tperson three\n");
    printf("Age: %d\n",p3.age);
    printf("Salary: %.2f\n",p3.salary);

    return 0;
}
