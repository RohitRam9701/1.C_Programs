#include <stdio.h>
#include <math.h>  //line 73 for sqrt
void main() 
{
/*Enter the co-ordinate of a point (x, y). Write a C program to check with the help of Logical Operators if it lies in the first, second, third, or 
  fourth quadrant, on x or y axis, or on the origin, and display a message accordingly.*/    
    int x, y;

    printf("Enter the coordinates of the point (x, y): ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
        printf("The point (%d, %d) lies in the first quadrant.\n", x, y);
    else if (x < 0 && y > 0)
        printf("The point (%d, %d) lies in the second quadrant.\n", x, y);
    else if (x < 0 && y < 0)
        printf("The point (%d, %d) lies in the third quadrant.\n", x, y);
    else if (x > 0 && y < 0)
        printf("The point (%d, %d) lies in the fourth quadrant.\n", x, y);
    else if (x == 0 && y != 0)
        printf("The point (%d, %d) lies on the y-axis.\n", x, y);
    else if (x != 0 && y == 0)
        printf("The point (%d, %d) lies on the x-axis.\n", x, y);
    else
        printf("The point (%d, %d) is at the origin.\n", x, y);
/*In this program, we take input for the coordinates `x` and `y` using `scanf`. Then, we use a series of `if-else` statements to check the 
  conditions and determine the quadrant or axis on which the point lies. Finally, we display the appropriate message based on the conditions.
  Note: This program assumes that the point lies on one of the quadrants, axes, or the origin. If the point lies on the boundary between two 
  quadrants or axes, it will be considered part of the quadrant or axis with positive values.*/

/*Write a program with the help of Logical Operators to check if a year entered by the user is a leap year (a millennium year like 1800, 1900, 2000, 
  2100 etc. is a leap year if it is divisible by 400). */
    int year;
    printf("\nEnter an year: ");scanf("%d", &year);
    if ( year%400 == 0 || year % 100 != 0 && year%4 == 0)  printf("%d is a LEAP year",year);
    else printf("%d is not a LEAP year",year);

/*Write a program using Logical Operators to check if three line segments can form a triangle.*/
    int a, b, c;    
    printf("\nEnter the lengths of three line segments: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a + b > c && b + c > a && c + a > b) {
        printf("\nThe line segments can form a triangle.\n");
    } else {
        printf("\nThe line segments cannot form a triangle.\n");
    } 
/*To form a triangle with three line segments, the sum of the lengths of any two sides of the triangle must be greater than the length of the third 
side. In other words, if we have three line segments with lengths a, b, and c, they can form a triangle if the following conditions are satisfied:

1. a + b > c
2. b + c > a
3. c + a > b
*/ 

/*Write a program using Logical Operators to check if three numbers are Pythagorean triplets.*/
 // int a, b, c;
    printf("\nEnter the three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b)
      printf("\nThe numbers are Pythagorean triplets"); 
    else
      printf("\nThe numbers are NOT Pythagorean triplets");

/*Write a program in C to test if a point (X, Y) lies inside, on or outside a circle of radius r with origin at the centre, where X, Y, and r are 
  input by the user.*/      
    
    float X, Y, r, distance;    
    printf("\nEnter the coordinates of the point (X, Y): ");
    scanf("%f %f", &X, &Y);    
    printf("\nEnter the radius of the circle: ");
    scanf("%f", &r);    
    distance = sqrt(X * X + Y * Y);    
    if (distance < r) 
        printf("\nThe point lies inside the circle.");
    else if (distance == r) 
        printf("\nThe point lies on the circle.");
    else 
        printf("\nThe point lies outside the circle.");   

/*Input a character. Check if it is in uppercase or in lowercase. If in uppercase, then convert it into lowercase, and if it is in lowercase then 
  convert it into uppercase.*/

    char ch;
    printf("\nEnter a character: ");    
    fflush(stdin);
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32; // Convert uppercase to lowercase
        printf("\nConverted to lowercase: %c\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        ch = ch - 32; // Convert lowercase to uppercase
        printf("\nConverted to uppercase: %c\n", ch);
    } else {
        printf("\nInvalid input!\n");
    }

    /*
    Here, we use the ASCII values of characters to determine if they are uppercase or lowercase. Uppercase letters have ASCII values ranging from 
    65 ('A') to 90 ('Z'), while lowercase letters have ASCII values ranging from 97 ('a') to 122 ('z').If the input character falls within the 
    uppercase range, we add 32 to its ASCII value to convert it to lowercase. Similarly, if the input character falls within the lowercase range, 
    we subtract 32 to convert it to uppercase. The program then prints the converted character accordingly.
    Note: This program assumes that the input is a single character. If you want to handle multiple characters or strings, you'll need to modify 
          the code accordingly.*/
}