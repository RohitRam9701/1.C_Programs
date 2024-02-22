/*To display the Octal and Hexadecimal equivalent of a Decimal number*/
#include <stdio.h>
int main() 
{
    int n;
    printf("\n Enter decimal number:");scanf("%d",&n);
    printf("\n Octal Number of a Given Decimal Number=%o",n);
    printf("\n Hexadecimal Number of a Given Decimal Number=%x",n);
    return 0;
}