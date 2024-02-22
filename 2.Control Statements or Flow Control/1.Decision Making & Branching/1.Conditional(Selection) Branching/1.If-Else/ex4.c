#include<stdio.h>
int main()
{
//Write a program to check if a number is even or odd with the help of switch-case construct and without using any if-else construct
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    switch (n % 2) 
    {
        case 0:
            printf("%d is an even number.\n", n);
            break;
        case 1:
            printf("%d is an odd number.\n", n);
            break;
    }

/*A rectangle is centred at the origin and has a length L and a breadth B (entered by the user). Check whether a point (x,y) also entered by the 
  user lies inside, on, or outside the rectangle.*/   

    float L, B, x, y;
    printf("Enter the length and the breadth of the rectangle: ");
    scanf("%f %f", &L, &B);
    printf("Enter the x-coordinate and the y-coordinate of the point: ");
    scanf("%f %f", &x, &y);
    if (x >= -L / 2 && x <= L / 2 && y >= -B / 2 && y <= B / 2)
        printf("The point (%f, %f) lies inside the rectangle.\n", x, y);
    else if ((x >= -L / 2 && x <= L / 2) && (y == -B / 2 || y == B / 2))
        printf("The point (%f, %f) lies on the boundary of the rectangle.\n", x, y);
    else
        printf("The point (%f, %f) lies outside the rectangle.\n", x, y);

    /*printf("The point (%f, %f) lies %s the rectangle.\n", x, y, (x >= -L/2 && x <= L/2 && y >= -B/2 && y <= B/2) ? 
      "inside" : ((x >= -L/2 && x <= L/2) && (y == -B/2 || y == B/2)) ? "on the boundary of" : "outside");*/

/*An air-conditioning system of a storage warehouse is to be turned on if one or more of the following conditions occur:
  a. The weight of the stored material is less than 100 tons, the relative humidity is at least 60 percent, and the temperature is above 60 degrees; 
  b. The weight of the stored material is 100 tons or more and the temperature is above 60 degrees;
  c. The weight of the stored material is less than 100 tons and the barometer stands at 30 or over. 
      W designates weight of 100 tons or more.
      H designates relative humidity of at least 60 percent
      T designates temperature above 60 degrees.
      P designates barometric pressure of 30 or more. 
  Write a C program to receive the parameters W, H, T and P and based on the conditions a, b, or c, state whether the air conditioning should be
  started ON or put OFF.*/  

    int W, H, T, P;
    printf("Enter W, H, T, and P: ");
    scanf("%d %d %d %d", &W, &H, &T, &P);

    if ((W < 100 && H >= 60 && T > 60) || (W >= 100 && T > 60) || (W < 100 && P >= 30))
        printf("Air conditioning should be turned ON.\n");
    else
        printf("Air conditioning should be put OFF.\n");

    return 0;
}
