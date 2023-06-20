//student structure
#include<stdio.h>
#include<stdlib.h>
typedef struct stud
{
    char name[20];
    int reg_no;
    int m[3];
    float avg_marks;
}st;
int n;
st *s;
void read(int n)
{
    int i,j;
    s=(st*)malloc(n*(sizeof(st)));
    for(i=0;i<n;i++)
    {
        printf("enter the details of %d student\n",i+1);
        printf("name:");
        scanf("%s", s[i].name);
        printf("enter roll number:");
        scanf("%d",&s[i].reg_no);
        printf("enter the 3 subject marks:\n");
        for(j=0;j<3;j++)
        {
            scanf("%d",&s[i].m[j]);
        }
    }
}

void average()
{
    int i,min,tot;
    for(i=0;i<n;i++)
    {
        if(s[i].m[0]<s[i].m[1])
        {
            if(s[i].m[0]<s[i].m[2])
            min=s[i].m[0];
            else
            min=s[i].m[2]; 
        }
        else if(s[i].m[1]<s[i].m[0])
        {
             if(s[i].m[1]<s[i].m[2])
            min=s[i].m[1];
            else
            min=s[i].m[2];
        }
        else if(s[i].m[2]<s[i].m[0])
        {
            if(s[i].m[2]<s[i].m[1])
            min=s[i].m[2];
            else
            min=s[i].m[1];
        }
        tot=s[i].m[0]+s[i].m[1]+s[i].m[2];
        s[i].avg_marks=tot-min/2;
        printf("the average marks of %d student is :%f\n",i+1,s[i].avg_marks);
    }
    
}

void display()
{
    int i;
    printf("details of %d students are:\n ",n);
    printf("name\tRoll-No.\tmarks1\tmarks2\tmarks3\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t%d\t%d\t%d\t%d\n",s[i].name,s[i].reg_no,s[i].m[0],s[i].m[1],s[i].m[2]);
    }
}
void main()
{
   struct stud *st;
   int ch;
  
    for(;;)
    {
         printf("1.read\n2.display\n3.average\n4.exit\n");
   printf("enter your choice :");
    scanf("%d",&ch);
         switch(ch)
    {
        case 1: printf("enter the number of students :");
        scanf("%d",&n);
        read(n);
        break;
        case 2: display();break;
        case 3: average();break;
        case 4 : printf("thank you!");break;
        default:printf("enter valid choice \n");break;

    }
    }
   
}