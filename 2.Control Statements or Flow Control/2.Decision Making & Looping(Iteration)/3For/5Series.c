#include<stdio.h>
void main()
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
    int k, num, term, cd; // 'num' is the number of terms, 'k' is the loop counter, 'term' is the term in the series, 'cd' is the common difference.
    printf("\n Enter total terms in series:"); // Ask the user for the number of terms.
    scanf("%d",&num); // Read the user's input into 'num'.
    
    // Start a loop that runs 'num' times.
    for(k = 0, term = 0, cd = 1; k < num; k++)
    {
        term = term + cd; // In each iteration of the loop, 'term' is incremented by 'cd'.
        printf(" %d ", term); // Print the current term in the series.
        cd = cd + 1; // Increment the common difference 'cd' by 1.
    }
    /* This process is repeated 'num' times, so 'term' ends up being the nth term of the series.
    For example, if 'num' is 5, the series would be 1, 3, 6, 10, 15. So, 'term' will hold the last term of this series after the loop is executed 
    'num' times. For 'num' = 5, 'term' would be 15 at the end of the loop. */
}