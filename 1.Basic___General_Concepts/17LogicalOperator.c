/*
Logical(boolean logic) Operators:
    1. Logical AND (&&): Returns true if both operands are true.
    2. Logical OR (||): Returns true if at least one of the operands is true.
    3. Logical NOT (!): Negates(nullifies) the value of the operand i.e. inverts the logic.

 An expression that combines two or more relational expressions is termed as a logical expression.₁
*/
// C program to demonstrate working of logical operators
#include <stdio.h>
int main()
{
	int a = 10, b = 4, c = 10, d = 20;
	// logical operators
	// logical AND example(&&)
	if (a > b && c == d)
		printf("a is greater than b AND c is equal to d\n");
	else
		printf("AND condition not satisfied\n");
    
    //real ex 1
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if (age >12 && age <20) 
        printf("You are a teenager.\n");
    else 
        printf("You are not a teenager.\n");

    // real ex 2 :here if you put the value of age <=12 or >=20, no output will be shown 
    int myage;
    printf("\nEnter age:");scanf("%d",&myage);
    if(myage>12 && myage<20)
       printf("\nYou are a teenager");     

	// logical OR example(||)
    if (a > b || c == d)
		printf("a is greater than b OR c is equal to d\n");
	else
		printf("Neither a is greater than b nor c is equal to d\n");	
    
    //real ex :you can have same format as real ex 2 where in case of mismatch of input characters result in no output.
    char ch;
    printf("Enter a character:");
    fflush(stdin);
    ch=getchar();//or you can use scanf here as scanf("%c",&ch);
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        printf("Character is a vowel.\n");
    else
        printf("Character is a consonant.\n");

	// logical NOT example(!)
	if (!a)//!a returns true if a is false, i.e. when a=0.
		printf("a is zero\n");
	else
		printf("a is not zero\n");


      
// 2nd example:Working of logical operators
    int x = 5, y = 5, z = 10, result;

    result = (x == y) && (z > y);
    printf("(x == y) && (z > y) is %d \n", result);

    result = (x == y) && (z < y);
    printf("(x == y) && (z < y) is %d \n", result);

    result = (x == y) || (z < y);
    printf("(x == y) || (z < y) is %d \n", result);

    result = (x != y) || (z < y);
    printf("(x != y) || (z < y) is %d \n", result);

    result = !(x != y);
    printf("!(x != y) is %d \n", result);

    result = !(x == y);
    printf("!(x == y) is %d \n", result);

    return 0;
}

// An expression statement in C is terminated with a semicolon (;), not a period.