#include <stdio.h>

int main() {
 char choice;
 double a,b;
 printf("enter your choice of operand");
 scanf("%c",&choice);
 printf("enter two numbers");
 scanf("%lf %lf",&a,&b);
switch (choice){
    case '+':
    printf(" %.1lf + %.1lf =  %.1lf" ,a,b,a+b);
    break;
    case '-':
    printf(" %.1lf - %.1lf = %.1lf " ,a,b,a-b);
    break;
    case '*':
    printf(" %.1lf * %.1lf = %.1lf " ,a,b,a*b);
    break;
    case '/':
    printf(" %.1lf / %.1lf = %.1lf " ,a,b,a/b);
    break;
    default:
    printf("operator is incorrect");

}


  return 0;
}