
 #include <stdio.h>
 int main()
{
    int num1,num2;
    float result=0;
    //to store operator to carryout specific operation
    char ch;
    printf("Choose operation to perform : and enter the Arithmetic Expression as follows:...");
    printf("\nNumber-1operatorNumber-2: ");
    scanf("%d %c %d",&num1, &ch, &num2);
    switch(ch)    
    {
        case '+': result=num1+num2; break;
        case '-': result=num1-num2; break;
        case '*': result=num1*num2; break;
        case '/': if(num2!=0)
                     result=(float)num1/(float)num2; 
                  else
                  {   
                     printf("!!!DIVIDE by ZERO...Error\n");
                     goto last;
                  }
        	   break;
        case '%': result=num1%num2; break;
        default : printf("Invalid operation.\n"); goto last;
    }
     printf("Result: %d %c %d = %f\n",num1,ch,num2,result);
    last:
    return 0;
}
