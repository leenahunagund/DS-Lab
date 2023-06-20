#include<stdlib.h>
#include<stdio.h>
#include<math.h>
void main()
{
   int x,b;
   float z;
   char c;
   printf("enter the numbers:\n");
   scanf("%d %d %d",&x,&b);
   printf("the operations are :\n+\n-\n*\n/ \n ");
   printf("choose your operation\n");
   scanf("%s", &c);
   switch(c)
    {
      case '+': z=(x+b);
                break;
      case '-':z=x-b;
              break;
      case '*':z=x*b;
                break;
      case '/':z=x/b;
               break;    
      case '%':z=x%b;
               break;
      default:printf("the function is not available");
     }
    printf("the result is : %f ",z);

}
