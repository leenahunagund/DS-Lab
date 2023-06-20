//program to perform the simple calculator with operations
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
   int a,b;
   char c;
   printf("enter the numbers:\n");
   scanf("%d%d",&a,&b);
   printf("the operations are :\n+\n-\n*\n/ \n ");
   printf("choose your operation\n");
   scanf("%c", &c);
   switch(c)
    {
      case '+':printf("the sum is : %d", a+b); break;
      case '-':printf("the difference is :%d",a-b);break;
      case '*' :printf("the product is : %d", a*b); break;
      case '/': printf("the division is :%d",a/b);break;    
      case '%':printf("the mod is :%d", a%b);break;
      default:printf("the function is not available");
     }

}