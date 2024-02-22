/*
Certain situations may require multiple nesting i.e. putting several blocks of if-else one within the other.

ex 1 :To get the probable shape depending on the number input as the no of sides
#include<stdio.h>
int main()
{
    int side;
    printf("\nEnter the number of sides:");
    scanf("%d", &side);
    if (side == 1)
     printf("\nFigure can be a circle");
    else
     {
        if (side == 2)
          printf("\nFigure with 2 sides");
        else
        {
            if (side == 3)
             printf("\nFigure can be a triangle");
            else
            {
               if (side == 4)
                printf("\nFigure can be a quadrilateral");
               else
               {
                   if (side == 5)
                    printf("\nFigure can be a pentagon");
                   else
                   {
                       if (side == 6)
                        printf("\nFigure can be a hexagon");
                       else
                        printf("\nFigure with sides more than 6");
                   }
               }
            }
        }                
     } 
    return 0; 
}

Note the following points of the above program:
 1. Only a single statement is executed when any condition becomes True under an if statement
 2. No if block has a nested if-else block within it.
 3. Only an else block has nested if-else block within it(except the last or innermost else)

Under such a situation you can do away(remove) with all the curly braces and indentations and write a much simpler version of the program in a style, 
called if-else ladder as follows:
*/
#include<stdio.h>
void main()
{
    int side;
    printf("\nEnter the number of sides:");
    scanf("%d", &side);
    if (side == 1)
        printf("\nFigure can be a circle");
    else if (side == 2)
        printf("\nFigure with 2 sides");
    else if (side == 3)
        printf("\nFigure can be a triangle");
    else if (side == 4)
        printf("\nFigure can be a quadrilateral");
    else if (side == 5)
        printf("\nFigure can be a pentagon");
    else if (side == 6)
        printf("\nFigure can be a hexagon");
    else
        printf("\nFigure with sides more than 6"); 
/*
Since each if statement has to execute a single statement in case it is true, the curly braces {} are not required for the printf() statements. 
Moreover the next if after an else option is written in the same line as the else. The structure is called a ladder as the shape of the program 
from line 57 to 70 looks like the rungs of a ladder(i.e.Ladder rungs are the horizontal steps that you step on when climbing up or down a ladder).
*/
/*
if-else-if ladder:
     if (condition 1)
     {
        code 1(statement 1);
     }
     else if (condition 2)
     {
        code 2(statement 2);
     }
     . 
     .
     .
     .
     else if (condition n)
     {
        code n(statement n);
     }     
     else
     {
        default statement;
     }
     statement-x;
*/     


/*colour code in nesting if else 
    int code;
    char* colour;    
    printf("\nEnter code: ");
    scanf("%d", &code);    
    if (code != 1)
        if (code != 2)
           if (code != 3)
              colour = "YELLOW";
           else 
              colour = "WHITE";
        else 
            colour = "GREEN";
    else 
         colour = "RED";   
    printf("\ncolour = %s", colour);
*/

/*colour code*/   
    int code;
    char* colour;    
    printf("\nEnter code: ");
    scanf("%d", &code);    
    if (code == 1)
        colour = "RED";
    else if (code == 2)
        colour = "GREEN";
    else if (code == 3)
        colour = "WHITE";
    else 
        colour = "YELLOW";    
    printf("\ncolour = %s", colour); 

/* value checking*/
    int p = 100; 
   /* check the boolean condition */
    if( p == 10 ) 
    {
      /* if condition is true then print the following */
       printf("Value of p is 10\n" );
    } 
   else if( p == 20 ) 
    {
      /* if else if condition is true */
       printf("Value of p is 20\n" );
    } 
    else if( p == 30 ) 
    {
      /* if else if condition is true  */
       printf("Value of p is 30\n" );
    } 
    else 
    {
      /* if none of the conditions is true */
       printf("\nNone of the values is matching\n" );
    }
    printf("Exact value of p is: %d\n", p);

/*To print the salary of an employee & thus his/her status */
    int salary;
    printf("\nEnter salary:");
    scanf("%d",&salary);
    if(salary < 1000 || salary > 10000) printf("Invalid Data"); 
    else if(salary < 5000) printf("Employee is clerk");
    else if(salary < 8000) printf("Employee is officer");
    else printf("Employee is manager");

/*To print the electric bill of a person/consumer on the given basis */
/*Unit_consumed      Charge_rate
    <75             Rs. 2/Unit
   >=75<150         Rs. 5/Unit
   >=150            Rs. 8/Unit*/
    int uc,bill;
    printf("\nEnter unit consumed:");
    scanf("%d",&uc);
    if(uc<75) bill=2*uc;
    else if(uc<150) bill=5*uc;
    else bill=8*uc;
    printf("\nBill amount to pay:%d",bill);

/*Grading of students in an academic institution*/  
/*Average Marks             Grade
   80 to 100                Honours(H)
   60 to 79                 First Division(1)
   50 to 59                 Second Division(2)
   40 to 49                 Third Division(3)
   0 to 39                  Fail(F)*/  
    int marks;
    char grade;
    printf("\nEnter marks:");
    scanf("%d", &marks);
    if (marks > 79)
      grade = 'H';
    else if (marks > 59)
      grade = '1';
    else if (marks > 49)
      grade = '2';
    else if (marks > 39)
      grade = '3';
    else 
      grade = 'F';
    printf("Grade:%c\n", grade);
/*An electric power distribution company charges its domestic consumers as follows:
  Consumption Units            Rate of Charge
   0 - 200                     Rs. 0.50 per unit
   201 - 400                   Rs. 100 plus Rs. 0.65 per unit excess of 200
   401 - 600                   Rs. 230 plus Rs. 0.80 per unit excess of 400 
   601 and above               Rs. 390 plus Rs. 1.00 per unit excess of 600*/
    int units, cust_num; 
    float charges;
    printf("Enter CUSTOMER NO. and UNITS consumed\n"); 
    scanf("%d %d", &cust_num, &units); 
    if (units <= 200)
      charges = 0.5 * units;
    else if (units <= 400)
      charges = 100+ 0.65*(units - 200);
    else if (units <= 600)
      charges = 230 +0.8*(units - 400);
    else
      charges = 390 + (units - 600); 
    printf("\n\nCustomer No: %d: Charges = %.2f\n",cust_num, charges);
   /*
Enter CUSTOMER NO. and UNITS consumed 101 150
Customer No:101 Charges = 75.00
Enter CUSTOMER NO. and UNITS consumed 202 225
Customer No:202 Charges = 116.25
Enter CUSTOMER NO. and UNITS consumed 303 375
Customer No:303 Charges = 213.75
Enter CUSTOMER NO. and UNITS consumed 404 520
Customer No:404 Charges 326.00
Enter CUSTOMER NO. and UNITS consumed 505 625
Customer No:505 Charges = 415.00
   */
  /*
Rules for Indentation:
When using control structures, a statement often controls many other statements that follow it. In such situations it is a good practice to use 
indentation to show that the indented statements are dependent on the preceding controlling statement. Some guidelines that could be followed while 
using indentation are listed below:

• Indent statements that are dependent on the previous statements; provide at least three spaces of indentation.
• Align vertically else clause with their matching if clause. • Use braces on separate lines to identify a block of statements.
• Indent the statements in the block by at least three spaces to the right of the braces.
• Align the opening and closing braces.
• Use appropriate comments to signify the beginning and end of blocks.
• Indent the nested statements as per the above rules. • Code only one clause or statement on each line.  
  */
/* Use of conditions without relational operators*/
    int num;
    printf("\nEnter an integer value (<5 digits): ");
    scanf("%d", &num);
    if (num/1000)
      printf("\nA 4 digit number");
    else if (num/100)
      printf("\nA 3 digit number");
    else if (num/10)
      printf("\nA 2 digit number");
    else 
      printf("\nA 1 digit number");

/* Program to check if 3 numbers are Pythagorean*/
    int a, b, c;
    printf("\nEnter the three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a*a + b*b == c*c)
      printf("\nThe numbers are Pythagorean"); 
    else if (b*b + c*c == a*a)
      printf("\nThe numbers are Pythagorean"); 
    else if ( c*c + a*a == b*b ) 
      printf("\nThe numbers are Pythagorean");
    else
      printf("\nThe numbers are NOT Pythagorean");

/* Program to check if year is a leap year or not*/
    int year;
    printf("\nEnter an year: ");scanf("%d", &year);
    if ( year%400 == 0 )                     /*Checks for millennium years divisible by 400*/
      printf("\nYear is a LEAP year");       /*Prints for millennium leap years*/
    else
    { if (year%100 == 0)                     /*If millennium year but not divisible by 400*/
        printf("\nYear is NOT a leap year"); /*Prints for millennium non-leap years*/
      else if ( year%4 == 0)                 /*Checks if non-millennium year divisible by 4*/ 
        printf("\nYear is NOT a leap year"); /*Prints if non-millennium leap year*/
      else
        printf("\nYear is a LEAP year");     /*Prints if all conditions are False*/
    }

/* Program to find the location of a Cartesian point*/ 
    int x, y; 
    printf("\nEnter the co-ordinates of a point separated by blank space: "); 
    scanf("%d %d", &x, &y);
    if (x > 0)                        /*Checks if x is positive*/
       {if (y > 0)                    /*Checks if y is positive*/
          printf("\nQuadrant-1");     /*It both x, y positive, then quadrant-1*/
        else if(y < 0)                /*Checks if y is negative*/
          printf("\nQuadrant-4");     /*If x positive, y negative then quadrant-4*/
        else                          /*If x positive & y neither positive, nor negative*/
          printf("\nx Axis");         /*i.e. x positive and y is zero then X Axis*/
        }
    else
         {if (x < 0)                   /*Checks if x is negative*/
            {if (y > 0)               /*Checks if y is positive*/
              printf("\nQuadrant-2"); /*If x negative, y positive, then quadrant-2*/
             else if (y < 0)          /*Checks if y is negative*/ 
              printf("\nQuadrant-3"); /*If x negative, y negative then quadrant-3*/
             else                     /*If x negative & y neither positive, nor negative*/ 
              printf("\nX Axis");     /*i.e. x negative and y is zero then X Axis*/
            } 
          else                        /*only option left for x is x equal to 0*/ 
            {if (y != 0)              /*If y not equal to 0*/
              printf("\nY axis");     /*If x is 0 and y not equal to 0, then Y Axis*/
             else                     /*Else if y equal to 0*/
              printf("\norigin");     /*Both x equal to 0 and y squal to 0, hence Origin*/
            }
         }          
}   
/*
1. What will be the output of the following If-else statement?
   if(x==5)
       printf("Condition is true\n");
   else
       printf("Condition Is false\n");
   - (a) String 'Condition Is true' Is printed,
   - (b) x is assigned the value 5 and string 'Condition is true' is printed,
   - (c) String 'Condition is false' is printed,
   - (d) None of the above is printed,
   - **Answer**: (b) x is assigned the value 5 and string 'Condition is true' is printed

2. For the following if-else construct, which of the following statements is correct?
   if(x >= 5 && x <= 10)
       printf("True");
   else
       printf("False");
   - (a) True if 5 <= x <= 10, false otherwise 
   - (b) True if x < 5 or x > 10, false otherwise
   - (c) True if x < 5 and x > 10, false otherwise
   - (d) None of the above
   - **Answer**: (a) True if 5 <= x <= 10, false otherwise

3. For the following if-else construct, which of the following statements is correct?

if( x%3 == 0 && x%7 == 0)
    printf("True");
else
    printf("False");

(a) True if the given positive integer x is a multiple of 3 and 7; false otherwise
(b) True if the given positive integer x is a multiple of 3 or 7; false otherwise
(c) False if the given positive integer x is a multiple of 3 and 7; true otherwise
(d) False if the given positive integer x is a multiple of 3 or 7; true otherwise
Answer: (a) True if the given positive integer x is a multiple of 3 and 7; false 

4. What will be the output of the following program?
   main()
   {
   x=5;
   if(x == 5)
    printf("Hello World");
   else
    printf("I am in else block");
   }
(a) String ‘Hello World’ is printed.
(b) String ‘I am in else block’ is printed.
(c) Nothing is printed.
(d) Compiler gives syntax error and the program is not executed.

**Answer**: (a) String ‘Hello World’ is printed.

*/