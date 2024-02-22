/*To store 4 nos.(taken from user) in a 2-D array having 2 rows & 2 columns and display the array elements in matrix form of 2*2 */
#include<stdio.h>
void main ()
{
    int n[2][2],i,j;
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
}