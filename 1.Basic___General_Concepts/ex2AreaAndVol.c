//Area
#include<stdio.h>
#include<math.h>
#define PI 3.14159
void main ()
{
/*To find the area of a rectangle*/
    int l,b;
    printf("\nEnter length and breadth of rectangle:");
    scanf("%d%d",&l,&b);
    printf("\nArea of rectangle:%d",l*b); 
/*To find the area of a square using diagonal length*/
    float ln,A;
    printf("\nEnter the diagonal lenth :");scanf("%f",&ln);
    A=(1.0/2)*pow(ln,2);
    printf("\nThe required area:%.2f",A);
/*To find the area of the portion of the square except the area of the circle inscribed inside it where r=radius of the circle,being taken as 
  input*/
    float r,a;
    printf("\nEnter radius:");scanf("%f",&r);
    a=(4-3.1416)*pow(r,2);
    printf("\n Area:%.2f",a);    
/*To find the circumference and area of a circle.*/
    float rad, circum, area;
    printf("\nEnter the radius of the circle: ");
    scanf("%f", &rad);
    circum = 2 * PI * rad;
    area = PI * rad * rad;
    printf("\nRadius=%.2f, \nCircumference=%.2f, \nArea=%.2f",rad, circum, area);
/*To find the surface area and volume of a sphere of radius r */
    double radius, surfaceArea, volume;
    printf("\nEnter the radius of the sphere: ");
    scanf("%lf", &radius);
    surfaceArea = 4 * PI * radius * radius;
    volume = (4.0 / 3.0) * PI * radius * radius * radius;
    printf("\nSurface Area: %.2lf\nVolume: %.2lf", surfaceArea, volume);
/*To find the total surface area and volume of a cone where inputs are base radius and height*/    
    float rd,h,x,ar,v;
    printf("\n Enter base radius and height:");scanf("%f%f",&rd,&h);
    ar=PI*rd*(rd+pow(pow(rd,2)+pow(h,2),0.5));
    x=1.0/3;
    v=PI*x*h*pow(rd,2);
    printf("Area:%f and Volume:%f",ar,v);
    fflush(stdin);
    getchar();  
}

