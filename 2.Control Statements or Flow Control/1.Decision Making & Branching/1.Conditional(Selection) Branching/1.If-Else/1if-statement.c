/* Simple if statement or if without else statement : 
              if (test_expression or condition or boolean_expression)
                {
                  statement-block;//single statement or group of statements
                }                 //curly braces can be ignored when there is only single statement
              statement-x;//if the expression is false,the statement block is skipped and the execution will jump to the statement-x i.e. the 
                            control passes to statement-x.
                          //when the condition is true both the statement-block and statement-x are executed in sequence.              
              //It is better to avoid float operands in conjunction with the equal /not equal condition checking operators.

Note : The braces are needed only if the body contains two or more statements. However, it is a good practice to use braces even if the 
       body has only one statement.              
*/
#include<stdio.h>
void main()
{
   int m = 10;
   if( m < 20 )/* check the boolean condition using if statement */	
   {
      /* if condition is true then print the following */
      printf("m is less than 20\n" );
   }   
   printf("value of m is : %d\n", m); 
 /*What will be the values of p and q if r assumes a value of (a) 1 and (b) 0?*/
 int p = 1;
 int q = 1;
 int r;
 printf("Enter r:");  
 scanf("%d", &r);
 if (r > 0)
  p = p + 1;
  q = q - 1;
 printf("%d %d", p, q);//if r = 1 then p = 2 and q = 0 and if r = 0 then p = q = 1

 /*To find the nearest whole number of the input fractional number*/
 int x; float y, z;
 printf("\n Enter number :");scanf("%f",&y);
 x = y; z = y - x;
 if (z >= 0.5) 
   x = x + 1;
  printf("\n Nearest whole number:%d",x);
 getchar();

 /*To find absolute value*/
 float num;
 printf("\nEnter any integer:");scanf("%f",&num);
 if (num < 0)
   {num = num*(-1);}
  printf("\nThe absolute value is %.2f",num); 

 /*To check whether the input number is positive or negative*/
 int n;
 printf("\nEnter a number:");scanf("%d",&n); 
 if (n > 0)printf("positive number");
 if(n == 0)printf("zero");
 if(n < 0) printf("negative number");getchar();

 /*To find the ratio of (a+b) and (c-d) and prints the result, if c-d is not equal to zero, where a, b, c and  d are input numbers*/
 int a, b, c, d;
 float ratio;
 printf("\nEnter four integer values:");
 scanf("%d %d %d %d", &a, &b, &c, &d);
 if (c-d != 0)
 {
   ratio = (float)(a+b)/(float)(c-d);
   printf("Ratio = %f\n", ratio);
 }//if c-d = 0,then no output 

 /*To find the largest of three input nos.*/
    printf("Enter three numbers:");  
    scanf("%d %d %d",&a,&b,&c);  
    if(a>b && a>c)    
        printf("%d is largest",a);   
    if(b>a  && b > c)    
        printf("%d is largest",b);   
    if(c>a && c>b)    
        printf("%d is largest",c);   
    if(a == b && a == c)  
        printf("All are equal");   

  /*To take input the number of days of a week and print their name*/
 int k;
 printf("\n Enter a number between 1 and 7 to display the respective day-name:");scanf("%d",&k);
 if(k==1)printf("Sunday");
 if(k==2)printf("Monday");
 if(k==3)printf("Tuesday");
 if(k==4)printf("Wednesday");
 if(k==5)printf("Thursday");
 if(k==6)printf("Friday");
 if(k==7)printf("Saturday");

 /*To print remarks based on marks using Logical AND operator*/
 int percent;
 printf("\nEnter the percentage of marks in the subject: ");
 scanf("%d",&percent);
 if (percent>=80)
  printf("\nExcellent");
 if ((percent>=60) && (percent<80))
  printf("\nGood"); 
 if ((percent>=40) && (percent<60))
  printf("\nFair"); 
 if (percent<40)
  printf("\nPoor");
  
  /*To count the no. of boys whose weight is less than 50 kg and height is greater than 170 cm*/
 int count, i;
 float weight, height;
 count = 0;
 printf("\nEnter weight and height for 10 boys\n");
 for (i=1; i<=10;i++)
 {
  scanf("%f %f",&weight,&height);
  if (weight < 50 && height > 170)//compound logical expression,the given relation is equivalent to 2 'if statements'
                                  //if (weight<50)
                                  //if (height>170)
     count = count + 1;           //count=count+1;     
 }
 printf("\nNumber of boys with weight < 50 kg and height > 170 cm = %d\n",count);  
}
/*
Applying De Morgan's Rule
While designing decision statements,we often come across a situation where the logical NOT operator is applied to a compound logical expression, 
like !(x&&y||!z). However, a positive logic is always easy to read and comprehend than a negative logic.In such cases, we may apply De Morgan's 
Rule to make the total expression positive.The rule is as follows:
 "Remove the parentheses by applying the NOT operator to every logical expression component, while complementing the relational operators."
 i.e.
   x becomes !x
   !x becomes x
   && becomes ||
   || becomes &&
  e.g.: !(x&&y||!z) becomes !x||!y&&z
        !(x<=0|| !condition) becomes x>0&& condition
         
*/