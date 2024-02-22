   //PROGRAMMING EXERCISES
#include<stdio.h>
int main()
{
// Write a C program to display the equation of a line in the form: ax + by = c, for a = 5,b = 8 and c = 18. 
    int a = 5,b = 8, c = 18;
    printf("Equation of the line: %dx + %dy = %d\n", a, b, c);   

// Write a C program that uses an in-built function to draw a 3D bar.   (Unsolved, I think the given solution is wrong. Recheck )
/*
#include <stdio.h>

void drawBar(int height)
{
    int i, j;

    for (i = 0; i < height; i++)
    {
        for (j = 0; j < height - i - 1; j++)
            printf(" ");

        for (j = 0; j < 3; j++)
            printf("*");

        printf("\n");
    }
}

int main()
{
    int barHeight;

    printf("Enter the height of the bar: ");
    scanf("%d", &barHeight);

    drawBar(barHeight);

    return 0;
}*/

   printf("*|||||||||||||||||||||||* \n");  
   printf(" *|||||||||||||||||||||||* \n");
   printf("  *|||||||||||||||||||||||* \n");  

   printf("or,\n");   

   printf("*|||* \n");  
   printf(" *|||* \n");
   printf("  *|||* \n");  
   printf("   *|||* \n");  
   printf("    *|||* \n");
   printf("     *|||*\n");  

   printf("or,\n");  

   printf("*** \n");  
   printf(" *** \n");
   printf("  *** \n");  
   printf("   *** \n");  
   printf("    *** \n");
   printf("     ***\n");  

/* Write a c program to output the following multiplication table:
                        5×1=5
                        5×2=10
                        5×3=15
                        .   .
                        .   .
                        5×10=50   */

   int number = 5;

   for (int i = 1; i <= 10; i++) {
      printf("%d * %d = %d\n", number, i, number * i);
   }

/* Given the values of three variables p, q and r, write a program to compute and display the value of x, where   x = p/(q-r)
    Execute your program for the following values:
    (a) p = 250, q = 85, r = 25
    (b) p = 300, q = 70, r = 70
    Comment on the output in each case.   */

   int p, q, r;
   float x;

   // Case (a)
   p = 250;
   q = 85;
   r = 25;
   x = p / (float)(q - r);
   printf("x = %f\n", x);

   // Case (b)
   p = 300;
   q = 70;
   r = 70;
   x = p / (float)(q - r);
   printf("x = %f\n", x);

/*  Write a C program that reads the value of distance travelled by a car and the time taken for the same. Next, compute the speed 
    at which the car travelled.   */

   float distance, time, speed;

   printf("Enter the distance travelled (in km): ");
   scanf("%f", &distance);

   printf("Enter the time taken (in hours): ");
   scanf("%f", &time);

   speed = distance / time;
   printf("The speed of the car is %.2f km/h\n", speed);

   return 0;
}
/*
  Which return value of main() function indicates successful completion of the program?
---->    return 0; 
*/