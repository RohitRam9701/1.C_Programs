#include<stdio.h>
#include <math.h>
void main()
{
    /*To  define the constant factor having value 2.54(using const keyword)*/
   const long double pi=3.141592653589793238L;
   float factor=2.54;
   float radius,area;
   printf("factor:%f",factor);
   printf("\n Enter radius of circle:");
   scanf("%f",&radius);
   area=pi*radius*radius;
   printf("\n Area:%f",area);
/*write a program to input two numbers :a and b. Next, compute the value of a raised to the power of b.*/
    double a, b, result;
    printf("Enter a and b: ");
    scanf("%lf %lf", &a, &b);
    result = pow(a, b);
    printf("Result: %.2lf\n", result);
}
/*
const: The qualifier "const" is used to declare variables whose values should not be modified once assigned. It provides read-only access to the 
       variable and helps enforce immutability.
volatile: The qualifier "volatile" is used to declare variables whose values may change unexpectedly, often due to external factors beyond the 
          program's control (e.g., hardware or interrupts). It informs the compiler not to perform certain optimizations on the variable and 
          ensures that the variable is always read from the memory location.
*/