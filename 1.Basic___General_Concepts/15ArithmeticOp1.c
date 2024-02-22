/*
Arithmetic Operator:(+, -, *, /, %,++,--)
1.Additive operators:+,-
2.Multiplicative operators:*,/,%
3.Increment Operator:++
4.Decrement Operator:--
*/
#include <stdio.h>
int main()
{   
//Binary Operator(applicable on at least more than one operand):
	int a = 10, b = 4, res;
    printf("a is %d and b is %d\n", a, b);
	res = a + b; //1. Addition (+): Adds two operands. 
	printf("a + b is %d\n", res);
	res = a - b; //2. Subtraction (-): Subtracts the second operand from the first operand
	printf("a - b is %d\n", res);
	res = a * b; //3. Multiplication (*): Multiplies two operands
	printf("a * b is %d\n", res);
	res = a / b; //4. Division (/): Divides the first operand by the second operand.
	printf("a / b is %d\n", res);
	res = a % b; //5. Modulus or Remainder or Modulo division (%): Returns the remainder after division of the first operand by the second operand.
	printf("a %% b is %d\n", res);//Note:This % operator cannot be used with real operands(real nos.)
//Unary Operator(applicable on single operand):	1.Increment(++) 2.Decrement(--)
	printf("\nPost Increment and Decrement\n");
    //1.Post-Increment Operator:  y = x++; means y = x; x = x + 1; 	
	res = a++;// post-increment example:res is assigned 10 only i.e. res = 10, a is not updated yet
	printf("a is %d and result is %d\n", a,res);// a becomes 11 now i.e. a = 11 
    //2.Post-Decrement Operator:  y = x--; i.e. y = x; x = x - 1; 
	res = a--;// post-decrement example:res is assigned 11 only i.e. res = 11, a is not updated yet
	printf("a is %d and result is %d\n", a,res);// a becomes 10 now i.e. a = 10
	printf("\nPre Increment and Decrement\n"); 
    //3.Pre-Increment Operator:  y = ++x; means  x = x + 1(or x += 1);y = x 
	res = ++a;// pre-increment example:res is assigned 11 now since a is updated here itself 
	printf("a is %d and result is %d\n", a, res);// a and r have same values = 11	
    //4.Pre-Decrement Operator:  y = --x; means  x = x - 1(or x -= 1);y = x  
	res = --a;// pre-decrement example:// res is assigned 10 only since a is updated here itself 
	printf("a is %d and result is %d\n", a, res);// a and res have same values = 10
  //Order changed
    printf("\nPre Increment and Post Increment\n");	
    res = ++a;// pre-increment example:res is assigned 11 now since a is updated here itself 
	printf("a is %d and result is %d\n", a, res);// a and res have same values = 11	
	res = a++;// post-increment example:res is assigned 11 only, a is not updated yet
	printf("a is %d and result is %d\n", a,res);// a becomes 12 now 
    printf("\nPre Decrement and Post Decrement\n"); 
    res = --a;// pre-decrement example:// res is assigned 11 only since a is updated here itself 
	printf("a is %d and result is %d\n", a, res);// a and res have same values = 11    
	res = a--;// post-decrement example:res is assigned 11 only, a is not updated yet
	printf("a is %d and result is %d\n", a,res);// a becomes 10 now
  //Simple
    int k = 10, l = 100;
    printf("\n++k = %d \n", ++k);//Pre-Increment Operator
    printf("--l = %d \n", --l);//Pre-Decrement Operator
    printf("k++ = %d \n", k++);//Post-Increment Operator
    printf("l-- = %d \n", l--);//Post-Decrement Operator

// 
    int m=5,n;//declaration
//post increment:The operation is performed with original value of variable and then value of variable is increased bn 1
    n=m++;//n=m;m=m+1
	printf("\n%d",m);
	printf("\n%d",n);   
//pre increment:The value of variable is increased bn 1 and then the operation is done using new value
    n=++m;//m=m+1;n=m
	printf("\n%d",n);
	printf("\n%d",m); 
	
	int x=5,y=3,z;
	z=++x + y++ +x;//x=x+1;y++=3
	printf("\n%d",y);
	printf("\n%d",x);
	printf("\n%d",z);

/*  int x = 100;
    printf ("\n%d", 10 + x++);//output=110
    printf ("\n%d", 10 + ++x);//output=112   
	
    int x=5,y;
    y=x++ + ++x + x++;
    printf("%d %d",x,y);//output :x=8,y=19	 
	
**  int a=5,b;
    b=++a + ++a;
    printf("%d",b);
means--->
	int a = 5, b;
	++a;//a=6
	++a;//a=7
	b = a + a;//7+7=14
	printf("%d", b);	//output: b = 14
The code you provided invokes undefined behavior in C because it modifies the variable a multiple times between two sequence 
points without a sequence point in between. The C language standard does not define the order of evaluation for such expressions.

In this specific case, the behavior of the code can vary depending on the compiler and optimization settings. Different compilers 
may produce different results, or the same compiler may produce different results with different optimization levels.	
	*/	
	
	int p=5,q=4,r;
	r=p++ + ++q+p+++q;//p++ + ++q + p++ + q
	printf("\n%d",q);
	printf("\n%d",p);
	printf("\n%d",r);	
   
    int e=5,f=4,g;
	g=e++ + ++f + e + ++f;
	printf("\n%d",f);
	printf("\n%d",e);
	printf("\n%d",g);
    
	int i=3,j=5,k1,k2;
	k1=++i + ++j/++i;
	printf("\nk1:%d",k1);
	k2=i*j/i;
	printf("\nk2:%d",k2);

    int u=10,v;
    v=(u++)+(++u);
    printf("\n%d",u);

/*The program in Fig. 4.1 shows the use of integer arithmetic to convert a given number of days into months and days.*/
    int months, days;
	printf("Enter days\n"); 
	scanf("%d", &days);
	months = days / 30;
	days = days % 30;
	printf("Months = %d Days = %d", months, days);
		
    return 0;
}
/*
Unary Plus Operator (+): Returns the value of its operand.	                     +h
Unary Minus Operator (–): Returns the negative of the value of its operand.	     -h

Although the unary minus operator and subtraction operator looks the same, their function is different from each other in the following ways:
1.As the name suggests, the unary operator works on a single operator while the subtraction operator is a binary operator that works on two operands.
2.The unary minus returns the negative of the value of its operand while the subtraction operator returns the difference between its two operands.

Do not use increment or decrement operators with any expression other than a variable identifier.

Do not use increment and decrement operators to floating point variables.

The modulus operator % can only be used with integers in C. It calculates the remainder when one integer is divided by another.

In C, if the value of a data item is 0 ,it is considered false, while any non-zero value is considered true.

A division operation involving integer operands truncates the resultant value. This situation can be avoided by using floating-point operands or 
typecasting the operands to floating-point before performing the division.

The statement ++a++ is invalid because you cannot apply both prefix and postfix increment operators on the same variable. The correct usage would 
be ++a or a++, but not both together.

The statement a = 1 / b assigns the value 0.5 to a:
Since a is an integer variable, the result of the division will be an integer division, meaning the fractional part will be truncated. The value 
of b is 20, so 1 / b is 1 / 20, which evaluates to 0 (truncated result). Therefore, the statement assigns the value 0 to a, not 0.5. So, the 
statement is false.

Which of the following calculations will not produce the exact result of the division?
a. 7.0/4     b. 7/4    c. 7/4.0    d. 7.0/4.0 
ans: b. 7/4
*/
