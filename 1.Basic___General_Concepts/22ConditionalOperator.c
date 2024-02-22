/*
Conditional (Ternary) Operator:

Conditional Evaluation Operator (?:):
 This operator can be used to perform type conversion based on a condition.It evaluates a condition and returns one of two values based on the 
 result.It has the form condition ? value1 : value2.Depending on the condition, it returns either value1 or value2, performing any necessary 
 type conversions.    
Syntax :condition ? expression1 : expression2;//If the condition is true(when condition results as non-zero or correct value), 
                                                expression1 is evaluated; otherwise,
                                                expression2 is evaluated. The value of the evaluated expression is returned.
        condition ? true-value:false-value   
        Expression1? expression2: expression3;//3 arguments    
                                         
The conditional statements are the decision-making statements which depends upon the output of the expression. It is represented by two symbols, 
i.e., '?' and ':'.
As conditional operator works on three operands, so it is also known as the ternary operator.
The behavior of the conditional operator is similar to the 'if-else' statement as 'if-else' statement is also a decision-making statement.

As we know that the behavior of conditional operator and 'if-else' is similar but they have some differences. Let's look at their differences.

A conditional operator can also be used for assigning a value to the variable, whereas the 'if-else' statement cannot be used for the assignment 
purpose.
It is not useful for executing the statements when the statements are multiple, whereas the 'if-else' statement proves more suitable when executing multiple statements.
The nested ternary operator is more complex and cannot be easily debugged, while the nested 'if-else' statement is easy to read and maintain.                                             
*/
#include <stdio.h>
int main() 
{
   int age;  // variable declaration  
   printf("Enter your age:");  
   scanf("%d",&age);   // taking user input for age variable  
   (age>=18)? (printf("eligible for voting")) : (printf("not eligible for voting"));  // conditional operator

   int a=5,b;  // variable declaration  
   b=((a==5)?(3):(2)); // conditional operator  
   printf("\nThe value of 'b' variable is : %d",b);

   int t;
   t=(6==2*5-4)?(5):(10);
   printf("%d",t);  //output:5

   int c;
   for ( c = 0 ; c <3; ++c) 
   printf("%d  /n", (c%2) ? c: c+2); 
   //in case of c=0, c%2=0%2=0(false) ,so output=c+2=2  /n  
   //in case of c=1, c%2=1%2=1(true) ,so output=c=1  /n
   //in case of c=2, c%2=2%2=0(false) ,so output=c+2=4  /n

   int i, j, max;
   printf("\nEnter the two nos.:");
   scanf("%d %d", &i, &j);
   max = (i>=j) ? (i) : (j);
   printf("\nThe greater of the two nos. is %d",max);
   //or
   (i >= j) ? (printf("\n%d is greater",i)) : (printf("\n%d is greater",j));//using this method,max can be ignored and not required to be input

   int x=2,y=12,z=10,m,n;
   m=x>y?x:y;//checking between x and y
   printf("\nMaximum number:%d",m);
   n=x>y?(x>z?x:z):(y>z?y:z);//checking among x,y, and z
   printf("\nMaximum number:%d",n);

    int p, q, r, s;p =15;q =10; r = ++p - q;printf("p = %s q = %s r = %s\n",p, q, r);
    s =q++ +p;printf("p = %s q = %s s = %s\n",p, q, s);
    printf("p/q = %s\n", p / q );  
    printf("p%%q = %s\n", p % q ); 
    printf("p *= q = %s\n", p *= q);
    printf("%s\n", (r>s) ? 1 : 0);
    printf("%s\n", (r<s) ? 1 : 0);   

   /*To calculate different discounts*/
   float amount, total;
   printf("\nEnter the total purchase amount (Rs.):");
   scanf("%f", &amount);
   amount < 3000.0 ? (total=0.9*amount) : (total=0.8*amount);
   printf("\nThe net amount payable = Rs. %0.2f",total);
   
   /*k and l are discounts*/     //Conditional operator can be used on the left side of assignment operator.
   double amt, tl; int k=0, l=0;
   printf("\nEnter purchase amount:");
   scanf("%lf", &amt);
   (amt>=5000.0)?(k=1):(l=1);  //(amt>=5000.0)?(k):(l)=1;
   tl = amt - k * 0.4 * amt - l * 0.2 * amt;
   printf("\nTotal amount payable is %.2lf\n", tl);

/*Write a C program to input a character and determine whether it is a vowel or consonant.*/
   char ch;

   printf("Enter a character: ");
   scanf("%c", &ch);

   // Using conditional operator to check if it's a vowel or consonant
   (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        ? printf("%c is a vowel.\n", ch) : printf("%c is a consonant.\n", ch);

    return 0;
}
/*
Understand clearly the precedence of operators in an expression. Use parentheses, if necessary.

Add parentheses wherever you feel they would help to make the evaluation order clear. 
*/