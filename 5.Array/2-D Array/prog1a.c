/*To store 4 nos.(taken from user) in a 2-D array having 2 rows & 2 columns and display the array elements in matrix form of 2*2 
  & and to find the sum of the diagonals of the matrix*/
#include<stdio.h>
void main ()
{
    int n[2][2],i,j,s1,s2;
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\n Enter number:");scanf("%d",&n[i][j]);
        }
    }
    printf("\n Data in matrix form:");
    for(i=0;i<2;i++)
    {
        printf("\n");
        for(j=0;j<2;j++)
        {
            printf("%d ",n[i][j]);
        }
    }
    for (s1=0,i=0;i<2;i++)
    {
        s1=s1+n[i][i];
    }
    for (s2=0,i=0,j=0;i<2;i++,j--)
    {
        s2=s2+n[i][2-i-1];
    }
    printf("\n sum of 1st diagonal:%d sum of 2nd diagonal:%d",s1,s2);
}