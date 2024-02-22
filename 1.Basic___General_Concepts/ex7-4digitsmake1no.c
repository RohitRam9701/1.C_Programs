/*To convert the input four digits into a single decimal integer*/
#include <stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter 4 digits:");scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("A new single decimal integer:%d",1000*a+100*b+10*c+d);
}