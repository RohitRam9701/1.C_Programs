/*To generate the pattern of the upside down inversion of the right angled triangle having 'n' no. of rows;value of n being taken as input*/
#include<stdio.h>
void main()
{
 int i,j,n,bl;
 printf("\n Enter total rows in pattern:");scanf("%d",&n);
 for(j=0,bl=n;j<n;j++,bl--)
 {
  printf("\n");
  for(i=0;i<bl;i++)
  {
   printf("*");   
  }
  for(i=0;i<=j;i++)
  {
   printf(" ");   
  }
 }
} 
//Output for n=4
//**** 
//***
//**
//*