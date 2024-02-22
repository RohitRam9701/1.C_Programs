#include <stdio.h>

int main() 
{
/*1.Write a program to determine and print the sum of the following harmonic series for a given value of n:    1 + 1/2 + 1/3 +...+1/n
    The value of n should be given interactively through the terminal.*/

    int n;
    float sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    printf("Sum of the harmonic series up to %d terms = %.2f\n", n, sum);

/*2.The price of one kg of rice is Rs. 16.75 and one kg of sugar is Rs. 15. Write a program to get these values from the user and display the prices 
    as follows: 
    ***LIST OF ITEMS ***
    Item      Price   
    Rice      Rs 16.75
    Sugar     Rs 15.00 */

    float ricePrice, sugarPrice;
    
    printf("Enter the price of rice: Rs ");
    scanf("%f", &ricePrice);
    
    printf("Enter the price of sugar: Rs ");
    scanf("%f", &sugarPrice);
    
    printf("***LIST OF ITEMS ***\n");
    printf("Item\tPrice\n");
    printf("Rice\tRs %.2f\n", ricePrice);
    printf("Sugar\tRs %.2f\n", sugarPrice);
    
/*3.Write program to count and print the number of negative and positive numbers in a given set of numbers. Test your program with a suitable set 
    of numbers. Use scanf to read the numbers. Reading should be terminated when the value 0 is encountered.*/

    int num, positiveCount = 0, negativeCount = 0;
    
    printf("Enter a set of numbers (terminate with 0):\n");
    
    while (1) {
        scanf("%d", &num);
        
        if (num == 0)
            break;
        
        if (num > 0)
            positiveCount++;
        else
            negativeCount++;
    }
    /*
    do {
        scanf("%d", &num);

        if (num > 0) {
            positiveCount++;
        } else if (num < 0) {
            negativeCount++;
        }
    } while (num != 0);    
    */
    
    printf("Positive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);
    
/*4.Write a program to do the following:
    (a) Declare x and y as integer variables and z as a short integer variable.
    (b) Assign two 6 digit numbers to x and y
    (c) Assign the sum of x and y to z 
    (d) Output the values of x, y and z
    Comment on the output.*/    

    int x, y;
    short z;
    
    x = 123456;
    y = 654321;    
    z = x + y;
    
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    /*Comment: The program assigns two 6-digit numbers to `x` and `y` variables, and then calculates their sum and assigns it to `z`. Since the sum 
      of the two numbers exceeds the maximum value that can be stored in a `short int`, the result may be incorrect and overflow may occur.*/

    return 0;
}    
/*  
 A programmer would like to use the word DPR to declare all the double-precision floating point values in his program. How could he achieve this?

-- The programmer can use the typedef keyword to create a data type identifier for double-precision floating point values. For example:
            typedef double DPR;
   After this declaration, the programmer can use the identifier "DPR" instead of "double" to declare double-precision floating point variables.
   
INTERVIEW QUESTIONS:

1 Is it possible to declare an identifier that starts with an underscore?
-- Yes, it is possible to declare an identifier that starts with an underscore in C. However, it is generally recommended to avoid using identifiers 
   that start with an underscore, especially in global scope, as they are often reserved for system-level identifiers.

2 Is it possible to declare an identifier that ends with an underscore?
-- Yes, it is possible to declare an identifier that ends with an underscore in C. There are no specific restrictions on the ending characters of 
   identifiers in C.

3 What is the return type of printf function?
-- The return type of the `printf` function in C is `int`. It returns the number of characters successfully written to the output stream, or a 
   negative value if an error occurs.

4 What is the difference between declaring and defining a variable?
-- In C, declaring a variable involves specifying its type and name without allocating memory for it. For example:
   int x; // Declaration of variable 'x'
   
   Defining a variable, on the other hand, not only specifies its type and name but also allocates memory for it. For example:   
   int x = 5; // Definition of variable 'x' with an initial value of 5

   In summary, declaring a variable is informing the compiler about the existence of a variable, while defining a variable is both declaring it and 
   allocating memory for it.

5 What is long long int?
-- `long long int` is a data type in C that is used to represent larger integer values. It is an extension to the standard `int` type and provides 
   a larger range of values. It typically occupies 8 bytes of memory and can store integers in the range of approximately -9 quintillion to 9 
   quintillion.

6 What is the return type of scanf function?
-- The return type of the `scanf` function in C is `int`. It returns the number of input items successfully matched and assigned, which can be used 
   for error checking or validating user input.*/