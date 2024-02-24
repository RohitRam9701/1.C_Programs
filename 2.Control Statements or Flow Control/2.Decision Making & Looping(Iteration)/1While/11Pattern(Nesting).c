/* Use of nested while loops to print pattern.*/
#include<stdio.h> 
int main()
{
    int n, count = 1, j; // Declare three integer variables: n, count, and j. Initialize count to 1.

    printf("Enter the value of n:"); 
    scanf("%d", &n); 

    // Start an outer while loop that continues as long as count is less than or equal to n
    while(count <= n)                  // This loop is used to count the number of lines.
    {
        j=1;                           // Star counter j is initialized to 1 for every new line (Reinitializing j to print stars in each line)

                                       // Start an inner while loop that continues as long as j is less than or equal to count
        while(j<=count)                // This loop is used to print the number of stars in a line.
        {
            printf("*");               // Print an asterisk
            ++j; //or, j++;            // Counter for number of stars incremented
        }

        printf("\n");                  // Print a newline character to move to the next line
        ++count; //or, count++;        // Increment count by 1
    }

    return 0;                          // Return 0 to indicate that the program has finished successfully
}
/*
 In C, both `++j` and `j++` will increment the value of `j` by 1. The difference between them is the order of operations:

- `++j` (pre-increment) increments the value of `j` first, then returns the incremented value. So if `j` was 1, after `++j`, `j` is 2.
- `j++` (post-increment) returns the current value of `j`, then increments `j`. So if `j` was 1, `j++` returns 1, but `j` becomes 2 afterwards.

However, in the code, the order of operations doesn't matter because the result of the increment operation isn't being used immediately. 
So `++j` and `j++` will have the same effect: they both increment `j` by 1.

The same applies to `++count` and `count++`.

This program prints a right-angled triangle pattern of asterisks. The number of rows in the triangle is determined by the value of `n` entered by 
the user. For example, if `n` is 3, the output will be:

*
**
***
*/