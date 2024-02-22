/*To generate the pattern of a diamond having 'n' no. of rows;value of n being taken as input*/
#include<stdio.h>
void main()
{
 int i,j,n,x,bl;
 printf("\n Enter total rows in patterns:");scanf("%d",&n);
 for(i=0,x=1,bl=n-1;i<n;i++,x+=2,bl--)
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
 for(i=0,x=2*n-1,bl=0;i<n;i++,x-=2,bl++)
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
//Output for n=5
//    *
//   ***
//  *****
// *******
//*********
//*********
// *******
//  *****
//   ***
//    *