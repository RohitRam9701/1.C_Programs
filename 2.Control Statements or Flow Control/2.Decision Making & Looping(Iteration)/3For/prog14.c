/*To generate and display the factorial of the input number */
#include<stdio.h>
void main()
{
 int f,n,i;
 printf("\n Enter number:");scanf("%d",&n);
 for(i=n,f=1;i>0;i--)
 {
  f=f*i;
 } 
 printf("\n Factorial of the number:%d",f);
}