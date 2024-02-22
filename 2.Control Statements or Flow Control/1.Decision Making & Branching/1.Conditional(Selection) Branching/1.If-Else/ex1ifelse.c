/*Input a pair of simultaneous equations and determine if they can be solved to give unique values.If they can be solved then find the solution. 
  Otherwise state that equations cannot be solved.
  [Hint: Take the equations as : a1x + b1y + c1 = 0 and a2 + b2 + c2 = 0
   Input the coefficients a1, b1, c1, a2, b2, c2. In case a1.b2-a2.b1 = 0, the equations cannot be solved. Check this condition and state whether 
   the equations can be solved or not. If solvable, then find the values of the variables x and y. The variables x and y are given by:
               x =(b1.c2-b2.c1)/(a1.b2-a2.b1),      y =(c1.a2-c2.a1)/(a1.b2-a2.b1)   ]  
*/

#include <stdio.h>
#include <math.h>
void main() 
{
    float a1, b1, c1, a2, b2, c2;
    float x, y, determinant;

    // Input coefficients
    printf("Enter the coefficients of the equations:\n");
    printf("Equation 1 (a1x + b1y + c1 = 0): ");
    scanf("%f %f %f", &a1, &b1, &c1);
    printf("Equation 2 (a2x + b2y + c2 = 0): ");
    scanf("%f %f %f", &a2, &b2, &c2);

    // Check if the equations can be solved
    determinant = a1 * b2 - a2 * b1;
    if (determinant == 0) 
    {
        printf("The equations cannot be solved.\n");
    } 
    else 
    {
        // Solve the equations
        x = (b1 * c2 - b2 * c1) / determinant;
        y = (c1 * a2 - c2 * a1) / determinant;
        printf("The solution is: x = %.2f, y = %.2f\n", x, y);
    }      

/*  float a1, b1, c1;  // Coefficients of equation 1: a1*x + b1*y = c1
    float a2, b2, c2;  // Coefficients of equation 2: a2*x + b2*y = c2

//or float a1, b1, c1, a2, b2, c2;
//   float determinant, x, y;    

    printf("Enter the coefficients of equation 1 (a1x + b1y = c1): ");
    scanf("%f %f %f", &a1, &b1, &c1);

    printf("Enter the coefficients of equation 2 (a2x + b2y = c2): ");
    scanf("%f %f %f", &a2, &b2, &c2);

    // Calculate the determinant of the coefficient matrix
    float determinant = a1 * b2 - a2 * b1;

    // Check if the determinant is zero
    if (determinant == 0) {
        printf("\nThe equations cannot be solved.\n");
    } else {
        // Solution variables
        float x, y;

        // Calculate the values of x and y // Applying Cramer's rule to find the solution
        x = (b2 * c1 - b1 * c2) / determinant;
        y = (a1 * c2 - a2 * c1) / determinant;

        printf("\nThe solution for the simultaneous equations is:\n");
        printf("x = %f\n", x);
        printf("y = %f\n", y);
    }*/

/*Write a program in C to test if three points are collinear or not. Input the three points as (x1, y1), (x2, y2), (x3, y3). 
[Hint: For three points to be collinear, the area enclosed by the points will be zero.]*/

    int x1, y1, x2, y2, x3, y3;

    // Input the three points
    printf("Enter the coordinates of three points:\n");
    printf("Point 1 (x1, y1): ");    scanf("%d %d", &x1, &y1);
    printf("Point 2 (x2, y2): ");    scanf("%d %d", &x2, &y2);
    printf("Point 3 (x3, y3): ");    scanf("%d %d", &x3, &y3);

    // Check if the three points are collinear
    if ((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) == 0) {
        printf("The three points are collinear.\n");
    } else {
        printf("The three points are not collinear.\n");
    }
/*This program takes the coordinates of three points (x1, y1), (x2, y2), and (x3, y3) as input from the user and then checks if they are collinear. 
It uses the concept of the slope of a line formed by three points. If the sum of the cross products of the line segments formed by the three points 
is zero, then the points are collinear.
The slope between two points (xᵢ, yᵢ) and (xⱼ, yⱼ) is given by:     slope = (yⱼ - yᵢ) / (xⱼ - xᵢ)
So, calculate the slopes between (x₁, y₁) and (x₂, y₂), between (x₁, y₁) and (x₃, y₃), and between (x₂, y₂) and (x₃, y₃). If all three slopes are 
equal, the points are collinear.

Determinant method:
| x₁ y₁ 1 |
| x₂ y₂ 1 |  = 0          means points are collinear
| x₃ y₃ 1 |
*/

/* Input the coefficients a, b and c of a quadratic equation a.x^2 +b.x + c = 0. Check if the equation has real roots. In case it has real roots 
   then calculate the same[Hint: For real roots check if b²-4ac>=0. If so then find roots using the required relation 
                x1, x2= {- b ± (b² - 4ac) ^ 0.5} / (2.a)] 
   To find the square root of b ^ 2-4ac use the sqrt () function. To use it include the <math.h>  header file. The syntax for using the function is: 
    y = sqrt(d);  where d = b² - 4a c]*/

    double a, b, c;
    double discriminant, root1, root2;//x1=root1, x2=root2

    // Input coefficients
    printf("Enter the coefficients (a, b, c) of the quadratic equation:\n");    scanf("%lf %lf %lf", &a, &b, &c);
    // Check if equation has real roots
    discriminant = b * b - 4 * a * c;
    if (discriminant >= 0) {
        // Calculate roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        // Display the roots
        printf("Roots: %.2lf and %.2lf\n", root1, root2);
    } else {
        printf("The equation has no real roots.\n");
    } 
}