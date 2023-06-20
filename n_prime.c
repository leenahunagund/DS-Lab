//program to generate prime numbers between 2 prime numbers//
#include<stdio.h>
#include<math.h>
void main() 
{
    int n1,n2,i,n,f;
    printf("enter the 2 prime numbers:\n");
    scanf("%d%d",&n1,&n2);
    printf("prime numbers in the range of %d-%d are :\n",n1,n2);
    for(n=n1;n<=n2;n++)
      {
        f=0;
       for(i=2;i<=(n/2);i++)
        {
          if((n%i)==0)
            {
                f=1;
                break;
            }
          if (f==0)
            {
            printf("%d\n",n); 
            break;        
            }
        }
     }

}