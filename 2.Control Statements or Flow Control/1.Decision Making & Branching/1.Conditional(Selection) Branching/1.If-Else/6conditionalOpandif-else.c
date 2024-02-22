/*
if (x < 0)
   flag = 0;
else
   flag = 1;
 can be written as: flag = (x < 0) ? 0 : 1;

 Similarly,
 if (a >= b)
   max = a;
else
   max = b;
 can be written as: max = (a >= b) ? a : b; //if (a >= b) = true output: a , otherwise output: b

This complex equation can be written as
salary = (x != 40) ? ((x < 40) ? (4*x+100): (4.5*x+150)) : 300; 
The same can be evaluated using if...else statements as follows: 
                if (x <= 40)
                   if (x < 40)
                       salary = 4 * x+100;
                   else
                       salary = 300;
                else
                       salary = 4.5 * x+150;
When the conditional operator is used, the code becomes more concise. However, the readability is poot It is better to use if statements when 
more than a single nesting of conditional operator is required.
*/
#include<stdio.h>
#define MAXLOAN 50000
int main()
{
/*An employee can apply for a loan at the beginning of every 6 months,but he will be sanctioned the amount according to the following company rules: 
Rule 1: An employee cannot enjoy more than two loans at any point of time.
Rule 2: Maximum permissible total loan is limited and depends upon the category of the employee.*/
//A program to process loan applications and to sanction loans

    long int loan1, loan2, loan3, sancloan, sum23; 
    printf("Enter the values of previous two loans: \n"); 
    scanf("%ld %ld", &loan1, &loan2); //0  20000 or 1000 15000
    
    printf("\nEnter the value of new loan: \n"); 
    scanf("%d", &loan3);//45000 or 25000
    sum23=loan2+ loan3;
    sancloan = (loan1>0)? 0: ((sum23>MAXLOAN)?MAXLOAN - loan2: loan3);
    printf("\n\nPrevious loans pending: \n%ld %ld\n", loan1, loan2); //0 20000 or 1000 15000
    printf("Loan requested = %ld\n", loan3);//45000 or 25000
    printf("Loan sanctioned = %ld\n", sancloan);//30000 or 0
/*The program uses the following variables:
      loan3    - present loan amount requested
      loan2    - previous loan amount pending
      loan1    - previous to previous loan pending
      sum23    - sum of loan2 and loan3
      sancloan - loan sanctioned

The rules for sanctioning new loan are:
1. loan1 should be zero.
2. loan2+ loan3 should not be more than MAXLOAN.
Note the use of long int type to declare variables.*/

//Use the conditional operator to find the maximum out of three numbers input by the user.
   int x, y, z, m;
   printf("\nEnter three numbers: ");
   scanf("%d %d %d", &x, &y, &z);
   m=x>y?(x>z?x:z):(y>z?y:z);
   printf("\nMaximum: %d", m);

// Write a program to check if a number is even or odd with the help of conditional operators. 
  //int x;
    printf("\nEnter numbers: ");scanf("%d", &x);
    (x%2==0)?printf("The number is even"):printf("The number is odd");   

// Check the output//
   int p = 10, q = 15;
   p = (p<q) ? (q+p) : (q-p);//Since p<q is true, p becomes q+p which is 25
   printf("%d", p);

  int m;
  for (m = 1; m<5; m++)  //from m = 1 to m = 4
    printf("%d\n", (m%2) ? m : m*2);   
  //If m is odd (m % 2 is non-zero i.e, true), the expression evaluates to m itself (since m is already odd).
  //If m is even (m % 2 is zeroi.e, false), the expression evaluates to m * 2.  
  /*
  When m = 1, m%2 is 1 (which is true), so it prints 1.
  When m = 2, m%2 is 0 (which is false), so it prints 2*2 = 4.
  When m = 3, m%2 is 1 (which is true), so it prints 3.
  When m = 4, m%2 is 0 (which is false), so it prints 4*2 = 8.
  */
  return 0;
}  