//program to access variable through pointer//
#include<stdio.h>
struct emp
{
    char name[10];
    int id;
    float salary;
}e[2];
void main()
{
    int i;
    struct emp (*p)[2];
    p=&e;
    printf("enter the names of the employees:\n");
    for(i=0;i<2;i++)
    {
        scanf("%s",(p[i]->name));
    }
    printf("enter the ids of the employees:\n");
    for(i=0;i<2;i++)
    {
        scanf("%d",&(p[i]->id));
    }
    printf("enter the salary of the employees:\n");
    for(i=0;i<2;i++)
    {
        scanf("%f",&(p[i]->salary));
    }
    printf("the details of the employees are as follows:\n");
    printf("name\t\tid number\t\tsalary\n");
    for(i=0;i<2;i++)
    {
        printf("%s\t\t%d\t\t%f\n",(p[i]->name),(p[i]->id),(p[i]->salary));
    }

}