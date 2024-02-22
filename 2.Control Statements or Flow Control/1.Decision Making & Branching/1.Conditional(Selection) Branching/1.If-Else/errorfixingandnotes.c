#include<stdio.h>
void main()
{
/*even and multiple of 3*/  
  /*int num;
  printf("\nEnter a number:");
  scanf("%d",&num);
  if (num%2==0)
    if (num%3==0)
        printf("\nNumber is even and a multiple of 3");//since curly brackets are missing, so entering odd no does not prints "Number is simply odd"
  else
    printf("\nNumber is simply odd");*/
//fixed    
  int num;
  printf("\nEnter a number:");
  scanf("%d",&num);
  if (num%2==0)
  {
    if (num%3==0)
        printf("\nNumber is even and a multiple of 3");
  }
  else
    printf("\nNumber is simply odd"); 

/*guessed value of pi
//floating point literal 
 
  float guess;
  printf("\nGuess the value of pi (upto 2 digits after decimal):");
  scanf("%f",&guess);
  if (guess > 3.14)
    printf("\nYour guessed value is greater than PI");
  if (guess == 3.14)
    printf("\nYour guessed value is equal to PI");//Entering 3.14 prints "Your guessed value is greater than PI" due to precision considerations   
  if (guess < 3.14)                               //it is stored as something less than 3.14 ,say 3.13555, so guess>3.14(3.13555)
    printf("\nYour guessed value is less than PI"); */
//sol 1: typecasting used to fix the above problem, so before making comparison 3.14 will be converted from a double to a float
  float guess;
  printf("\nGuess the value of pi (upto 2 digits after decimal):");
  scanf("%f",&guess);
  if (guess > (float)3.14)                            
     printf("\nYour guessed value is greater than PI");
  if (guess == (float)3.14)
     printf("\nYour guessed value is equal to PI");  
  if (guess < (float)3.14)
     printf("\nYour guessed value is less than PI");  
//sol 2: to make the variable double type
/*  double guess;
  printf("\nGuess the value of pi (upto 2 digits after decimal):");
  scanf("%lf",&guess);    
  ...    
*/   
//Thus be careful when comparing floating point variables within if statement

/*
  int x, y;
  printf("\nEnter x co-ordinate of point:");scanf("%d",&x);//Enter 4
  printf("\nEnter y co-ordinate of point:");scanf("%d",&y);//Enter 5  
  if (x=0 && y=0)
    printf("\nPoint lies on the origin.");         //but it still prints "Point lies on the origin." as x=0 and y=0 assigned values permanently
  else                                             //to x and y    
    printf("\nPoint does not lie on the origin.");
 */
//fixed
  int x, y;
  printf("\nEnter x co-ordinate of point:");scanf("%d",&x);
  printf("\nEnter y co-ordinate of point:");scanf("%d",&y);  
  if (x==0 && y==0)
    printf("\nPoint lies on the origin.");
  else
    printf("\nPoint does not lie on the origin."); 

//never write "case 1" as "case1" because it becomes a keyword as case is also a keyword
//never write " case 'm' "  as "case m".

/*
REMEMBER that a logical expression is evaluated from left to right. In case sufficient logical truth has been obtained to evaluate an expression, 
then further evaluation of the expression is stopped and the evaluation of the remaining expressions is not carried out. This is common for 
conditions where there are logical OR operators. If the first condition is satisfied then the remaining conditions connected by the OR operators 
is not checked as (True) OR (Anything) is True. However, in case you have AND operations, then all the AND connected conditions are checked to see 
if the overall condition is True or not.
The next program piece illustrates the above point.*/
  int a=0, b=0, c=0, p=2, q=4, r=8; 
  puts ("\nEnter three values: ");
  scanf("%d%d %d", &p, &q, &r);
  if( (a=p) && (b=q) || (c=r) ) 
    printf("\na=%d, b=%d, c=%d", a, b, c);
  else printf("\na=%d, b=%d, c=%d", a, b, c);
}  
  /*Output:
  Enter three values: 
  2 5 8
  a=2, b=5, c=0
The condition of the if statement in line-86 consists of assignment operations (note, these are not equality operations). Remember that C considers 
any non-zero value as True and only a zero value as False. The condition evaluates by taking into consideration this property without the use of 
relational operators.
Ideally to check the overall condition all the individual conditions need to be checked. However, as && operator has a higher priority than I 
operator, the AND condition (a=x) && (b=y) is evaluated to (Non-Zero)&&(Non-Zero) i.e. True&&True which is True. As the next condition is an OR 
operation, and the left hand argument of the OR operation has been evaluated as True, C will not evaluate or check the right side condition of the 
OR operation. So the variable c remains at zero (0) without any change, though the other variables a and b both get changed. This is why we get 
the above output for the values entered.*/

/*
Some Guidelines for Writing Multiway Selection Statements:
Complex multiway selection statements require special attention. The readers should be able to understand the logic easily. Given below are some 
guidelines that would help improve readability and facilitate maintenance.
• Avoid compound negative statements. Use positive statements wherever possible.
• Keep logical expressions simple. We can achieve this using nested if statements, if necessary (KISS - Keep It Simple and Short).
• Try to code the normal/anticipated condition first.
• Use the most probable condition first. This will eliminate unnecessary tests, thus improving the efficiency of the program.
• The choice between the nested if and switch statements is a matter of individual's preference. A good rule of thumb is to use the switch when 
  alter-native paths are three to ten.
• Use proper indentations (See Rules for Indentation).
• Have the habit of using default clause in switch statements
• Group the case labels that have similar actions.*/
/*


--------------------------------------------------------------Notes--------------------------------------------------------------------

**Branching helps us to execute different codes based on condition(s)

**In the C programming language, the equal sign (`=`) and the double equal sign (`==`) are two different operators with distinct purposes.

    1. Assignment Operator (`=`): The equal sign (`=`) is the assignment operator. It is used to assign a value to a variable. For example:
       int x = 10;  // Assigns the value 10 to the variable x
       In this case, the value 10 is assigned to the variable `x`. The assignment operator is used to store a value in a variable.
    2. Equality Operator (`==`): The double equal sign (`==`) is the equality operator. It is used to compare two values for equality. For example:
       int x = 5;
       int y = 10;
       if (x == y) {
            printf("x is equal to y\n");
            } else {
                printf("x is not equal to y\n");
            }
       In this case, the equality operator (`==`) is used to check if `x` is equal to `y`. If they are equal, the first branch of the `if` statement 
       is executed, otherwise, the second branch is executed. The equality operator returns `1` (true) if the values are equal and `0` (false) if 
       they are not equal.
       
       It's important to note that the equality operator (`==`) should not be confused with the assignment operator (`=`). Using the assignment 
       operator (`=`) in a conditional statement instead of the equality operator (`==`) can lead to logical errors. For example, the following 
       code will assign the value `10` to `x` and always evaluate the `if` condition as true:
       int x = 10;
       if (x = 5) {  // Incorrect usage, should be '==' instead of '='
           printf("x is equal to 5\n");
           }
           
        int x = 5;
        if (x == 10) {
                // This condition will not be true, so this code block will not execute
                }
        In this example, the condition x == 10 evaluates to false because the value of x is 5, not 10. Therefore, the code block within the if 
        statement will not be executed.
        To compare values for equality, always use the equality operator (`==`).
        
        ex:Tell the operations that does not change the value of the variable x ? a. x=9  b. x=x-1  c.(5-2)?(x=6):(x=2)  d.x==9
           ans: d.x==9

**If condition in if-else(where condition is formed using logical operators), conditional operator, LO or anywhere has correct and non-zero value ,
  then the condition is true(1).
  Otherwise, the condition is false(0).     
  
  If there is no value given to any variable or cannot be calculated using the program, then its value is decided as 0 or 1 according to 
  the conditions(normally logical expressions) that are false or true resp. e.g. 1 and 2

  Examples:
    1.int x=2,y=3,z=6,w;
      w=(x)||(x-y)&&(x*y==z);
      printf("%d",w);

      1. Since x=2 is non-zero, so (x)=1 (true).
      2. (x - y)=-1, which is non-zero and correct. So,(x - y)= 1 (true).
      3. x*y=6, and z=6, so (x*y == z) = 1(true) 
      4. (x - y) && (x * y == z) = 1 (true) as both are true.(The logical AND (`&&`) operator has higher precedence, evaluated first)
      5. (x) || (x - y) && (x * y == z) = 1 (true) as `true || true`(Since the left operand is true, the entire expression evaluates to true)
      Therefore, the value of `w` is `1`.

    2.int x=5, y=8, z=12, w;
      w= !(x)||((!z)==(!5))&&(z!=(!x))+1; or //w= !(x)||(!z==!5)&&(z!=!x)+1;
      printf("%d",w);
      
      1.x=5(true) so !x will be 0 (false).
      2.Similarly, z=12(true) so !z=0 (false) and !5=0(false). As both equal, so ((!z)==(!5)) = 1 (true)
      3.z=12 is not equal to !x=0.this is true so (z!=(!x))= 1 (true).(z!=(!x))+1 gives 2.
      4.w= 0|| 1 && 2
        Now, let's evaluate the expression further:
        - `1 && 2` evaluates to `1` (true) because both operands are non-zero.(logical AND has higher precedence so evaluated first)
        - `0 || 1` evaluates to `1` (true) because at least one operand is non-zero.
      Therefore, `w` is assigned the value `1`.

    3.int x=12, y=3, m; scanf("%d", &m);//m=2 (given)
      m = (x-4*y) ? (x) : (y);
      printf("%d %d %d", x, y, m);

      (x-4*y) = (12 - 4*3) = 0, so the condition (x-4*y) = 0 (false), hence m=y=3 .x=12, y=3, m=3.
  
** /*Difference in values of y due to curly brackets

      //if statements without curly brackets
    int p =2, q = 3;    
    if (p<0)
       printf("\np=%d", p);
        q=q*(-1);
    if(p>0) q=q+6;
        printf("\n%d", q); 

    here q=3  because curly brackets are not used, so the value of q is not evaluated using q=q+6; as q does not consider it as a part of 
              if-statement.

      //if statements with curly brackets
    int x =2, y = 3;    
    if (x<0)
       { printf("\nx=%d", x);
        y=y*(-1);}
    if(x>0)
      {  y=y+6;
        printf("\n%d", y);} 

    here y = 9   because curly brackets are used, so the value of y is evaluated using y=y+6; as y considers it as a part of if-statement and gives
                 the value accordingly.*/

    /*Note: Normally if statements are used with curly brackets in a program. But if there is only a single statement ifn if-statement, then curly 
            brackets can be removed 

**  char x='P'; int A=97, Z=122;
    if (x >= A && x <= Z) printf("\nUppercase alphabet");
    else printf("\nSomething else");  

    output: Something else    because ASCII Value of P is 80, so condition gets false. ASCII VALUE OF a and z are 97 and 122 resp but here we 
                                have introduced A=97 & Z=122, it must not to be confused         

**  int x=5;
    if (x==2) printf("Hello,bro");
    if (x==3) printf("Hello,sis");
    //no output because value of x is 5,so conditions are evaluated to false. 

    if (x=2)  printf("\nHello,Good Morning");
    else      printf("\nHello,Good Night");
  
    Since the assignment operation (x = 2) returns the assigned value (which is 2 in this case), the if statement treats it as a boolean expression. 
    In C, any non-zero value is considered true, while 0 is considered false. Since 2 is a non-zero value, the condition is considered true, and the 
    code inside the if block is executed.           

**  int x=5;
    if (x==5) puts("Abrake");
    else puts("Dabra");

    output: Abrake

**  float x=5.7;
    if (x==5.7) puts("Abrake");
    else puts("Dabra");
    
    In this case, the condition x == 5.7 will likely evaluate to false because floating-point numbers cannot always be represented with perfect 
    accuracy. The actual value stored in x might be a slightly different approximation of 5.7. Therefore, the else block will be executed.
                               
**  int x=12,y=3;
    if(!(x!=12)&&!(y!=15)&&(y==3||x<2&&x<y)) printf("%d",3*x+1);
    else printf("%d",y-1); 

    output: 2
    !(x!=12) means x==12(true), !(y!=15) means y==15(false) ,so accordingly the condition gets false due to y==15 hence else statement is printed.

**  int x=15,y=2;
    if(!(x!=15)&&!(y!=2)&&(x>-2||y==3||&&x>y)) printf("%d",3*x-1);
    else printf("%d",y+1);

    output: 29    because !(x!=15) means x==15(true), !(y!=2) means y==2(true) and remaining are also true 

**  int x=2,y=10;
    if (x-y) printf("%d",x);   
    else if (y-x) printf("%d",y); 
    else if (5*x-y) printf("%d",y-x); 
    else printf("%d",x-y);        

    output : 2  because (x-y) in if statement gives x-y=-8(non-zero),so the condition is true           

**  if(5+5) if(4/2) if (8%5) if(8-4*2) puts("1");  
    else puts("2"); 

    output:2 because 5+5=10(true),4/2=2(true),8%5=3(true) but 8-4*2=0(false)      

**      */