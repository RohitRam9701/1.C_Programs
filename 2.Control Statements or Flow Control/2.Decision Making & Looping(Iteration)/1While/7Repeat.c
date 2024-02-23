/* The while loop is more suited for execution of a loop unknown number of times depending on certain calculations or user input. */
/* The while loop is used to repeat a program until a certain condition is met. */

/* Repeating a program: Calculate The square of a number as many times as the user wants without restarting the program each time. */
#include <stdio.h>
int main()
{
    char repeat = 'y';
    float num; 
    while ( repeat == 'y' || repeat == 'Y' )
    {
        printf("\n Enter any decimal number to square: ");
        scanf("%f", &num);
        printf("\n The square of %f is %f\n", num, num*num);
        puts("\n Press 'Y' to repeat with a new number or any other key to exit: ");
        fflush(stdin);
        repeat = getchar();
    }
    return 0;
}
/* The above code is better suited for a do-while loop.*/
/*Note : Instead of a character type prompt, one can use an integer type prompt with values 0 and 1. */