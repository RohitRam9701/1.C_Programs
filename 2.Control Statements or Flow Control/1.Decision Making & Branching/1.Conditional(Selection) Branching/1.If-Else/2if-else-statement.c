/*
if-else statement:  
        if (test_expression or condition or boolean_expression)
            {true-block statements};//if the condition is true,then the statement within curly braces, also called if-block statement,gets executed
        else
            {false-block statements};//if the condition is false, the statement within curly braces, also called else-block statement,gets executed
         statement x;    
                        //in both the cases, the control is transferred subsequently to the statement-x.
                        //curly braces can be removed if there are only single statements in both.
*/                        
#include<stdio.h>
#include<stdlib.h>      //line 136
#define ACCURACY 0.0001 //line-102
void main()
{
   int m = 100; /* local variable definition */
   /* check the boolean condition */
   if( m < 20 ) {
      /* if condition is true then print the following */
      printf("m is less than 20\n" );
   } else {
      /* if condition is false then print the following */
      printf("m is not less than 20\n" );
   }
   printf("value of m is : %d\n", m);

/*Write a program to find the maximum value between two numbers entered by the user.*/
    int num1, num2, max;
    printf("Enter the two numbers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2) 
    {
        max = num1;
    } else {
        max = num2;
    }
    printf("The maximum value is: %d\n", max);

 /*To find the ratio of (a+b) and (c-d) and prints the result, if c-d is not equal to zero, where a, b, c and  d are input numbers*/
 int a, b, c, d;
 float ratio;
 printf("\nEnter four integer values:");
 scanf("%d %d %d %d", &a, &b, &c, &d);
 if (c-d != 0)
 {
   ratio = (float)(a+b)/(float)(c-d);
   printf("Ratio = %f\n", ratio);
 } 
 else
   printf("\nc-d is zero\n");
     
 int n;
 printf("\n Enter number :");scanf("%d",&n);
 //To check whether the given number is positive or negative 
 if (n>0)printf("\npositive number");
 else if(n==0)printf("zero");
 if(n<0) printf("\nnegative number");
 //To check whether the given number is even or odd 
 if (n%2==0)
  printf("\nEven number");
 else 
  printf("\nOdd number");

 /*To calculate different discounts*/ 
 float amount, total;
 printf("\nEnter the total purchase amount (Rs.):");
 scanf("%f", &amount);
 if (amount < 3000.0)
 {
    total=0.9*amount;
    printf("\n10 percent discount is provided");
 }
 else
 {
    total=0.8*amount;
    printf("\n20 percent discount is provided");
 }
 printf("\nThe net amount payable = Rs. %0.2f",total); 
 // C Program to check whether the person is eligible to vote or not
	// declaring age of two person
	int p1_age = 15;
	int p2_age = 25;

	// checking eligibility of person 1
	if (p1_age < 18)
		printf("\nPerson 1 is not eligible to vote.\n");
	else
		printf("Person 1 is eligible to vote.\n");

	// checking eligiblity of person 2
	if (p2_age < 18)
		printf("Person 2 is not eligible to vote.\n");
	else
		printf("Person 2 is eligible to vote.");

 /*To evaluate the power series e^x= 1 + x + x^2/2! + x^3/3! + .... + x^p/p!, 0 < x < 1 */
 /*The power series contains the recurrence relationship of the type
              Tp = T(p-1) (x/p) for p > 1
              T1 = x for p = 1
              T0 = 1
   If T(p-1),previous term ,is known,then Tp,present term, can be easily found by multiplying  the previous term by x/p.Then
              e^x = T0 + T1 + T2 + ..... + Tp = sum
*/
 int p, Count;
 float x, term, sum;
 printf("\nEnter value of x:");//x=0,0.1,0.5,0.75,0.99,1
 scanf("%f", &x);
 p = term = sum = Count = 1;
 while (p <= 100)
 {
   term = term * x/p;
   sum = sum + term;
   Count = Count + 1;
   if (term < ACCURACY)
     p = 999;
   else 
     p = p + 1;       
 }
 printf("\nTerms = %d Sum = %f\n", Count, sum); 
 /*
 The program uses count to count the no of terms added. The program stops when the value of the term is less than 0.0001(ACCURACY).
 Note that when a term is less than ACCURACY , the value of p is set equal to 999(a no. higher than 100) and therefore the while loop terminates.
 The results are printed outside the while loop.
 */

    /*To print the marks of 4 subjects of a student & show the student has passed if marks of each subject is greater than 30 otherwise fail */
    int marks,sub1,sub2,sub3,sub4,count=0;
    printf("\n marks of 1st subject:");scanf("%d",&sub1);
    printf("\n marks of 2nd subject:");scanf("%d",&sub2);
    printf("\n marks of 3rd subject:");scanf("%d",&sub3);
    printf("\n marks of 4th subject:");scanf("%d",&sub4);
    marks=sub1+sub2+sub3+sub4;
    if(sub1>30) count++;
    if(sub2>30) count++;
    if(sub3>30) count++;
    if(sub4>30) count++;
    if (count>=2) printf("\n student has passed with total:%d",marks);
    else printf("\n student has failed to pass");

/*To read a value in the range 1-12 and print name of the month and the next month*/
    char month[12][20] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    int i;
    printf("\nEnter the month value:");
    scanf("%d",&i);
    if (i<1 || i>12)
    {
      printf("\nIncorrect value!!\nPress any key to terminate the program...");
      exit(0);
    }  
    if (i!=12)
      printf("\n%s followed by %s",month[i-1],month[i]);
    else
      printf("\n%s followed by %s",month[i-1],month[0]);         
}