#include<stdio.h>
#include<math.h>    // for power function `pow`
void main()
{
/*To find the value of x^y without any function,x & y being taken as input numbers */
    int x, y, k, p;
    printf("\n Enter x & y: ");scanf("%d %d", &x, &y);
    for(k = 0, p = 1; k < y; k++)
      p = p*x;
    printf("\n %d to the power %d = %d", x, y, p);

/*To generate the given series upto n terms :1,2^2,3^3,4^4,...,n terms;value of n being taken as input*/
    int i, n, s;
    printf("\n Enter total terms in series:");scanf("%d", &n);
    for(i = 1; i < n+1; i++)
    {
        s = pow(i,i);
        printf(" %d ", s);
    }
}