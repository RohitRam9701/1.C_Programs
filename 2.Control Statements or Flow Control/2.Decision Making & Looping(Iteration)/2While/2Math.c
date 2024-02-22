#include<stdio.h>
#define PERIOD 10
#define PRINCIPAL 5000.00
#include <math.h>
#define PI 3.14159
#define MAX 180
void main()
{
/* INTEREST CALCULATION
The program calculates the value of money at the end of each year of investment, assuming an interest rate of 11 percent and prints the year, and 
the corresponding amount, in two columns. The output is for a period of 10 years with an initial investment of 5000.00. The program uses the 
following formula:               
                  Value at the end of year = Value at start of year (1 + interest rate)
In the program, the variable value represents the value of money at the end of the year while amount represents the value of money at the start of 
the year. The statement      
                       amount = value;          
makes the value at the end of the current year as the value at start of the next year.*/
    int year;
    float amount, value, inrate;
    amount= PRINCIPAL;
    inrate = 0.11;
    year = 0;
    while(year<= PERIOD)
    { printf("%2d %8.2f\n",year, amount);
      value = amount + inrate*amount;
      year = year + 1;
      amount = value;
    } 
/* USE OF MATH FUNCTIONS
We often use standard mathematical functions such as cos, sin, exp, etc. We shall see now the use of a mathematical function in a program. The 
standard mathematical functions are defined and kept as a part of C math library. If we want to use any of these mathematical functions, we must 
add an #include instruction in the program. Like #define, it is also a compiler directive that instructs the compiler to link the specified 
mathematical functions from the library. The instruction is of the form
                                                                        #include <math.h>
math.h is the filename containing the required function. Figure 2.8 illustrates the use of cosine function. The program calculates cosine values 
for angles 0, 10, 20............. 180 and prints out the results with headings.*/

    int angle;
    float x,y;
    angle = 0;
    printf("  Angle    Cos(angle)\n"); 
    while(angle<= MAX)
    {
        x = (PI/MAX)*angle;
        y = cos(x);
        printf("%5d %13.4f\n", angle, y);
        angle = angle + 10;
    }

/*Addition of even numbers only */
    int n, i, sum, num, rem;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    i = 1;
    sum = 0;
    while(i <=n) {
        printf("\nEnter data number %d : ", i);
        scanf("%d", &num);
        rem = num %2;
        if ( rem ==0)
        sum = sum + num; 
        i = i + 1;
    }    
    printf("\nThe sum is %d", sum);
} 