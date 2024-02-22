/*To print an integer entered by you*/
#include"stdio.h"
void main()
{
	int a;
	printf("Enter an integer:");//printf shows the output written within the inverted commas
	scanf("%d",&a);//scanf inputs the input
	printf("Integer that you have entered is %d.\n",a);
  int x, y=10;
  char z='a';
  x=y+z;//z = 97 as 'a'=97 
  printf("\nx:%d",x);//output = 107
}
/*Constants: 
     A.Numeric constants:Comma or blank space or non-digit characters is not allowed
       1.Integer constants
         a.decimal:e.g.;123,-45,+78,0.
         b.octal:Must start with 0. e.g.;0123,0,035.
         c.hexadecimal:Must start with 0x(or 0X).e.g.; 0xbcd,0x,0x2,0x9F.
       2.Real constants(Floating point constants):
         *Must have a decimal point and it can be written in either a fractional form or as an exponential form
         *mantissa part and exponential part should be seperated by e or E
         *exponent must have at least one +ve or -ve integer(default is +ve) but mantissa may have a +ve or -ve sign.
     B.Character constants:
       1.Single character constants :single alphabet,single digit or single secial symbol enclosed in single quotes like 'A' having 
         maximum character length of one character.
         e.g.;printf("Number entered by user:%d",'a');//output:97
              printf("Character entered by user:%c",97);//output:a
       2.String constants :Any combination of characters enclosed within double quotes like "A" or "This is a String".
         e.g.;"Hello!" ,"?...!","5+3","1959" etc.
       **'X' is not equal to "X" and the former has an integer value but not the latter
       3.Backslash character constants:Also known as Escape sequences
  Variables:Same rule as in identifiers  
*/	  
/*
  Each character constant represents an integer value.In most programming languages, including C, characters are internally represented as integer 
  values. The character constants are essentially integer constants with their corresponding ASCII or Unicode values.So, It is possible to perform 
  arithmetic operations on character constants. Since character constants are represented as integers, you can perform arithmetic operations on 
  them, such as addition, subtraction,multiplication, and division. The result will be an integer value.

In C, the following are invalid constants and the reasons why:

1. 5 * 1.5: This is not a constant but an expression involving multiplication. Constants are fixed values, and this expression involves the 
            multiplication operator.

2. +100: This is a valid constant, representing the positive integer value 100.

3. 75.45 E-2: This is a valid constant, representing the floating-point value 0.7545. The 'E' notation is used to represent scientific notation, 
              where 'E-2' means multiplying the number by 10 raised to the power -2.

4. "15.75": This is not a constant but a string literal. String literals are enclosed in double quotation marks and are not considered numerical 
            constants.

5. -45.6: This is a valid constant, representing the negative floating-point value -45.6.

6. -1.79 e + 4: This is not a valid constant due to incorrect syntax. The exponent should be written as a lowercase 'e', not 'E', and there should 
                be no space between the exponent symbol and the exponent value. The correct representation would be -1.79e+4.

7. 0.00001234: This is a valid constant, representing the floating-point value 0.00001234.

To summarize, the invalid constants are: 5 * 1.5, "15.75", and -1.79 e + 4 (with incorrect syntax).

*/