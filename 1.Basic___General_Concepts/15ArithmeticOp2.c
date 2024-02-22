/*To print a sequence of squares of numbers. Note the use of the shorthand operator *=
  The program attempts to print a sequence of squares of numbers starting from 2. The statement a *= a; which is identical to a = a * a; replaces 
  the current value of a by its square. When the value of a becomes equal or greater than N (=100)I the while is terminated. Note that the output 
  contains only three values 2, 4, and 16.*/
#include<stdio.h>
#include <math.h> //sqrt
#define N 100
#define A 2
int main()
{
    int a;
    a = A;
    while(a < N)
    {
        printf("%d\n", a);
        a *= a;
    }

/*Output of the program shows round-off errors that can occur in computation of floating point numbers*/
//-----------------------------------------------Sum of n terms of 1/n-----------------------------------------------//
   float sum, n, term;
   int count = 1;

   sum = 0;
   printf("Enter value of n\n"); scanf("%f",&n);
   term = 1.0/n;
   while( count <= n )
   {
    sum = sum + term;
    count++;
   }
   printf("Sum = %f\n", sum);
/*  Output
    Enter value of n
    99
    sum = 1.000001
    Enter value of n
    143
    sum = 0.999999 

    We know that the sum of n terms of 1/n is 1. However, due to errors in floating point representation, the result is not always 1.*/

//Write a C program to find the roots of a quadratic equation. 

    double a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) 
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Roots are real and different.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } 
    else if (discriminant == 0) 
    {
        root1 = root2 = -b / (2 * a);

        printf("Roots are real and same.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } 
    else 
    {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);

        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }

    return 0;
}
/*
Mathematical Functions:
    Mathematical functions such as cos, sqrt, log, etc. are frequently used in analysis of real-life problems. Most of the C compilers support 
    these basic math functions. However, there are systems that have a more comprehensive math library and one should consult the reference manual 
    to find out which functions are available. Table below lists some standard math functions.

---------------------------------------- Math functions----------------------------------------
        Function                                                     Meaning

        Trigonometric  
        acos(x)                                                      Arc cosine of x
        asin(x)                                                      Arc sine of x
        atan(x)                                                      Arc tangent of x 
        atan 2(x, y)                                                 Arc tangent of x/y
        cos(x)                                                       Cosine of x
        sin(x)                                                       Sine of x
        tan(x)                                                       Tangent of x
        
        Hyperbolic
        cosh(x)                                                      Hyperbolic cosine of x
        sinh(x)                                                      Hyperbolic sine of x
        tanh(x)                                                      Hyperbolic tangent of x
        
        Other functions 
        ceil(x)                                                      x rounded up to the nearest integer
        exp(x)                                                       e to the x power (e^x)
        fabs(x)                                                      Absolute value of x
        floor(x)                                                     x rounded down to the nearest integer
        fmod(x,y)                                                    Remainder of x/y
        log(x)                                                       Natural log of x, x > 0
        log10(x)                                                     Base 10 log of x ,x > 0
        pow(x,y)                                                     x to the power y(x ^ y)
        sqrt(x)                                                      Square root of x, x >= 0
        
        
    Note: 1. x and y should be declared as double.
          2. In trigonometric and hyperbolic functions, x and y are in radians.
          3. All the functions return a double.
          4. C99 has added float and long double versions of these functions. 
          5. C99 has added many more mathematical functions
          6. See the Appendix "C99 Features".
    
    To use any of these functions in a program, we should include the line:    #include <math.h>  in the beginning of the program.
*/