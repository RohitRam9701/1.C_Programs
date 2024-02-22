/*
9. Write a program to read a double-type value x that represents angle in radians and a character-type variable T that represents the type of 
   trigonometric function and display the value of
    (a) sin(x), if s or S is assigned to T,
    (b) cos (x), if c or C is assigned to T, and
    (c) tan (x), if t or T is assigned to T
   using (i) if......else statement, and (ii) switch statement.
*/
#include <stdio.h>
#include <math.h>
#include <ctype.h> //for tolower function
int main() 
{
    double x;
    char T;
    int result;

    // Read a positive integer number
    printf("Enter an angle in radians: ");
    result = scanf("%lf", &x);
    if(result != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    printf("Enter the type of trigonometric function (s for sin, c for cos, t for tan): ");
    result = scanf(" %c", &T);
    if(result != 1 || (T != 's' && T != 'S' && T != 'c' && T != 'C' && T != 't' && T != 'T')) {
        printf("Invalid input. Please enter s, S, c, C, t, or T.\n");
        return 1;
    }   

    // Using if...else statement
    if (T == 's' || T == 'S') {
        printf("sin(%lf) = %lf\n", x, sin(x));
    } else if (T == 'c' || T == 'C') {
        printf("cos(%lf) = %lf\n", x, cos(x));
    } else if (T == 't' || T == 'T') {
        printf("tan(%lf) = %lf\n", x, tan(x));
    } else {
        printf("Invalid input\n");
    }
    // Using switch statement
    switch (T) {
        case 's':
        case 'S': printf("sin(%lf) = %lf\n", x, sin(x)); break;
        case 'c':
        case 'C': printf("cos(%lf) = %lf\n", x, cos(x)); break;
        case 't':
        case 'T': printf("tan(%lf) = %lf\n", x, tan(x)); break;
        default: printf("Invalid input\n");
    }
/*
    T = tolower(T);
//The tolower function is used to convert the input character T to lowercase. So, it doesn’t matter if I enter ‘s’, ‘S’, ‘c’, ‘C’, ‘t’, or ‘T’, 
//the program will correctly calculate the corresponding trigonometric function. 
    // Using if...else statement
    if(T == 's') {
        printf("sin(%lf) = %lf\n", x, sin(x));
    } else if(T == 'c') {
        printf("cos(%lf) = %lf\n", x, cos(x));
    } else if(T == 't') {
        printf("tan(%lf) = %lf\n", x, tan(x));
    } else {
        printf("Invalid input.\n");
    }

    // Using switch statement
    switch(T) {
        case 's':
            printf("sin(%lf) = %lf\n", x, sin(x));
            break;
        case 'c':
            printf("cos(%lf) = %lf\n", x, cos(x));
            break;
        case 't':
            printf("tan(%lf) = %lf\n", x, tan(x));
            break;
        default:
            printf("Invalid input.\n");
    }
*/    

/*
10. Write a C program to input the numeric week day value (starting from Monday as 1) and display the corresponding name of the week day.*/
    int day;

    printf("Enter the numeric week day value (1 for Monday, 7 for Sunday): ");
    scanf("%d", &day);
//Type:1
    switch(day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input. Please enter a number between 1 and 7.\n");
    }
/*
Type:2
    if (day >= 1 && day <= 7) {
        if (day == 1) {
            printf("Monday\n");
        } else if (day == 2) {
            printf("Tuesday\n");
        } else if (day == 3) {
            printf("Wednesday\n");
        } else if (day == 4) {
            printf("Thursday\n");
        } else if (day == 5) {
            printf("Friday\n");
        } else if (day == 6) {
            printf("Saturday\n");
        } else {
            printf("Sunday\n");
        }
    } else {
        printf("Invalid input. Please enter a value between 1 and 7.\n");
    }

Type:3

    if (day >= 1 && day <= 7) {
        switch (day) {
            case 1:
                printf("Monday\n");
                break;
            case 2:
                printf("Tuesday\n");
                break;
            case 3:
                printf("Wednesday\n");
                break;
            case 4:
                printf("Thursday\n");
                break;
            case 5:
                printf("Friday\n");
                break;
            case 6:
                printf("Saturday\n");
                break;
            default:
                printf("Sunday\n");
        }
    } else {
        printf("Invalid input. Please enter a value between 1 and 7.\n");
    }
*/
/*
11. Write a C program to input two numbers a and b and display whether
     (a) a is greater than b
     (b) b is greater than b
     (c) or, a and b are equal 
*/
    long double a, b;

    printf("Enter two numbers a and b: ");
    scanf("%Lf %Lf", &a, &b);

    if(a > b) {
        printf("a is greater than b\n");
    } else if(b > a) {
        printf("b is greater than a\n");
    } else {
        printf("a and b are equal\n");
    }

    return 0;
}