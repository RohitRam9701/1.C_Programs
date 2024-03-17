#include<stdio.h>
#include<math.h>    // for power function `pow`
int main()
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
        printf(" %d \n", s);
    }

/* To print the "Powers of 2" table for the power 0 to 20, both positive and negative.*/        
    long int power;
    int m;
    double q;
    printf("-------------------------------------------------\n");
    printf(" 2 to power m       m       2 to power -m\n");
    printf("-------------------------------------------------\n");
    power = 1;
    for (m = 0; m <= 20; ++m)
    {
        if (m == 0)
          power = 1;
        else
          power = power * 2;       // The program evaluates the value power = 2^m successively by multiplying two by itself m times.
        q = 1.0 / (double)power;   // q = 2^-m = 1 / power
        printf("%10ld %10d %20.12lf\n", power, m, q);
    }
    printf("-------------------------------------------------\n");

    return 0;
}