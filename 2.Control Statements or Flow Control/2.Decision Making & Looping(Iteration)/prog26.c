/*To generate the given series upto n terms :1,2^2,3^3,4^4,...,n terms;value of n being taken as input*/
#include<stdio.h>
#include<math.h>
void main()
{
 int i,n,s;
 printf("\n Enter total terms in series:");scanf("%d",&n);
 for(i=1;i<n+1;i++)
 {
  s=pow(i,i);
  printf(" %d ",s);
 }
} 