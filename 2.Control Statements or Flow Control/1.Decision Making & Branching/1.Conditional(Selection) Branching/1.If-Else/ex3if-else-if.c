#include <stdio.h>
#include <math.h>

void main() 
{
/*Write a program in C to test if a point (x, y) lies inside, on or outside a circle of radius R with origin at the centre, where x, y, and R are 
  input by the user.*/    
    float x, y, R, dist;    
    printf("Enter the coordinates of the point (x, y): ");    scanf("%f %f", &x, &y);    
    printf("Enter the radius of the circle: ");    scanf("%f", &R);    
    dist = sqrt(x * x + y * y);    
    if (dist < R) 
        printf("The point lies inside the circle.\n");
    else if (dist == R) 
        printf("The point lies on the circle.\n");
    else 
        printf("The point lies outside the circle.\n");

/*Write a program in C to test if a point (X, Y) lies inside, on or outside a circle of radius r with origin at (a, b) where X, Y, r, a and b are 
  input by the user.*/  
    float X, Y, a, b, r, distance;    
    printf("Enter the coordinates of the point (X, Y): ");    scanf("%f %f", &X, &Y);    
    printf("Enter the coordinates of the origin (a, b): ");    scanf("%f %f", &a, &b);    
    printf("Enter the radius of the circle: ");    scanf("%f", &r);    
    distance = sqrt(pow(X - a, 2) + pow(Y - b, 2));    
    if (distance < r) 
        printf("The point lies inside the circle.\n");
    else if (distance == r) 
        printf("The point lies on the circle.\n");
    else 
        printf("The point lies outside the circle.\n"); 

/*If telephone calls made are less than equal to 300 then charge per call is Rs 0.80. If calls are between 300 and 601, then rate per call is 
  Rs. 1.20 and if calls are more than 600, then rate is Rs. 1.50 per call. Write a C program to calculate the telephone bill based on the number 
  of calls made by a subscriber.*/

    int tel_call;
    float tel_bill;
    printf("\nEnter the number of telephone calls made by subscriber: ");
    scanf("%d", &tel_call);
    if (tel_call<=300)
        tel_bill=tel_call*0.80;
    else if (tel_call>300 && tel_call<601)
        tel_bill=tel_call*1.20;
    else 
        tel_bill=tel_call*1.50;
    printf("\nTelephone bill is %.2f", tel_bill);
}
