/*To generate the given series upto n terms :1,2!,3!,4!,...,n terms;value of n being taken as input*/
#include<stdio.h>
#include<math.h>
void main()
{int i1,j1,n,f1,s;
 printf("\n Enter total terms in series:");scanf("%d",&n);
 for(i1=n,f1=1;i1>0;i1--)
 {
  for(j1=0;j1<n;j1++) 
  {
  f1=f1*i1;
  }
 }
  printf(" %d ",f1);
} 