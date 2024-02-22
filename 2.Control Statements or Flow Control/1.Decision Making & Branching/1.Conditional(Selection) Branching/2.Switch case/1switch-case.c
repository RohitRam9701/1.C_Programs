/*
switch(expression)
{
case value1: statement(s);     //case value1,value2,...,valuen are constant-expressions or case constants or case lables.
             break;
case value2: statement(s);
             break;
.
.
.
case value_n: statement(s);
              break;

default: default_statement(s);
}
statement-x;



 Rules in Switch-Case :

  1.The expression inside the switch statement must be an integral type (such as int or char) or an enumeration constant.

  2.The constant-expression for a case(i.e. case value) must be the same data type as the variable in the switch, and it must be an integer or 
    character constant or a literal. Floating point variables are not allowed. The case value can be used only inside the switch statement.
e.g.
    Valid Switch	       Invalid Switch	  Valid Case	  Invalid Case
     switch(x)	              switch(f)     	case 3;       	case 2.5;
     switch(x>y)	          switch(x+2.5)	    case 'a';	    case x;
     switch(a+b-2)	                            case 1+2;	    case x+2;
     switch(func(x,y))		                    case 'x'>'y';	case 1,2,3;

  3.There can be one or N number of cases within a switch. Each case is followed by the value to be compared to and a colon (:).

  4.The case values must be unique.

  5.There can be a multiple statements following a case constant and these statements need not be enclosed within "{ }".

  6.When the variable being switched on is equal to a case, the statements following that case will execute until a break statement is reached.
    When a break statement is reached, the switch terminates, and the flow of control jumps to the next line following the switch statement(i.e.
    statement-x).

  7.Not every case needs to contain a break but each statement of the case can have a break statement. It is optional.If no break appears, the 
    flow of control will fall through to subsequent cases until a break is reached (i.e.all the cases will be executed present after the matched 
    case) It is known as fall through the state of C switch statement.

  8.A switch statement can have at most one optional default case, which must appear at the end of the switch. The default case can be used for 
    performing a task when none of the cases is true. No break is needed in the default case. 

  9.If default statement is not present, then no action takes place if all matches fail and the control goes to the statement-x.  

  10.A switch-case default structure is generally used to write a menu driven program, where each option of the menu corresponds to a case constant.  

  Tip:Always use char or int variables with switch.
*/
#include<stdio.h>
//#include <stdlib.h>//for exit(0)
void main()
{
//Write a program to check if a number is even or odd with the help of switch-case construct and without using any if-else construct
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    switch (n % 2) 
    {
        case 0:
            printf("%d is an even number.\n", n);
            break;
        case 1:
            printf("%d is an odd number.\n", n);
            break;
    }

 /*To display a menu that states that on pressing 1 & 2 ,addition & subtraction of the 2 given nos. take place respectively.And on pressing any 
   other no. ,multiplication of nos. take place*/
    int x,y,z,k;
    printf("\n Enter 1st number and 2nd number:");scanf("%d%d",&x,&y);   
    printf("\n Press 1 to add numbers\n Press 2 to subtract numbers\n Press other to multiply numbers");
    printf("\n Enter choice:");scanf("%d",&k);
    switch (k)
    {
       case 1:z=x+y;
              break; 
       case 2:z=x-y;    
              break;
       default:z=x*y;
    }
    printf("\n Result:%d",z);

//To input no and print chosen day of the week
    int day = 2; 
    printf("\nThe day with number %d is ", day);
    switch (day) {
      case 1:
          printf("Monday");
          break;
      case 2:
          printf("Tuesday");
          break;
      case 3:
          printf("Wednesday");
          break;
      case 4:
          printf("Thursday");
          break;
      case 5:
          printf("Thursday");
          break;
      case 6:
          printf("Thursday");
          break;
      case 7:
          printf("Thursday");
          break;
      default:
          printf("Invalid Input");
          break;
      } 

 /*To enter the month in numerical form and display the month in word using switch case*/
    int m;
    printf("\nEnter month in numerical form:");scanf("%d",&m);
    switch(m)
    {
       case 1:printf("\n Month is January");
              break;    
       case 2:printf("\n Month is February");
              break; 
       case 3:printf("\n Month is March");
              break; 
       case 4:printf("\n Month is April");
              break;    
       case 5:printf("\n Month is May");
              break;
       case 6:printf("\n Month is June");
              break; 
       case 7:printf("\n Month is July");
              break; 
       case 8:printf("\n Month is August");
              break; 
       case 9:printf("\n Month is September");
              break;        
       case 10:printf("\n Month is October");
               break;       
       case 11:printf("\n Month is November");
               break;        
       case 12:printf("\n Month is December");
               break; 
       default:printf("\n Wrong choice");              
    } 
/*flow of control goes to next the statement of case C due to absence of statement and break in case B*/
    char grade = 'B';
    switch(grade) {
      case 'A' :
         printf("\nExcellent!\n" );
         break;
      case 'B' :
      case 'C' :
         printf("\nWell done\n" );
         break;
      case 'D' :
         printf("\nYou passed\n" );
         break;
      case 'F' :
         printf("\nBetter try again\n" );
         break;
      default :
         printf("\nInvalid grade\n" );
   }   
   printf("\nYour grade is  %c\n", grade );

// C program to Demonstrate returning of day based numeric value

	int variable = 1;
	switch (variable) {
		case 1:
			printf("Case 1 is Matched.");
			break;

		case 2:
			printf("Case 2 is Matched.");
			break;

		case 3:
			printf("Case 3 is Matched.");
			break;

		default:
			printf("Default case is Matched.");
			break;
	} 

// switch case without break
    int var = 2;     
    switch (var) {
      case 1:
          printf("\nCase 1 is executed.\n");
      case 2:
          printf("\nCase 2 is executed.\n");
      case 3:
          printf("\nCase 3 is executed.");
      case 4:
          printf("\nCase 4 is executed.");
    }

//Simple calculator 1
    char operator;
 // int x, y;

    printf("Enter the operator (+,-,*,/): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    switch (operator) {
        case '+':
            printf("%d + %d = %d\n", x, y, x + y);
            break;
        case '-':
            printf("%d - %d = %d\n", x, y, x - y);
            break;
        case '*':
            printf("%d * %d = %d\n", x, y, x * y);
            break;
        case '/':
            if(y != 0)
                printf("%d / %d = %.2f\n", x, y, (float)x / y);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator! Please enter either +, -, * or /.\n");
    }
/*    
    char choice;
  //int x, y; 
    while (1) {
        printf("\nEnter the Operator (+,-,*,/)\nEnter x to exit\n");
        scanf(" %c", &choice); 
        // for exit
        if (choice == 'x') {
            exit(0);
        } 
        printf("Enter the two numbers: ");
        scanf("%d %d", &x, &y); 
        // switch case with operation for each operator
        switch (choice) {
          case '+':
              printf("%d + %d = %d\n", x, y, x + y);
              break;
 
          case '-':
              printf("%d - %d = %d\n", x, y, x - y);
              break;
 
          case '*':
              printf("%d * %d = %d\n", x, y, x * y);
              break;
          case '/':
              printf("%d / %d = %d\n", x, y, x / y);
              break;
          default:
              printf("Invalid Operator Input\n");
        }
    } 
*/    
}