#include <stdio.h>
#include<math.h>   //sqrt
#include <time.h>

int main()
{
// Write a C program to print the current system date.
   time_t t = time(NULL);
   struct tm *timeinfo = localtime(&t);

   printf("Current system date: %s", asctime(timeinfo));
   
/* Given two integers 20 and 10, write a C program that uses a function add() to add these two numbers and sub() to find the 
    suberence of these 
    two numbers and then display the add and suberence in the following form:
                20+10=30
                20-10=10       */

   int p = 20, q = 10;
   int add = (p+q);
   int sub = (p-q);

   printf("%d + %d = %d\n", p, q, add);
   printf("%d - %d = %d\n", p, q, sub);

// Modify the above program to provide border lines to the address.

   printf("+-----------------------+\n");
   printf("|                       |\n");
   printf("|       Address         |\n");
   printf("|                       |\n");
   printf("+-----------------------+\n");   

/* Write a program using one print statement to print the pattern of asterisks as shown below:
               *
               *      *
               *      *      *
               *      *      *      *              */
               
   int n = 4;
   for (int i = 0; i < n; i++) 
   {
      for (int j = 0; j <= i; j++) 
      {
         printf("*\t");
      }
      printf("\n");
   }
                      
/* Write a program that will print the following figure using suitable characters.   
                     _______           _______        
                    |_______| ------> |_______|   */

   printf(" _____           _____ \n");
   printf("|_____| ------> |_____|\n");   

/* Area of a triangle is given by the formula : A = √S(S-a) (S-b) (S-c) , Where a, b and c are sides of the triangle and 
     2 S = a+b+c. 
     Write a program to compute the area of the triangle given the values of a, b and c.*/

   float a, b, c;
   printf("Enter the sides of the triangle: ");
   scanf("%f %f %f", &a, &b, &c);

   float s = (a + b + c) / 2;
   float area = sqrt(s * (s - a) * (s - b) * (s - c));

   printf("Area of the triangle = %.2f\n", area);

/* Write a program to display the following simple arithmetic calculations.
                               _______                      _______
                    x =       |_______|       y =          |_______|  
                               _______                      _______
                    Sum    =  |_______|       Difference = |_______|   
                               _______                      _______
                    Product = |_______|       Division =   |_______| */

   int x = 10, y = 5;
   int sum = x + y;
   int diff = x - y;
   int product = x * y;
   int division = x / y;

   printf("x = %d\t\t y = %d\n", x, y);
   printf("Sum = %d\t\t Difference = %d\n", sum, diff);
   printf("Product = %d\t Division = %d\n", product, division);


/* Distance between two points (x₁, y₁) and (X₂, y₂) is governed by the formula
                D²= (x₂-x₁)²+(y₂-Y₁)²
     Write a program to compute D given the coordinates of the points. */

   float x₁, y₁, x₂, y₂;
   printf("Enter the coordinates of the first point (x₁ y₁): ");
   scanf("%f %f", &x₁, &y₁);

   printf("Enter the coordinates of the second point (x₂ y₂): ");
   scanf("%f %f", &x₂, &y₂);

   float distance = sqrt(pow((x₂ - x₁), 2) + pow((y₂ - y₁), 2));
   printf("Distance between the points = %.2f\n", distance);
   
   return 0;
}