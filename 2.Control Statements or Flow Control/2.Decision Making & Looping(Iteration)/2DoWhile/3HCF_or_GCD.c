/* To find the HCF (Highest Common Factor) or GCD (Greatest Common Divisor) of 2 numbers using do-while loop. */
#include <stdio.h>
int main()
{
    // using the Euclidean algorithm 
    /* Declare four integer variables: divisor, dividend, rem (remainder), and hcf (Highest Common Factor). */
    int divisor, dividend, rem, hcf;

    /* Prompt the user to enter two numbers, which are stored in the variables dividend and divisor. */
    printf("Enter two numbers: ");
    scanf("%d %d", &dividend, &divisor);

    // The loop continues until rem becomes 0
    do {
        // Calculate the remainder of dividend divided by divisor
        // For example, if dividend is 12 and divisor is 15, rem will be 12
        rem = dividend % divisor;

        // Update dividend to the value of divisor
        // For example, if divisor was 15, dividend will now be 15
        dividend = divisor;

        // Update divisor to the value of rem
        // For example, if rem was 12, divisor will now be 12
        divisor = rem;
    } while (rem != 0);
/*
1. Initially, `dividend` is 12 and `divisor` is 15.

2. In the first iteration of the loop, `rem` is calculated as the remainder of `dividend` divided by `divisor`, i.e., `12 % 15`, which equals 12.

3. Then `dividend` is updated to the value of `divisor` (15), and `divisor` is updated to the value of `rem` (12).

4. The loop continues because `rem` is not zero.

5. In the second iteration, `rem` is now `15 % 12`, which equals 3. `dividend` becomes 12, and `divisor` becomes 3.

6. The loop continues again because `rem` is not zero.

7. In the third iteration, `rem` is now `12 % 3`, which equals 0. `dividend` becomes 3, and `divisor` becomes 0.

8. Now, the loop ends because `rem` is zero.

9. At this point, `dividend` is 3, which is the HCF of 12 and 15. So, `hcf` is assigned the value of `dividend` (3).
*/
    // At this point, dividend is the HCF of the original two numbers
    // For example, if the original numbers were 12 and 15, dividend (and thus HCF) will be 3
    hcf = dividend;
    /* The value of dividend (the HCF) is then printed to the console. */
    printf("The required HCF of %d ", hcf);

    /* The second part of the code is another method to find the HCF of two numbers. It uses a decrementing loop to check from the minimum of the 
    two numbers down to 1, finding the highest number that divides both input numbers evenly. This number is then printed as the HCF. However, 
    this method is less efficient than the Euclidean algorithm used in the first part of the code. */

    /* Declare three integer variables: n1, n2, min (minimum), and hcf (Highest Common Factor). */
    int n1, n2, min, HCF = 1;  // min = minimum

    /* Prompt the user to enter two numbers, which are stored in the variables n1 and n2. */
    printf("\nEnter two numbers: ");
    scanf("%d %d", &n1, &n2);

    /* Determine the minimum of the two numbers. */
    min = (n1 < n2) ? n1 : n2;

    /* Initiate a do-while loop. Inside the loop, check if the current minimum divides both numbers evenly. If it does, update hcf to the current 
    minimum and break the loop. Otherwise, decrement the minimum. */
do
{
    // Check if both n1 and n2 are divisible by min
    // For example, if n1 is 12, n2 is 15, and min is 3, then both 12 and 15 are divisible by 3
    if (n1 % min == 0 && n2 % min == 0)
    {
        // If both numbers are divisible by min, then min is a common factor
        // In this case, min (which is 3) is a common factor of 12 and 15
        HCF = min;

        // Since we're starting from the minimum of n1 and n2 and decrementing,
        // the first common factor we find will be the Highest Common Factor (HCF)
        // So, we can break the loop as soon as we find a common factor
        break;
    }

    // If min is not a common factor, decrement min and check again in the next iteration
    min--;
} while (min > 0);  // Continue the loop as long as min is greater than 0

    /* Print the HCF of the two numbers. */
    printf("HCF of %d and %d is %d\n", n1, n2, HCF);

    return 0;
}
/*
Enter two numbers: 12 18
HCF of 12 and 18 is 6
*/
/*
Enter two numbers: 24 36
HCF of 24 and 36 is 12
*/
/*
Enter two numbers: 60 90
HCF of 60 and 90 is 30
*/
/*
Enter two numbers: 72 48
HCF of 72 and 48 is 24
*/
/*
Enter two numbers: 72 72
HCF of 72 and
*/