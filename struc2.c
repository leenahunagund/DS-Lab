//program
#include<stdio.h>
int read(int a, int b );
int write(int c);
int add (int *p,int *q,z);
struct DISTANCE
{
  int x;
  int y ;
};
void main()
{
  int c,m ,result;
  struct DISTANCE *d;
  read(c,m);
  add(&c,&m,result);
  write(result);
}
int read (int a,int b )
{
   printf("enter the lengths in centimetre and metre:\n");
   scanf("%d%d",&(d->x),&(d->y));
}
int add(int *p,int *q, int z)
{
  z= *p+*q;
  return z;
}
int write(int result)
{
  printf("the distance is %d", add());
}


