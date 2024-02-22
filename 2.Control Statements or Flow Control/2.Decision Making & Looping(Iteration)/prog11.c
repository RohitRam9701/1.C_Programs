/*To check whether the input number is prime or not*/
#include<stdio.h>
void main()
{
 int n,c,i;
 printf("\n Enter number:");scanf("%d",&n);
 for(i=1,c=0;i<=n;i++)
 {
  if(n%i==0)
  c=c+1;   
 }
 if(c==2)
  printf("\n The no. is Prime");
 else
  printf("\n The no. is not Prime");
}