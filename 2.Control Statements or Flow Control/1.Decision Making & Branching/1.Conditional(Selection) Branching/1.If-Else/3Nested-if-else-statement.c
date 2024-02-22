/*
 Nesting of if-else statements: 
    if (condition1)
      {
            if (condition2)
            {
              statement 1;
            }
            else
            {
              statement 2;
            } 
      }
    else
      {
        statement 3;
      }  
    statement-x;   

or,

    if (condition1)
      {
        statement 1;
      } 
    else 
    {
        if (condition2)
        {
          statement 2;
        }
        else
        {
          statement 3;
        } 
    }
    statement-x;

or,
    if (condition1)
      {
        if (condition2)
        {
          statement 1;
        }
        else
        {
          statement 2;
        } 
      }
    else 
    {
        if (condition3)
        {
          statement 3;
        }
        else
        {
          statement 4;
        } 
    }  
    statement-x;

or,     
    if (condition1)
        if (condition2)
           if (condition3)
              statement1;
           else 
              statement2;
        else 
            statement3;
    else 
         statement4;   
    statement-x;

  //At last, the control is transferred to statement-x.  

  //Braces should be used to clearly define statement blocks under if/else parts to prevent logical errors.         
*/

#include<stdio.h>
int main()
{
   int a = 100, b = 200;   
   if( a == 100 ) /* check the boolean condition */
   {   
      
      if( b == 200 ) /* if condition is true then check the following */
      {
         /* if condition is true then print the following */
         printf("Value of a is 100 and b is 200\n" );
      }
   }   
   printf("Exact value of a is : %d\n", a );
   printf("Exact value of b is : %d\n", b );

/*Empty statement*/
    int m = 1;
    if (m == 1)
    {
        printf(" Delhi ");
        if (m == 2)
            printf("Chennai");
        else
            printf("Bangalore");
    }
    else;    //empty statement
    printf(" END");  //output: Delhi Bangalore END

/*To check whether the input no. is positive or not*/
    int num;
    printf("\nEnter a number:");
    scanf("%d", &num);
    if (num<0)
     printf("\nNumber is negative");
    else
    {
      if(num>0)
       printf("\nNumber is positive");
      else
       printf("\nNumber is zero");
    }
/*To check whether the input no. is even or odd and whether ends with 6 or 7*/
    if (num%2==0)//outer if statement
      {
        if (num%10==6)//inner if statement within outer if
         printf("\nNumber is even and ends with 6");
        else//inner else statement within outer if
         printf("\nNumber is even, but does not end with 6"); 
      }
    else //outer else statement
      {
        if (num%10==7)//inner if statement within outer else
         printf("\nNumber is odd and ends with 7");
        else//inner else statement within outer else
         printf("\nNumber is odd, but does not end with 7"); 
      }
  /*To print the largest of the input 3 nos.*/    
    int A, B, C;
    printf("\nEnter three values:");
    scanf("%d %d %d", &A, &B, &C);
    printf("\nLargest value is ");
    if (A>B)
    {
      if(A>C)
       printf("%d\n",A);
      else
       printf("%d\n",C); 
    }
    else
    {
      if(C>B)
       printf("%d\n",C);
      else
       printf("%d\n",B);
    }

    /*In a commercial bank, due to an incentive policy of giving bonus to all , a bonus of 2 % of balance is given to everyone, irrespective of 
      their balance, and 5 % is given to female account holders if their balance is more than Rs.5000*/
    float balance, bonus;
    char sex,F,M;
    printf("Enter balance: ");
    scanf("%f", &balance);
    printf("Enter sex (M/F): ");
    scanf(" %c", &sex);
    if (sex == 'F') 
    {
        if (balance > 5000)
            bonus = 0.05 * balance;
        else
            bonus = 0.02 * balance;
    } 
    else 
    {
        if (sex == 'M')
        bonus = 0.02 * balance;
    }
    balance += bonus;
    printf("New balance: %.2f\n", balance);    
    

  /*To print the maximum & minimum among three input numbers*/    
    int x,y,z,mx,mn;
    printf("\n Enter 3 numbers:");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y)
    {
        if(x>z)
        {
           if(y>z)
            {
                mx=x;
                mn=z;
            }
            else
            {
            mx=x;
            mn=y;
            }
        }
        else
        {
            mx=z;
            mn=y;
        }  
    }   
    else
    {
      if(y>z)
      {
          if(x>z)
          {
              mx=y;
              mn=z;
          }
          else
          {
            mx=y;
            mn=x;
          }
      }
      else
      {
          mx=z;
          mn=x;
      }
    }  
   printf("\n Maximum :%d Minimum:%d",mx,mn); 

/*colour code*/   
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

/*To check if 3 line segments can form a triangle or  not*/
    int p, q, r;
    printf("\nEnter the first line segment length: ");scanf("%d", &p);
    printf("\nEnter the second line segment length: ");scanf("%d", &q);
    printf("\nEnter the third line segment length: ");scanf("%d", &r);
    if (p+q> r)        /*Checks Condition1*/
      { if (q+r> p)      /*If Condition1 is True, checks Condition2*/
        { if (r+p > q ) /*If both Condition1 & Condition2 are True checks Cond. 3*/ 
            printf("\nLine segments form a triangle"); /*When all Condtn. True*/
          else
            printf("\nLine segments CANNOT form triangle"); /*If Condition3 False*/
        }
        else
          printf("\nLine segments CANNOT form triangle");   /*If Condition2 False*/
      }
    else
      printf("\nLine segments CANNOT form triangle");       /*If Conditionl False*/
 
/*Dangling Else Problem
One of the classic problems encountered when we start using nested if...else statements is the dangling else.This occurs when a matching else is
not available for an if.The answer to this problem is very simple.Always match an else to the most recent unmatched if in the current block.In
some cases, it is possible that the false condition is not required . In such situations, else statement may be omitted
        "else is always paired with the most recent unpaired if"

Note :For nested if-else statements it always benefits by remembering that an else is always paired with the nearest unmatched if.

**
The "dangling else" problem refers to the ambiguity in some programming languages when an "else" clause could be associated with any "if" statement 
above it. Here's a simple example:

if (x > 0)
    if (y > 0)
        printf("x and y are positive");
    else
        printf("x is not positive");
In this code, it's unclear just by looking at it whether the "else" clause is associated with `if (x > 0)` or `if (y > 0)`. However, most languages 
like C, C++, Java, and Python follow the rule that an "else" clause is associated with the nearest "if" without an "else". So in this case, the 
"else" is associated with `if (y > 0)`.

To avoid this ambiguity, it's a good practice to use braces `{}` to clearly indicate which "if" an "else" is associated with:

if (x > 0) {
    if (y > 0)
        printf("x and y are positive");
} else {
    printf("x is not positive");
}
Now, it's clear that the "else" clause is associated with `if (x > 0)`. This is the intended behavior and there's no ambiguity. This is how you 
can solve the "dangling else" problem.
*/

//What will be the output when the following segment is executed?
  int k = 0;
  if (k >= 0)   //true
  if (k > 0)    //false
    printf("\nNumber is positive");
  else
    printf("\nNumber is negative"); //hence the output will be “Number is negative”

//What will be the output of the following code segment when it is executed?

  int a = 10, b = 5;
  if (a > b)
  {
    if(b > 5)
      printf("%d", b);
  }
  else
    printf("%d", a);   // a > b = true but b > 5 = false so, the code does not print anything.
  return 0;
}  