/*To find the value of x^y without any function,x & y being taken as input numbers */
#include<stdio.h>
void main()
{
 int x,y,i,p;
 printf("\n Enter x & y:");scanf("%d%d",&x,&y);
 for(i=0,p=1;i<y;i++)
 {
  p=p*x;
 } 
 printf("\n %d to the power %d=%d",x,y,p);
}