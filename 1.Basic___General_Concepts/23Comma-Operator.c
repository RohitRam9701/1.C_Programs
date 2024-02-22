/*
**Sequencing or Sequential-evaluation or Comma operator(,): It can be used to link the related expressions together.A comma-linked list of expressions 
                                                            are evaluated left to right and the value of right-most expression is the value of the 
                                                            combined expression.
                                           In short,        Evaluates multiple expressions from left to right and returns the value of the last 
                                                            expressioni.e. Evaluates both its operands and returns the value of the second operand.
             In for loops:       for(n = 1, m = 10, n<=m; n++,m++)                                  
             In while loops:     while(c = getchar(),c != '10')
             Exchanging values:  t=x,x=y,y=t;
*/
#include<stdio.h>
void main()
{
  //Comma operator
  int p,q,r;
  r=(p=10,q=12,p+q);
  printf("\nValue of r:%d",r);
}