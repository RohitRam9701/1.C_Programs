/*To generate the pattern of the upside down inversion of the lateral inversion of a right angled triangle having 'n' no. of rows;value of n being 
  taken as input*/
#include<stdio.h>
void main()
{
 int i,j,n,bl;
 printf("\n Enter total rows in patterns:");scanf("%d",&n);
 for(i=0,bl=n;i<n;i++,bl--)
 {
  printf("\n");
  for(j=0;j<=i;j++)
  {
   printf(" ");   
  }
  for(j=0;j<bl;j++)
  {
   printf("*");   
  }
 }
} 
//Output for n=5
//*****
// ****
//  ***
//   **
//    *