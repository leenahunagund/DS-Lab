//to evaluate prefix and postfix expression
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define max 20
int top=-1;
int s[max];
void push(int ele)
{
    if(top==max-1)
    printf("the stack is full!\n");
    else{
        s[++top]=ele;
    }
}

int pop()
{
    if(top==-1)
    printf("the stack is empty");
    int item;
    item=s[top];
    top--;
    return item;
}

int eval_postfix(char *exp)
{
    int op1,op2,result,i;
    char c;
    for(i=0;exp[i]!='\0';i++)
    {
        c=exp[i];
        if(isdigit(c))
        push(c-'0');
        else
        {
            op2=pop();
            op1=pop();
            switch(c)
            {
                case '+':push(op1+op2);break;
                case '-':push(op1-op2);break;
                case '*':push(op1*op2);break;
                case '/':push(op1/op2);break;
                case '%':push(op1%op2);break;
                case '$':push(pow(op1,op2));break;
                case '^': push(pow(op1,op2));break;
                default:printf("invalid operator!");break;
            }
        }
    }
    result=pop();
    return result;
}
int evalprefix(char *exp)
{
    int i,op1,op2,result;
    char c;
    for(i=strlen(exp)-1;i>=0;i--)
    {
        c=exp[i];
        if(isdigit(c))
        push(c-'0');
        else
        {
            op1=pop();
            op2=pop();
            switch(c)
            {
                case '+':push(op1+op2);break;
                case '-':push(op1-op2);break;
                case '*':push(op1*op2);break;
                case '/':push(op1/op2);break;
                case '%':push(op1%op2);break;
                case '$':push(pow(op1,op2));break;
                case '^': push(pow(op1,op2));break;
                default:printf("invalid operator!");break;
            }
        }
    }
    result=pop();
    return result;
}

void main()
{
   char exp[20];
   int result;
   printf("enter the postfix expression:");
   scanf("%s",exp);
  result= eval_postfix(exp);
   printf("the result is:%d",result);
   printf("enter the prefix expression:");
   scanf("%s",exp);
  result= evalprefix(exp);
   printf("the result is:%d",result);

}