/* 1.Write a C program to display the Pascal's triangle. */
/*

#include <stdio.h>

int main() {
    int rows, i, j, val = 1;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for(i=0; i<rows; val=1, i++, printf("\n"))
        for(j=0; j<=i; printf("%d ", val), val=val*(i-j)/(j+1), j++);
    return 0;
}

1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
1 5 10 10 5 1 */

#include <stdio.h>
#include <math.h>
int main() 
{
    int rows, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(i=0; i<rows; i++) {
        for(space=rows; space>i; space--) {
            printf(" ");
        }
        int val = 1;
        for(j=0; j<=i; j++) {
            printf("%d ",val);
            val = val * (i - j) / (j + 1);
        }
        printf("\n");
    }

/* 2.Write a C program to input a currency value in Dollars and display its equivalent Euro and INR amounts. You may use current exchange rate for conversion purpose.*/

    float dollars, euros, inr;
    float euro_rate = 0.93; // current exchange rate from dollars to euros
    float inr_rate = 82.99; // current exchange rate from dollars to INR

    printf("Enter the amount in Dollars: ");
    scanf("%f", &dollars);

    // convert the amount to euros and INR
    euros = dollars * euro_rate;
    inr = dollars * inr_rate;

    printf("Equivalent amount in Euros: %.2f\n", euros);
    printf("Equivalent amount in INR: %.2f\n", inr);

/*  Procide current currency exchange rate

    float dollars, euros, inr;
    float euro_rate, inr_rate;

    printf("Enter the current exchange rate from dollars to euros: ");
    scanf("%f", &euro_rate);

    printf("Enter the current exchange rate from dollars to INR: ");
    scanf("%f", &inr_rate);

    printf("Enter the amount in Dollars: ");
    scanf("%f", &dollars);

    // convert the amount to euros and INR
    euros = dollars * euro_rate;
    inr = dollars * inr_rate;

    printf("Equivalent amount in Euros: %.2f\n", euros);
    printf("Equivalent amount in INR: %.2f\n", inr);
*/    
/* 3.Write a C program to display the following pattern.
            5 4 3 2 1 
              4 3 2 1 
                3 2 1 
                  2 1 
                    1  */

    for(int i = 5; i >= 1; i--) 
    {
        for(int j = 1; j <= 5 - i; j++) 
        {
            printf("  ");
        }
        for(int k = i; k >= 1; k--) {
            printf("%d ", k);
        }
        printf("\n");
    }  

/* 4.Write a C program to input an investment amount and compute its fixed deposit cumulative return after 10 years at a rate of interest of 8.75%.*/                      
    
    double principal, rate = 8.75, time = 10, amount;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    // Convert rate from percentage to decimal
    rate = rate / 100;

    // Calculate amount after time period using compound interest formula
    amount = principal * pow((1 + rate), time);

    printf("The cumulative return after %.2lf years is: %.2lf\n", time, amount);

    return 0;
}
/*
In this program, the user is asked to enter the principal amount. The program then calculates the cumulative return after 10 years at an interest 
rate of 8.75% using the formula for compound interest: A = P(1 + r)^t, where:

A is the amount of money accumulated after n years, including interest.
P is the principal amount (the initial amount of money).
r is the annual interest rate (in decimal).
t is the time the money is invested for, in years.
*/

/*

1. **How will you print the % character on the output screen?**
   - Answer: You can print the % character by using "%%" in the printf statement, like this: `printf("%%");`.

2. **What will be the output of following code?**
   ```c
   #define char int
   void main()
   {
       char i;
       printf("%d",sizeof(i));
   }
   ```
   - Answer: The output will be the size of an integer in bytes since `char` is defined as `int`. Typically, it would be 4 on many systems.

3. **Will the following statement compile successfully?**
   ```c
   printf("%d",printf("Hello"));
   ```
   - Answer: Yes, it will compile successfully. It prints "Hello" and then prints the length of string "Hello" which is 5.

4. **Is it possible to run a program successfully without including header file? For instance, will the following code run successfully?**
   ```c
   void main()
   {
       printf("Hello World\n");
       getch();
   }
   ```
   - Answer: It depends on compiler settings and versions but generally, it might throw warnings or errors because standard library functions like 
    `printf` and `getch` are declared in header files.

5. **What will be the output of the following print statement?**
   ```c
   printf("%d");
   ```
   - Answer: Undefined behavior as there is a format specifier but no corresponding argument.

6. **What will be the output of following code?**
   ```c
   #define rate 10 
   void main() 
   { 
       #define rate 20 
       printf("rate = %d",rate); 
   }
   ```
   - Answer: The output will be "rate = 20" because macro ‘rate’ redefined within ‘main’ function.

*/   