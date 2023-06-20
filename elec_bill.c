//program to generate the electricty bill//
#include<stdio.h>
void main()
{
    float units , bill ;
    printf(" enter the number of units consumed:\n");
    scanf("%f",&units);
    if ( units<200)
     {
        bill= 100 + (0.80*units);
     }
    else if ( (units>200)&&(units < 300) )
     {
        bill=100+(200*0.80)+((units-200)*0.90);
     }
     else 
      {
        bill = 100 + ( 200*0.80)+(100*0.90)+(units-300)*1;
      } 
    
    if (bill>400)
     {
       bill = bill + (0.15 * bill);
     }
    printf("the total bill is : %f ", bill);
}