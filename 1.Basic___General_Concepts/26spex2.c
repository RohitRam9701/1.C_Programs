#include <stdio.h>
#include <math.h>

int main() 
{
/*For a certain electrical circuit with an inductance L and resistance R, the damped natural frequency is given by
        Frequency = sqrt((1/LC)- (R²/4 C²)). 
   It is desired to study the variation of this frequency with C (capacitance). Write a program to calculate the frequency for 
   different values of C starting from 0.01 to 0.1 in steps of 0.0 1.  */ 
      
    float l = 0.5; // Inductance (constant)
    float rs = 0.1; // Resistance (constant)
    float cp;

    printf("Capacitance\tFrequency\n");
    for (cp = 0.01; cp <= 0.1; cp += 0.01) {
        float frequency = sqrt((1 / (l * cp)) - ((rs * rs) / (4 * cp * cp)));
        printf("%.2f\t\t%.2f\n", cp, frequency);
    }

/*Write a program to read a four digit integer and print the sum of its digits. Hint: Use/ and % operators. */

    int number;
    printf("Enter a four-digit integer: ");
    scanf("%d", &number);

    int sum = 0;
    sum += number % 10; // Last digit
    number /= 10;
    sum += number % 10; // Third digit
    number /= 10;
    sum += number % 10; // Second digit
    number /= 10;
    sum += number;      // First digit

    printf("Sum of digits: %d\n", sum);

  /*in short
    int number, sum = 0;
    printf("Enter a four-digit integer: ");
    scanf("%d", &number);

    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }

    printf("Sum of the digits: %d\n", sum);*/


//Given three values,write a program to read three values from keyboard and print out the largest of them without using if statement.

    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int Largest = (a > b && a > c) ? a : (b > c) ? b : c;

    printf("The largest number is: %d\n", Largest);

/*
#include <stdio.h>
int findMax(int a, int b, int c) 
{
    int max = a > b ? a : b;
    max = max > c ? max : c;
    return max;
}
int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int largest = findMax(num1, num2, num3);
    printf("Largest number: %d\n", largest);

    return 0;
}*/

// Write a program to read two integer values m and n and to decide and print whether m is a multiple of n.

    int m, n;
    printf("Enter two integer numbers: ");
    scanf("%d %d", &m, &n);

    if (m % n == 0) 
    {
        printf("%d is a multiple of %d\n", m, n);
    } else {
        printf("%d is not a multiple of %d\n", m, n);
    }


/*Write a program to read three values using scanf statement and print the following results:
(a) Sum of the values 
(b) Average of the three values
(c) Largest of the three 
(d) Smallest of the three  */

    int p, q, r;
    printf("Enter three values: ");
    scanf("%d %d %d", &p, &q, &r);

    int Sum = p + q + r;
    float average = (float)Sum / 3;
    int largest = (p > q && p > r) ? p : (q > r) ? q : r;
    int smallest = (p < q && p < r) ? p : (q < r) ? q : r;

    printf("Sum: %d\n", Sum);
    printf("average: %.2f\n", average);
    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest); 

/*
#include <stdio.h>

int findMax(int a, int b, int c) {
    int max = a > b ? a : b;
    max = max > c ? max : c;
    return max;
}

int findMin(int a, int b, int c) {
    int min = a < b ? a : b;
    min = min < c ? min : c;
    return min;
}

int main() {
    int a, b, c;
    printf("Enter three values: ");
    scanf("%d %d %d", &a, &b, &c);

    int sum = a + b + c;
    float average = (float)sum / 3;
    int largest = findMax(a, b, c);
    int smallest = findMin(a, b, c);

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}*/

/* The cost of one type of mobile service is Rs. 250 plus Rs. 1.25 for each call made over and above 100 calls. Write a program 
   to read customer codes and calls made and print the bill for each customer.*/

    int customerCode, callCount;
    printf("Enter customer code: ");
    scanf("%d", &customerCode);
    printf("Enter number of calls made: ");
    scanf("%d", &callCount);

    float bill = 250.0 + (callCount > 100 ? (callCount - 100) * 1.25 : 0);
    printf("Bill for customer code %d: Rs. %.2f\n", customerCode, bill);

/*  int customerCode, callsMade;
    printf("Enter the customer code: ");
    scanf("%d", &customerCode);
    printf("Enter the number of calls made: ");
    scanf("%d", &callsMade);

    float bill = 250 + 1.25 * (callsMade - 100);
    if (bill < 250) {
        bill = 250;
    }

    printf("Bill for customer %d: Rs. %.2f\n", customerCode, bill);  */
    
/*  Write a program to print a table of sin and cos functions for the interval from 0 to 180 degrees in increments of 15 a shown 
    here.
    x (degrees)    sin (x)   cos (x)
    0              ...       ...
    15             ...       ...
    ...           
    ...            
    180            ...       ...       */

    printf("x (degrees)\tsin(x)\t\tcos(x)\n");
    int x;
    for (x = 0; x <= 180; x += 15) {
        float radians = x * 3.14159 / 180;
        printf("%d\t\t%.4f\t\t%.4f\n", x, sin(radians), cos(radians));
    }

/*  Write a program to compute the values of square-roots and squares of the numbers 0 to 100 in steps 10 and print the output 
     in a tabular form as shown below.
     Number           Square-root              Square
     0                0                        0
     100              10                       10000    */

    printf("Number\t\tSquare-root\t\tSquare\n");
    int num;
    for (num = 0; num <= 100; num += 10) {
        printf("%d\t\t%.2f\t\t\t%d\n", num, sqrt(num), num * num);
    }

// Write a program to illustrate the use of cast operator in a real life situation. 

    float amount = 100.55;
    int roundedAmount = (int)amount;
    printf("Rounded Amount: %d\n", roundedAmount);

/*  float avg;
    int sum = 345;
    int count = 10;
    avg = (float)sum / count;
    printf("Average: %.2f\n", avg);  */

// Write a C program to shift the given data by two bits to the left.

    int data = 10;  //if you want, you can input data of your choice.
    int shiftedData = data << 2;
    printf("Original data: %d\n", data);
    printf("Shifted data: %d\n", shiftedData);
    
    return 0;
}  