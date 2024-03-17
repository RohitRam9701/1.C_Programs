#include<stdio.h>
int main()
{
/* To generate the series of n terms :2,22,222,2222,22222,...,n,value of n being taken as input*/
    int n, i, t; // Declare variables. 'n' is the number of terms, 'i' is the loop counter, 't' is the term in the series.
    printf("\n How many terms in series?/Enter total terms:"); // Ask the user for the number of terms.
    scanf("%d",&n); // Read the user's input into 'n'.
    // Start a loop that runs 'n' times.
    for(i = 0,t = 0; i < n; i++)
    {
        // In each iteration of the loop, 't' is multiplied by 10 and 2 is added to it. This effectively appends a '2' to the end of 't'.
        t = t*10 + 2;
        printf("  %d  ",t); // Print the current term in the series.
    }
    /* This process is repeated 'n' times, so 't' ends up being a number composed of 'n' number of '2's.
    For example, if 'n' is 5, the series would be 2, 22, 222, 2222, 22222. So, 't' will hold the last term of this series after the loop is 
    executed 'n' times. For 'n' = 5, 't' would be 22222 at the end of the loop. */

/* To generate the given series upto n terms : 1, 3, 6, 10, 15,..., n terms; value of n being taken as input*/
    int k, num, trm, cd; // 'num' is the number of terms, 'k' is the loop counter, 'trm' is the term in the series, 'cd' is the common difference.
    printf("\n Enter total terms in series:"); // Ask the user for the number of terms.
    scanf("%d",&num); // Read the user's input into 'num'.
    
    // Start a loop that runs 'num' times.
    for(k = 0, trm = 0, cd = 1; k < num; k++)
    {
        trm = trm + cd; // In each iteration of the loop, 'trm' is incremented by 'cd'.
        printf(" %d ", trm); // Print the current term in the series.
        cd = cd + 1; // Increment the common difference 'cd' by 1.
    }
    /* This process is repeated 'num' times, so 'trm' ends up being the nth term of the series.
    For example, if 'num' is 5, the series would be 1, 3, 6, 10, 15. So, 'trm' will hold the last term of this series after the loop is executed 
    'num' times. For 'num' = 5, 'trm' would be 15 at the end of the loop. */

/* To find the sum of the terms of an A.P. series upto a certain number of terms using a for loop*/
    float sum = 0, term, ft, c_d;
    int number, j;
    printf("\nEnter first term of A.P.: ");          scanf("%f", &ft);
    printf("\nEnter common difference of A.P.: ");   scanf("%f", &c_d);
    printf("\nEnter number of terms to add: ");      scanf("%d", &number);
    term = ft;    // The variable term is initialized with the value of the first term ft
    for( j = 1; j <= number; j++ )  // j = loop counter
    {
        sum += term;     // The first term is added to the variable sum
        term += c_d;     // The new term is calculated by adding the current term with the common difference c_d
    }
    printf("\nThe required sum up to %d terms is %0.2f", number, sum); // The final sum up to `number` terms is printed

    return 0;
}