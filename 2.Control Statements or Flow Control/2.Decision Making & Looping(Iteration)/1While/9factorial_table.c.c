/* A factorial of an integer m is the product of consecutive integers from 1 to m. That is, factorial m = m! = m x (m-1) x .... x 1.
   Write a program that computes and prints a table of factorials for any given m. Use a while loop to compute the factorials. */
   
#include<stdio.h> 
int main() 
{
    int m, i = 1; // Declare two integer variables, m and i. Initialize i to 1.
    long long fact = 1; // Declare a long long variable fact to hold the factorial. Initialize it to 1.

    printf("Enter a number: "); // Ask the user to enter a number
    scanf("%d", &m); // Read the input number from the user and store it in the variable m

    printf("Factorial Table for %d:\n", m); // Print the heading for the factorial table

    // Start a while loop that continues as long as i is less than or equal to m
    while(i <= m)
    {
        fact *= i; // Multiply fact by i and store the result back in fact
        printf("%d! = %lld\n", i, fact); // Print the current value of i and its factorial
        i++; // Increment i by 1
    }

    return 0; // Return 0 to indicate that the program has finished successfully
}

