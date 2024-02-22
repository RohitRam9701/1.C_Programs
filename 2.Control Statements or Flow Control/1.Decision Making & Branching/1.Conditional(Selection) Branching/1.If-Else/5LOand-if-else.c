#include<stdio.h>
void main()
{
    //1.Checking multiple options without using logical OR(||) operator
    int num;
    printf("\nEnter a 3 digit integer value: ");
    scanf("%d", &num);
    if (num == 153)
      printf("\nArmstrong number");
    else if (num == 370)
      printf("\nArmstrong number");
    else if (num == 371)
      printf("\nArmstrong number");
    else if (num == 407)
      printf("\nArmstrong number");
    else    
      printf("\nNot an Armstrong number");

    /*Use of logical OR operator for the above program-1
    int num;
    printf("\nEnter a 3 digit integer value: "); 
    scanf("%d", &num);
    if (num == 153 || num == 370 || num == 371 || num == 407) //Wrong syntax: if( num == 153 || 370 || 371 || 407 ) 
     printf("\nArmstrong number");
    else
     printf("\nNot an Armstrong number");*/

/*REMEMBER: If the output of an if-else ladder logic is same for different conditions then it can be replaced by logical OR with each condition 
            under if-else logic being connected by an OR operator.*/

    /*Logical OR*/
    int a = 10, b = 20;
    if( (a<b) || (a+5) > 10)
    printf("%d", a);
    else
    printf("%d", b);

    int x=45, y=45;
    if ((x=x/10) || (y=y%10))
    printf("x:%d y:%d",x,y); 
    /*
    output: x=4   y=45   because x=4(non-zero) true ,so (y=y%10) (gives y = 5) is not evaluated and previous value of y is printed.
    */

    int p=45, q=45;
    if ((p=p/10) || (q=q%10))
    printf("p:%d q:%d",p,q);  
    //p=4 q=45
    if ((p=p/10) && (q=q%10))
    fflush(stdout);//to clear output buffer
    printf("\np:%d q:%d",p,q);
    //p=0 q=45 both operands must be true to be evaluated but p = 0(false),so q=5 cannot be printed and previous value is used   

    //2.Checking multiple options together without using logical AND operator
  //int num;  
    printf("\nEnter a 2 digit integer value: ");
    scanf("%d", &num);
    if(num%2==0)/*Condition checks if number is divisible by 2*/
      {if ((num*num)%3== 0)/*Condition checks if square is divisible by 3*/
            {if((num*num*num)%5 == 0) /*Condition checks if cube is divisible by 5*/
                 printf("\nNumber satisfies the required conditions");
             else    
                 printf("\nNumber does NOT satisfy the required conditions");
            }   
       else
           printf("\nNumber does NOT satisfy the required conditions");
      }
    else
     printf("\nNumber does NOT satisfy the required conditions");

    /* Use of logical AND(&&) operator for the above program-2
    int num;
    printf("\nEnter a 2 digit integer value: ");
    scanf("%d", &num);
    if( num%2 == 0 && (num*num)%3 == 0 && (num*num*num)%5 == 0) 
      printf("\nNumber satisfies the required conditions");
    else
      printf("\nNumber does NOT satisfy the required conditions");

/*REMEMBER: In case you have consecutive nested if statements all of which need to be satisfied for a given situation, it can be replaced by logical 
            AND operators, connecting those conditions.*/

    /*Logical AND*/
  //int x=45, y=45;
    if ((x=x/10) && (y=y%10))
    printf("x:%d y:%d",x,y); 
    /*
    output: x=4   y=5   because both the expressions are evaluated.
    */            
            
   //3.To test multiple of 4 or 5 using logical OR
  //int num;
    printf("\nEnter the number to check: "); 
    scanf("%d", &num);
    if ((num%4==0) || (num%5==0))
       printf("\nNumber is either a multiple of 4 or 5");
    else
       printf("\nNumber is not a multiple of 4 or 5");

    //4.Use of logical NOT operator
    int num1, num2;
    printf("\nEnter the larger number: ");
    scanf("%d", &num1);
    printf("\nEnter the smaller number: ");
    scanf("%d", &num2);
    if(!(num1 % num2))
      printf("\n%d is a multiple of %d", num1, num2);
    else
      printf("\n%d is not a multiple of %d", num1, num2);

    //5.To print remarks based on marks using if-else ladder
    int percent;
    printf("\nEnter the percentage of marks in the subject: ");
    scanf("%d", &percent);
    if (percent>=80 )          //Condition True only if percent is >=80
        printf("\nExcellent"); //Prints when percent >=80
    else if( percent>=60 )     //Else percent <80. But condition is True if percent >=60
        printf("\nGood");      //Prints when percent >=60 but <80
    else if( percent>=40)      //Else percent <60. But condition is True if percent >=40
        printf("\nFair");      //Prints when percent >=40 but <60*/
    else                       //Else percent is <40
        printf("\nPoor");      //Prints when percent <40

    /*To print remarks based on marks using AND operator for the above program-5
  //int percent;
    printf("\nEnter the percentage of marks in the subject: ");
    scanf("%d", &percent);
    if( percent>=80 )                 //Condition True only if percent is >=80
      printf("\nExcellent");
    if( (percent>60) && (percent<80)) //Condition True only if percent is >=60 and <80
      printf("\nGood");
    if( (percent>=40) && (percent<60))//Condition True only if percent is >=40 and <60
      printf("\nFair");
    if( percent<40 )                  //Condition True only if percent is <40
      printf("\nPoor");*/

    /*6.To show the use of combined logical operators*/
    char letter;
    printf("\nEnter any character: ");
    fflush(stdin);
    letter=getchar();
    if( ( (letter>=65) && (letter<=90) ) || ( (letter>=97) && (letter<=122) ) ) 
       printf("\nYou have entered an alphabet");
    else
       printf("\nYou have entered a symbol or a digit");

   
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
/*
1. Rewrite each of the following without using compound relations:

(a) if (grade <= 59 && grade >= 50) 
    second = second + 1; 
    
Answer:

    if (grade <= 59)
        if (grade >= 50)
            second = second + 1;

(b) if (number > 100 || number < 0) 
       printf(" Out of range");
    else 
       sum = sum + number; 

Answer:

  if (number > 100)
    printf(" Out of range");
  else if (number < 0)
    printf(" Out of range");
  else
    sum = sum + number;

(c) if ((M1 > 60 && M2 > 60) || T > 200) 
        printf(" Admitted\n"); 
    else 
        printf(" Not admitted\n");

Answer:

  if (M1 > 60)
      if (M2 > 60)
        printf(" Admitted\n");
      else if (T > 200)
        printf(" Admitted\n");
  else if (T > 200)
    printf(" Admitted\n");
  else
    printf(" Not admitted\n");

2. Assuming x = 10, state whether the following logical expressions are true or false:
  (a) x == 10 && x > 10 && !x : False
  (b) x == 10 || x > 10 && !x : True
  (c) x == 10 && x > 10 || !x : False
  (d) x == 10 || x > 10 || !x : True

3. Simplify the following compound logical expressions:
  (a) !(x <= 10)                       : This expression simplifies to x > 10.
  (b) !(x==10)||!((y==5)||(z<0))       : This expression simplifies to (x != 10) || (y != 5 && z >= 0).
  (c) !((x+y==z) && !(z>5))            : This expression simplifies to (x + y != z) || (z > 5).
  (d) !(( x<=5 ) &&( y==10 )&& ( z<5 )): This expression simplifies to (x > 5) || (y != 10) || (z >= 5). 
   
4. Assuming that x = 5, y = 0, and z = 1 initially, what will be their values after executing the following code segments?
  (a) if (x && y)
        x = 10; 
      else 
        y = 10;
  (b) if (x || y || z) 
        y = 10; 
      else 
        z = 0;
  (c) if (x) 
        if (y) 
          z = 10; 
      else 
        z = 0;
  (d) if (x == 0 || x && y) 
        if (!y) 
          z=0; 
        else
          y=1;

Answer:
**a) `y = 10`:** Outer condition `x && y` is false due to `y = 0`, `else` block sets `y = 10`. | x = 5, y = 10, z = 1 |

**b) `y = 10`:** At least one condition (`x = 5`) is true, so `y = 10`.                        | x = 5, y = 10, z = 1 |

**c) `z = 0`:** Outer condition `x` is true, but inner condition `y` is false, so `z = 0`.     | x = 5, y = 0, z = 0 |

**d) `No change`:** Since both conditions in the outer `if` are false(x!=0), the entire code 
                    segment within it is skipped. Thus, no changes are made.                   | x = 5, y = 0, z = 1 |
      
5. Find errors if any in each of the following segments.

  (a) if (x + y = z && y > 0)
            printf(" ");
  (b) if (p < 0) || (q < 0)
            printf(" sign is negative");
  (c) if (code > 1);
            a = b + c
       else
            a = 0      
  (d) if (x > = 10) then
            printf( "\n");             
  (e) if x > = 10
            printf( "OK" ) ;
  (f) if (x = 10)
             printf("Good" );
  (g) if (x = < 10)
             printf("Welcome");		             

Answer :

 (a)  Error     : assignment operator(`=`) instead of equality not a comparison operator(`==`).    
      Correction: `if (x + y == z && y > 0)` 
 (b)  Error     : Logical OR operator `||` should be inside the parentheses.                                                 
      Correction: `if ((p < 0) || (q < 0))`
 (c)  Error     : Semicolon `;` after the `if` statement is not needed but it is needed after `a = b + c` and `a = 0` and parentheses are missing.                                                   
      Correction: `if (code > 1) { a = b + c; } else { a = 0; }`
 (d)  Error     : `>=` operator should not have a space between `>` and `=`. `then` is not needed.                  
      Correction: `if (x >= 10) { printf("\n"); } else { // Code to execute if x is less than 10 }`
 (e)  Error     : `>=` operator should not have a space between `>` and `=`. Parentheses are missing around the condition. 
      Correction: `if (x >= 10) { printf("OK"); }`
 (f)  Error     : `=` is an assignment operator, not a comparison operator.                                                  
      Correction: `if (x == 10) { printf("Good"); }`
 (g)  Error     : `=<` operator is not valid. You should use `<=` for "less than or equal to".                               
      Correction: `if (x <= 10) { printf("Welcome"); }`
*/