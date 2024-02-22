                                                /*Application of break and continue statement in loop*/
/*When the break statement is encountered in a loop,the execution of the loop terminates and the control of execution goes to the statement just 
  after the loop structure.
  When the continue statement is encountered in the execution of loop,the rest of the statements in the loop after the continue statement are 
  ignored and the control of execution goes to beginning of the loop. 
*/
/*To display the sum of the entered nos. on entering zero(0) using break statement*/
#include<stdio.h>
void main()
{
 int n,s=0;
 while(1)
 {
  printf("\n Enter number:");scanf("%d",&n);
  if (n==0) 
  break;
  s+=n;
 }
printf("\n Sum of numbers:%d",s);  
}