/*To generate the given series upto n terms :1,3,6,10,15,...,n terms;value of n being taken as input*/
#include<stdio.h>
void main()
{
 int i,n,t,cd;
 printf("\n Enter total terms in series:");scanf("%d",&n);
 for(i=0,t=0,cd=1;i<n;i++)
 {
  t=t+cd;
  printf(" %d ",t);
  cd=cd+1;
 }
} 