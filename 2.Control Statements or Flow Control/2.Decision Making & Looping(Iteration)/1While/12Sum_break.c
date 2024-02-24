/*When the break statement is encountered in a loop, the execution of the loop terminates and the control of execution goes to the statement just 
  after the loop structure. In short, the break statement is used to come out of a loop forcibly.*/

#include<stdio.h>
int main()
{
/* To display the sum of the entered nos. on entering zero(0) using break statement*/
  int n,s=0;
  while(1)             // it is an infinite while loop i.e. a loop whose condition part is always True (due to value 1)
  {
  printf("\n Enter number:");
  scanf("%d",&n);
  if (n==0)            // when input number is 0, the break statement gets executed, thus skipping the rest of the loop and prints the total sum.
  break;
  s+=n;
  }
  printf("\n Sum of numbers:%d",s);

/* To find the sum of an arbitrary number of positive values input by the user*/
  int c = 0, num, sum = 0;
  printf("\nEnter numbers to add. Enter a negative number to end list): ");
  while(1)
  { scanf("%d",&num);
    if (num < 0) 
    break;
    sum += num;
    ++c;
  }
  printf("\nSum of %d numbers is %d", c, sum);
  return 0;       
}