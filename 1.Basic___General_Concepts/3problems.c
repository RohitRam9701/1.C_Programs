#include <stdio.h>
#include <math.h> //pow and M_PI(defined in math.h)
#define M_PI 3.14159

int main()
{
  /* A point on the circumference of a circle whose center is (0, 0) is (4,5). Write a program to compute perimeter and area of
       the circle.
       (Hint: use the formula given in the Ex. 2.11)*/

  float x = 4, y = 5;
  float radius = sqrt(pow(x, 2) + pow(y, 2));
  float perimeter = 2 *M_PI * radius;
  float area = M_PI * pow(radius, 2);

  printf("Perimeter of the circle = %.2f\n", perimeter);
  printf("Area of the circle = %.2f\n", area);

  /*  The line joining the points (2,2) and (5,6) which lie on the circumference of a circle is the diameter of the circle. Write
       a program to compute the area of the circle.*/

  float x1 = 2, y1 = 2, x2 = 5, y2 = 6;
  float Diameter = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
  float Radius = Diameter / 2;
  float Area = M_PI * pow(Radius, 2);

  printf("Area of the circle = %.2f\n", Area);

  return 0;
}