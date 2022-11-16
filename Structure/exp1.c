#include<stdio.h>

//gobal structure
struct student
{
    int id;
    float cgpa;
};

int main(){
    struct  student s1,s2;

    printf("\t\tEnter Information for Student-1\n\n");
    printf("Enter ID: ");
    scanf("%d",&s1.id);
    printf("\nEnter CGPA: ");
    scanf("%f",&s1.cgpa);
    printf("\n\tStudent One\n");
    printf("ID: %d\n",s1.id);
    printf("CGPA: %.2f\n\n",s1.cgpa);

    printf("\t\tEnter Information for Student-2\n\n");
    printf("Enter ID: ");
    scanf("%d",&s2.id);
    printf("\nEnter CGPA: ");
    scanf("%f",&s2.cgpa);
    printf("\n\tStudent One\n");
    printf("ID: %d\n",s2.id);
    printf("CGPA: %.2f\n",s2.cgpa);

    return 0;
}