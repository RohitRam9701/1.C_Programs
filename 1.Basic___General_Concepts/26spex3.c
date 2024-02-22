// Write a C program to compute the value of the expression x-p-q/3+r*2-1.

#include <stdio.h>
int main() 
{
    int x, p, q, r;
    printf("Enter the values of x, p, q, and r: ");
    scanf("%d %d %d %d", &x, &p, &q, &r);
    int result = x - p - q / 3 + r * 2 - 1;
    printf("Result: %d\n", result);

//Write a C program to input a date value and determine whether the entered day, month, and year values are valid.

    int day, month, year;
    printf("Enter day, month, and year: ");
    scanf("%d %d %d", &day, &month, &year);

    int isValid = 1;

    if (year < 0 || month < 1 || month > 12) {
        isValid = 0;
    } else {
        int maxDays;
        if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                maxDays = 29;
            } else {
                maxDays = 28;
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            maxDays = 30;
        } else {
            maxDays = 31;
        }

        if (day < 1 || day > maxDays) {
            isValid = 0;
        }
    }

    if (isValid) {
        printf("Valid date\n");
    } else {
        printf("Invalid date\n");
    }

// Write a C program to input the sides of a triangle and determine whether the triangle is isoceles or not.

    int side1, side2, side3;
    printf("Enter the lengths of three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("The triangle is isosceles.\n");
    } else {
        printf("The triangle is not isosceles.\n");
    }

/*  Write a C program that reads two numbers and performs their division. If the division is not possible. then an error 
    messgage, 'Division not possible' is displayed. */

    int numerator, denominator;
    printf("Enter the numerator: ");
    scanf("%d", &numerator);
    printf("Enter the denominator: ");
    scanf("%d", &denominator);

    if (denominator != 0) {
        float result = (float)numerator / denominator;
        printf("Result: %.2f\n", result);
    } else {
        printf("Division not possible.\n");
    }

/* Input the value of 4 variables a, b, c and d and compute the resultant value of following expressions.
    (a + b) * (c/d)
    (a + b) * c/d
    a + (b*c)/d     */

    int a, b, c, d;
    printf("Enter the values of a, b, c, and d: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    printf("(a + b) * (c / d) = %.2f\n", (a + b) * ((float)c / d));
    printf("(a + b) * c / d = %.2f\n", (a + b) * c / (float)d);
    printf("a + (b * c) / d = %.2f\n", a + (b * c) / (float)d);

    return 0;
}