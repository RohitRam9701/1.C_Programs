#include <stdio.h>
#include <math.h>
int main() {
/*
1. Shown below is a Floyd’s triangle.
   1
   2 3
   4 5 6
   7 8 9 10
   11 .. .. 15
   .
   .
   79 .. .. .. .. .. 91
   
   (a) Write a program to print this triangle.
   (b) Modify the program to produce the following form of Floyd’s triangle.
       1
       0 1
       1 0 1
       0 1 0 1
       1 0 1 0 1
*/

//(a) A program to print Floyd’s triangle:

    int rows, i, j, num = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; ++j) {
            printf("%d ", num);
            ++num;
        }
        printf("\n");
    }

//(b) A program to print the modified form of Floyd’s triangle:

    int Rows, I, J;

    printf("Enter number of rows: ");
    scanf("%d", &Rows);

    for(I = 1; I <= rows; I++) {
        for(J = 1; J <= I; ++J) {
            printf("%d ", (I+J+1)%2);
        }
        printf("\n");
    }

/*
2. A cloth showroom has announced the following seasonal discounts on purchase of items:
    ____________________________________________________________________________________
   |    Purchase amount     |________________________Discount___________________________|
   |________________________|_______ Mill cloth ________|_________Handloom items________|
   |       0 –100           |              _            |               5%              |
   |     101 –200           |             5%            |             7.5%              | 
   |     201 –300           |           7.5%            |             10.0%             | 
   |    Above 300           |          10.0%            |             15.0%             |
   
   Write a program using switch and if statements to compute the net amount to be paid by a customer.
*/

    float purchase, discount, net_amount;
    int item_type;

    printf("Enter purchase amount: ");
    scanf("%f", &purchase);

    printf("Enter type of item (1 for Mill cloth, 2 for Handloom items): ");
    scanf("%d", &item_type);

    switch(item_type) {
        case 1: // Mill cloth
            if(purchase <= 100)
                discount = 0;
            else if(purchase <= 200)
                discount = 5;
            else if(purchase <= 300)
                discount = 7.5;
            else
                discount = 10;
            break;
        case 2: // Handloom items
            if(purchase <= 100)
                discount = 5;
            else if(purchase <= 200)
                discount = 7.5;
            else if(purchase <= 300)
                discount = 10;
            else
                discount = 15;
            break;
        default:
            printf("Invalid item type.\n");
            return -1;
    }

    net_amount = purchase - (purchase * discount / 100);
    printf("Net amount to be paid: %.2f\n", net_amount);

/*  Using conditional operator (by converting if-else-if and switch into conditional operator)

    float purchase, discount;
    int item_type;

    printf("Enter purchase amount: ");
    scanf("%f", &purchase);

    printf("Enter type of item (1 for Mill cloth, 2 for Handloom items): ");
    scanf("%d", &item_type);

    discount = (item_type == 1) ? (purchase > 300 ? 10 : purchase > 200 ? 7.5 : purchase > 100 ? 5 : 0)
                                : (purchase > 300 ? 15 : purchase > 200 ? 10 : purchase > 100 ? 7.5 : 5);

    printf("Net amount to be paid: %.2f\n", purchase - (purchase * discount / 100));
*/    
/*
3. Write a program that will read the value of x and evaluate the following function:
                        y = {1 for x < 0, 0 for x = 0, −1 for x > 0 }
   using 
    (a) nested if statements.
    (b) else if statements, and
    (c) conditional operator ? : 
*/
    int x, y;
    printf("Enter the value of x: ");
    scanf("%d", &x);

//(a) Using nested if statements:    
    if (x < 0) {
        y = 1;
    } else {
        if (x == 0) {
            y = 0;
        } else {
            y = -1;
        }
    }

//(b) Using else if statements:
/*  if (x < 0) {
        y = 1;
    } else if (x == 0) {
        y = 0;
    } else {
        y = -1;
    }
*/   

//(c) Using the conditional operator '? :' :
/*
    y = (x < 0) ? 1 : ((x == 0) ? 0 : -1);//y = (x < 0) ? 1 : ((x > 0) ? -1 : 0);
*/
    printf("The value of y is: %d\n", y);


/*
4. Write a program to compute the real roots of a quadratic equation
                ax² + bx + c = 0
   The roots are given by the equations
      x_1 = [-b + √(b²-4ac)]/2a or,{-b + √(b² - 4ac)} / (2.a) or, (-b + sqrt(b^2 - 4ac)) / (2a)
      x_2 = [-b - √(b²-4ac)]/2a or,{-b - √(b² - 4ac)} / (2.a) or, (-b - sqrt(b^2 - 4ac)) / (2a)
   The program should request for the values of the constants a, b, and c and print the values of x_1 and x_2. Use the following rules:
    (a) No solution, if both a and b are zero
    (b) There is only one root, if a = 0 (x = -c/b)
    (c) There are no real roots, if b² - 4ac is negative
    (d) Otherwise, there are two real roots
   Test your program with appropriate data so that all logical paths are working as per your design. Incorporate appropriate output messages.
*/

    double a, b, c, discriminant, root1, root2;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    if (a == 0 && b == 0) {
        printf("No solution, both a and b are zero.\n");
    } else if (a == 0) {
        root1 = -c / b;
        printf("There is only one root: %.2lf\n", root1);
    } else if (discriminant < 0) {
        printf("There are no real roots, discriminant is negative.\n");
    } else {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("There are two real roots:\n"); 
        printf("x1 = %.2lf\n", root1);
        printf("x2 = %.2lf\n", root2);
    }

/*
    double a, b, c, discriminant, root1, root2;

    // Get input from the user
    printf("Enter coefficients a, b, and c for the equation ax^2 + bx + c = 0: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Check for no solution
    if (a == 0 && b == 0) {
        printf("No solution: both a and b are zero.\n");
        return 1;
    }

    // Check for one root
    if (a == 0) {
        root1 = -c / b;
        printf("There is only one root: x = %.2lf\n", root1);
        return 0;
    }

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Check for no real roots
    if (discriminant < 0) {
        printf("There are no real roots.\n");
        return 0;
    }

    // Calculate roots
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);

    // Print roots
    printf("There are two real roots:\n");
    printf("x1 = %.2lf\n", root1);
    printf("x2 = %.2lf\n", root2);
*/

/*
5. Write a program to read three integer values from the keyboard and displays the output stating that they are the sides of right-angled triangle.
*/

    int p, q, r, max, sum_of_squares, square_of_max;

    printf("Enter the sides of a triangle (p, q, r): ");
    scanf("%d %d %d", &p, &q, &r);

    // Identify the longest side
    max = (p > q) ? ((p > r) ? p : r) : ((q > r) ? q : r);

    if(max == p) {
        sum_of_squares = pow(q,2) + pow(r,2);
        square_of_max = pow(p,2);
    } else if(max == q) {
        sum_of_squares = pow(p,2) + pow(r,2);
        square_of_max = pow(q,2);
    } else {
        sum_of_squares = pow(p,2) + pow(q,2);
        square_of_max = pow(r,2);
    }

    if (sum_of_squares == square_of_max) {
        printf("The triangle with sides %d, %d, and %d is a right-angled triangle.\n", p, q, r);
    } else {
        printf("The triangle with sides %d, %d, and %d is not a right-angled triangle.\n", p, q, r);
    } 

    return 0;
}