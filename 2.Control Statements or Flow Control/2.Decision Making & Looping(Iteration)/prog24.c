/*To generate the pattern of a diamond having 'n' no. of rows;value of n being taken as input*/
#include<stdio.h>
void main()
{
 int i,j,n,x,bl;
 printf("\n Enter total rows in patterns:");scanf("%d",&n);
 for(i=0,x=1,bl=n/2;i<=n/2;i++,x+=2,bl--)
 {
  printf("\n");
  for(j=0;j<bl;j++)
  {
   printf(" ");   
  }
  for(j=0;j<x;j++)
  {
   printf("*");   
  }
 }
 for(i=0,x=x-4,bl=bl+2;i<n/2;i++,x-=2,bl++)
 {
  printf("\n");
  for(j=0;j<bl;j++)
  {
   printf(" ");   
  }
  for(j=0;j<x;j++)
  {
   printf("*");   
  }
 }
} 
//Output for n=9
//    *
//   ***
//  *****
// *******
//*********
// *******
//  *****
//   ***
//    *