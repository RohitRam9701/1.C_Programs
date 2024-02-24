/*To generate the given series upto n terms :1,2!,3!,4!,...,n terms;value of n being taken as input*/
#include<stdio.h>
#include<math.h>
void main()
{
 int i,j,n,f,s;
 printf("\n Enter total terms in series:");scanf("%d",&n);
 for(i=n,f=1;i>0;i--)
 {
  for(j=0;j<n;j++) 
  {
  f=f*i;
  }
 }
  printf(" %d ",f);
} 