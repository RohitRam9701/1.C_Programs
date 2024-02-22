//Use sizeof operator to determine the length of arrays and structures where their sizes are not already known.

/*To find the Byte Length of different data types*/
#include<stdio.h>
void main()
{
    puts("\nProgram to print the size of different Data types");
    printf("\nThe size of an integer data is (in bytes) : %d", sizeof(int));
    printf("\nThe size of a short integer data is (in bytes) : %d", sizeof(short));
    printf("\nThe size of a long integer data is (in bytes) : %d", sizeof(long));
    printf("\nThe size of a float data is (in bytes) : %d", sizeof(float));
    printf("\nThe size of a double float data is (in bytes) : %d", sizeof(double));
    printf("\nThe size of a char data is (in bytes) : %d", sizeof(char));
}
/*
ALWAYS REMEMBER:

1.Be aware of side effects produced by some expressions.

2.Avoid any attempt to divide by zero. It is normally undefined. It will either result in a fatal error or in incorrect results.

3.It is illegal to apply modules operator % with anything other than integers.

4.Use spaces on either side of binary operator to improve the readability of the code. 
*/