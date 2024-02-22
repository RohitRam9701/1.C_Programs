#include <stdio.h>
int main() 
{
/*a simple C program that uses a switch case statement to compute the number of occurrences of the various numeric digits in a given number:*/
    long long num;
    int i, digit, count[10] = {0};

    printf("Enter a number: ");
    scanf("%lld", &num);

    while(num != 0) {
        digit = num % 10;
        switch(digit) {
            case 0: count[0]++; break;
            case 1: count[1]++; break;
            case 2: count[2]++; break;
            case 3: count[3]++; break;
            case 4: count[4]++; break;
            case 5: count[5]++; break;
            case 6: count[6]++; break;
            case 7: count[7]++; break;
            case 8: count[8]++; break;
            case 9: count[9]++; break;
        }
        num /= 10;
    }

    printf("Count of each digit in the given number is: \n");
    for(i = 0; i < 10; i++) {
        printf("Digit %d: %d\n", i, count[i]);
    }
//  To get the desired vowel printed  
    char vowel = 'e';

    switch (vowel) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel\n", vowel);
            break;
        default:
            printf("%c is not a vowel\n", vowel);
    }

    return 0;
}
/*
**Nesting is allowed for if, If else and Switch.
-----------------------------------------**Difference between if-else and switch in tabular form-------------------------------------------------

Feature	                                            if-else	                                                  switch
Number of Conditions (choices or cases) Can handle one or more conditions.                    Used when there is a single condition with multiple 
                                                                                              possible outcomes.

Value type(Condition-Type)              Can handle various types (boolean,  relational,	      Typically works with discrete values like integers,
                                        logical, integers, etc.)                              characters or strings, and enumeration constants.

Execution flow	                        Linear search through conditions                      More efficient binary search (jump table)

Default behavior	                    else block executes if no condition matches	          default case executes if no value matches (optional)

Use case	                            Simple decisions with two options                     Making multiple choices based on a value

Readability	                            Can become complex with nested if-else	              Generally clearer for multiple choices

Performance	                            Less efficient for many choices	(conditions)          More efficient for many choices

Syntax                                  Uses the keywords `if`, `else if`, and `else`.        Uses the keyword `switch` for the condition and 
                                                                                              `case` for each possible value. 
*/