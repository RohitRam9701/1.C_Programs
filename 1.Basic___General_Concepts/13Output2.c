/*To print a number or a character entered by user*/
#include<stdio.h>
#include<conio.h>
int main()
{   
    int a;
    printf("Enter a number:");    
    scanf("%d", &a);
    printf("\nNumber entered by user:%d",a);
    getch();
    int x;
    printf("\nEnter a number:",x);    
    scanf("%d",&x);
    printf("\nNumber entered by user:%d",x);
    printf("\nNumber entered by user:%d",'a');
    printf("\nCharacter entered by user:%c",97);
    printf("\nNumber entered by user:%d",56);
    printf("\nCharacter entered by user:%c",'b'); 
    char y;
    y = 100;
    printf("\ncharacter:%c",y);   
    getchar();//getchar() can be neglected in such a format
    return 0;
}
//getch() needs to use ' #include<conio.h> ' but getchar() does not need to use it.
/*
Enhancing the Readability of Output

Computer outputs are used as information for analysing certain relationships between variables and for making decisions. Therefore the 
correctness and clarity of outputs are of utmost importance. While the correctness depends on the solution procedure, the clarity depends 
on the way the output is presented. Following are some of the steps we can take to improve the clarity and hence the readability and 
understandability of outputs.

1 Provide enough blank space between two numbers.
2. Introduce appropriate headings and variable names in the output. 
3. Print special messages whenever a peculiar condition occurs in the output.
4. Introduce blank lines between the important sections of the output.

The system usually provides two blank spaces between the numbers. However, this can be increased by satricling a suitable field width for 
the numbers or by introducing a 'tab' character between the specifications For example, the statement
                printf("a = %d\t b = %d", a, b);
will provide four blank spaces between the two fields. We can also print them on two separate lines by using the statement
                printf("a = %d\n b = %d", a, b);

Massages and headings can be printed by using the character strings directly in the printf statement.
Examples:
                printf("\n OUTPUT RESULTS \n"); 
                printf("Code\t Name\t Age\n"); 
                printf("Error in input data\n");
                printf("Enter your name\n");
*/
/*--------------------------------Always Remember------------------------
While using getchar, care should be exercised to clear any unwanted characters in the input stream.

Do not forget to include <stdio.h> headerfiles when using functions from standard input/output library.

Do not forget to include <ctype.h> header file when using functions from character handling library.

Provide proper field specifications for every variable to be read or printed. 

Enclose format control strings in double quotes.

Do not forget to use address operator & for basic type variables in the input list of scanf.

Do not specify any precision in input field specifications.

Do not provide any white-space at the end of format string of a scanf statement.

Do not use commas in the format string of a scanf statement.

Use double quotes for character string constants.

Use single quotes for single character constants.

Provide sufficient field width to handle a value to be printed.

Be aware of the situations where output may be imprecise due to formatting.

Do not forget to close the format string in the scanf or printf statement with double quotes.

Using an incorrect conversion code for data type being read or written will result in runtime error.

Do not forget the comma after the format string in scanf and printf statements.

Not separating read and write arguments is an error.

Using an address operator & with a variable in the printf statement will result in runtime error.

stdio.h stands for Standard Input/Output Header. This header file defines a set of functions and macros that provide input and output 
capabilities for C programs.
*/