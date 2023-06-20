//program to print the student details and find average //
#include<stdio.h>
typedef struct stud
{
    char name[10];
    int roll_no;
    float marks[3];
    int avg;
}s;
void read(s *std )
{
    int i;
   printf("enter the names of the students:\n");
    for(i=0;i<2;i++)
    {
        scanf("%s", &(std[i].name));
    }
    printf("enter the roll numbers of the students:\n");
    for(i=0;i<2;i++)
    {
        scanf("%d",&(std[i].roll_no));
    }
    printf("enter the first subject marks of the students:\n");
    for(i=0;i<2;i++)
    {
        scanf("%f",&(std[i].marks[0]));
    }
    printf("enter the second subject marks of the students:\n");
    for(i=0;i<2;i++)
    {
        scanf("%f",&(std[i].marks[1]));
    }
    printf("enter the third subject marks of the students:\n");
    for(i=0;i<2;i++)
    {
        scanf("%f",&(std[i].marks[2]));
    }
}
void display ( s *std )
{
    int i; 
    printf("the student details are :\nname\t\troll number\t\tmarks1\t\tmarks2\t\tmarks3\t\t\n");
    for(i=0;i<2;i++)
    {
        printf("%s\t\t%d\t\t%f\t\t%f\t\t%f\n",(std[i].name),(std[i].roll_no),(std[i].marks[0]),(std[i].marks[1]),(std[i].marks[2]));
    }
}
s average (s *std)
{
    int i,min;
    for(i=0;i<2;i++)
    {
        if ( (std[i].marks[0])<(std[i].marks[1]))
        {
            if(std[i].marks[0]<std[i].marks[2])
            {
                min=std[i].marks[0];
            }
            else
            min=std[i].marks[2];

        }
        if ( (std[i].marks[1])<(std[i].marks[0]))
        {
            if(std[i].marks[1]<std[i].marks[2])
            {
                min=std[i].marks[1];
            }
        }
        else
         min=std[i].marks[2];
        if ( (std[i].marks[2])<(std[i].marks[0]))
        {
            if(std[i].marks[2]<std[i].marks[1])
            {
                min=std[i].marks[2];
            }
        }
        else
         min=std[i].marks[1];
        int total = std[i].marks[0]+std[i].marks[1]+std[i].marks[2];
        std[i].avg= (total-min)/2;
    }
    
}
void main()
{
   int ch;
   s *stdz=NULL;
   while(1)
   {
    printf("enter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 : stdz=(s*)realloc(stdz,2*(sizeof(s)));
        read(stdz);
        break;
        case 2: display(stdz);
        break;
        case 3 : printf("average is : %d " , average(stdz));
        break;

    }
   }

}
