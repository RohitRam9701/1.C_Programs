/*To store 4 nos.(taken from user) in a 2-D array having 2 rows & 2 columns and display the array elements in matrix form of 2*2 
  & and to generate and display the transpose of the matrix*/
#include<stdio.h>
void main()
{
    int i, j, n[2][2], tr[2][2];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\n Enter number:");
            scanf("%d", &n[i][j]);
        }
    }
    printf("\n Data in matrix form:");
    for (i = 0; i < 2; i++)
    {
        printf("\n");
        for (j = 0; j < 2; j++)
        {
            printf("%d ", n[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            tr[i][j] = n[j][i];
        }
    }
    printf("\n Data in transpose matrix:");
    for (i = 0; i < 2; i++)
    {
        printf("\n");
        for (j = 0; j < 2; j++)
        {
            printf("%d ", tr[i][j]);
        }
    }
}