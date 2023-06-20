//program to simulate a simple calculator using switch statement
#include<stdio.h>
void main()
{
    int x,y , a=0 ;
    printf("enter the 2 numbers :\n");
    scanf("%d%d",&x,&y);
    printf("the operations available are:\n1.addition\n2.subtraction\n3.multiplication\n4.division\n");
    printf("choose your choice\n");
    scanf("%d",&a);
    switch(a)
     {
        case 1 : printf("the sum is : %d ",(x+y));
                 break;
        case 2 : printf("the difference  is : %d ", (x-y));
                 break;
        case 3 : printf("the product of %d and %d  is : %d " ,x,y, (x*y));
                 break;
        case 4 : printf("the quotient of %d and %d is :%d ",x,y, (x/y));
                 break;
        default: printf("the operation is not available ");
     }
}