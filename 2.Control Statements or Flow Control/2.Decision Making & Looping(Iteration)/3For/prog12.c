/*To generate the series of n terms :2,22,222,2222,22222,...,n,value of n being taken as input*/
#include<stdio.h>
void main()
{
 int n,i,t;
 printf("\n How many terms in series?/Enter total terms:");scanf("%d",&n);
 for(i=0,t=0;i<n;i++)
 {
  t=t*10+2;
  printf("  %d  ",t);
 }
}