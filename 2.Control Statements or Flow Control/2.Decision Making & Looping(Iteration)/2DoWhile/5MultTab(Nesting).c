/* Program to print the multiplication table from 1 * 1 to 12 * 10 using do while loop. */
#include <stdio.h>
#define Col_Max 10
#define Row_Max 12
int main()
{
    int row, column, y;
    row = 1;
    printf("                      MULTIPLICATION TABLE                   \n");
    printf("----------------------------------------------------------------------------\n");
    do
    {
        column = 1;
        do
        {
            printf("%d * %d = %4d\n", row, column, row * column);  
            column++;
        } while (column <= Col_Max);
        printf("\n");
        row++;
    } while (row <= Row_Max);
    printf("-----------------------------------------------------------------------------");
    return 0;    
}
/*
int main() 
{
    int i = 1, j;
    printf("                      MULTIPLICATION TABLE                   \n");
    printf("----------------------------------------------------------------------------\n");
    do {
        j = 1;
        do {
            printf("%d\t", i*j);
            j++;
        } while(j <= 10);
        printf("\n");
        i++;
    } while(i <= 12);
    printf("-----------------------------------------------------------------------------");    
    return 0;
}
*/

/* Notice that the printf of the inner loop does not contain any new line character(\n). This allows the printing of all row values 
   in one line. The empty printf in the outer loop initiates a new line to  print the next row.*/