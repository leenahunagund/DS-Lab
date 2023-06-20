//program to print the student details and find average //
#include<stdio.h>
struct stud
{
    char name[10];
    int roll_no;
    float marks[3];
};
void main()
{
    struct stud s[2];
    int i, avg[2];
    printf("enter the names of the students:\n");
    for(i=0;i<2;i++)
    {
        scanf("%s",(s[i].name));
    }
    printf("enter the roll numbers of the students:\n");
    for(i=0;i<2;i++)
    {
        scanf("%d",&(s[i].roll_no));
    }
    printf("enter the first subject marks of the students:\n");
    for(i=0;i<2;i++)
    {
        scanf("%f",&(s[i].marks[0]));
    }
    printf("enter the second subject marks of the students:\n");
    for(i=0;i<2;i++)
    {
        scanf("%f",&(s[i].marks[1]));
    }
    printf("enter the third subject marks of the students:\n");
    for(i=0;i<2;i++)
    {
        scanf("%f",&(s[i].marks[2]));
    }
    printf("the student details are :\nname\t\troll number\t\tmarks1\t\tmarks2\t\tmarks3\t\t\n");
    for(i=0;i<2;i++)
    {
        printf("%s\t\t%d\t\t%f\t\t%f\t\t%f\n",(s[i].name),(s[i].roll_no),(s[i].marks[0]),(s[i].marks[1]),(s[i].marks[2]));
    }
    for(i=0;i<2;i++)
    {
        avg[i]=(s[i].marks[0])+(s[i].marks[1])+(s[i].marks[2])/3;
    }
    printf("the average is:\n");
    printf("name\t\taverage\n");
    for(i=0;i<2;i++)
    {
      printf("%s\t\t%d\n",(s[i].name),avg[i]);
    }

}
