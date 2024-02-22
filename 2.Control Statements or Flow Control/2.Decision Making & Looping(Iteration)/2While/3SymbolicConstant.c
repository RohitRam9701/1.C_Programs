#include<stdio.h>

#define  N  10                                  /*SYMBOLIC CONSTANT*/

#define F_LOW  0    /*-------------------*/
#define F_MAX  250  /*SYMBOLIC CONSTANTS */
#define STEP   25   /*-------------------*/
int main()
{    
/*The program requests the user to input the values of amount to be invested, interest rate and period of investment by printing a prompt message             
                Input amount, interest rate, and period
and then waits for input values. As soon s we finish entering the three values corresponding to the three variabes amount, inrate, and period, the 
computer begins to calculate the amount at the end of each year, up to 'period' and produces output*/

    int year, period;
    float amount, value, inrate;

    printf("Input amount, interest rate, and period\n\n ");
    scanf("%f %f %d", &amount, &inrate, &period);
    printf("\n");
    year = 1;

    while(year<= period)
    { 
      value = amount + inrate*amount;
      printf("%2d Rs %8.2f\n",year, value);
      amount = value; 
      year = year + 1;     
    } 

/* Calculation of Average of Numbers: A program to calculate the average of a set of N numbers.*/

    int count;float sum, average, number;       /* DECLARATION OF VARIABLES */
    sum = 0; count = 0;                         /* INITIALIZATION OF VARIABLES*/
    while( count < N)
    {
        printf("Enter number:");
        scanf("%f", &number);
        sum = sum + number;
        count = count+1;
    }     
    average = sum/N;
    printf("N = %d Sum = %.2f", N, sum);
    printf(" Average = %.2f", average);
/*Notice that the actual value of sum is 38.8 but the value displayed is 38.799999. In fact, the actual value that is displayed is quite dependent 
on the computer system. Such an inaccuracy is due to the way the floating point numbers are internally represented inside the computer.*/

/* Temperature Conversion Problem: The program converts a given temperature in fahrenheit to celsius using the following conversion formula:
C= (F-32)/18 */
    typedef float REAL;          /*TYPE DEFINITION */
    REAL fahrenheit, celsius;    /* DECLARATION */

    fahrenheit = F_LOW;          /* INITIALIZATION*/
    printf("\nFahrenheit Celsius\n\n");
    while( fahrenheit <= F_MAX )
    {
      celsius =(fahrenheit-32.0)/1.8;
      printf("%5.lf  \t  %7.2f\n", fahrenheit, celsius);
      fahrenheit = fahrenheit + STEP ;
    } 
/*The minimum and maximum values and step size are defined as symbolic constants. These values can be changed by redefining the #define statements. 
  An user-defined data type name REAL is used to declare the variables fahrenheit and celsius.*/     

    return 0;
}   