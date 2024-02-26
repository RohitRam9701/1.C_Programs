/*To generate the given series upto n terms :1!,3!,5!,...,n terms;value of n being taken as input*/
#include<stdio.h>
#include<math.h>
void main()
{
 int i,j,n,f,m;
 printf("\n Enter total terms in series:");scanf("%d",&n);
 for(i=0,m=1;i<n;i++,m+=2)
 {
  for(f=1,j=m;j>0;j--) 
  {
  f=f*j;
  }
 }
  printf(" %d ",f);
}