/*
----------------------------------------------------------**KEY CONCEPTS**---------------------------------------------------------
- **DECISION-MAKING STATEMENTS**: Are the statements that control the flow of execution in a program.
- **switch STATEMENT**: Is a multi-way decision making statement that chooses the statement block to be executed by matching the given value with 
    a list of case values.
- **CONDITIONAL OPERATOR**: Is a two-way decision making statement that returns one of the two expression values based on the result of the 
    conditional expression.
- **goto STATEMENT**: Is used for unconditional branching. It transfers the flow of control to the place where matching label is found.
- **INFINITIs a condition where a set of instructions is repeatedly executed.
-----------------------------------------------------------------------------------------------------------------------------------
---------------------------------------------------------**ALWAYS REMEMBER**-------------------------------------------------------
- Be aware of any side effects in the control expression such as if(x++).
- Check the use of operator in place of the equal operator = =. 
- Do not give any spaces between the two symbols of relational operators = = , != , >= and <=. 
- Writing !=, >= and <= operators like =!, => and <= is an error. 
- Remember to use two ampersands (&&)and two bars (||)for logical operators. Use of single operators will result in logical errors. 
- Do not forget to place parentheses for the if expression.
- It is an error to place semicolon after the if expression.
- Do not use ‘the equal operator’ to compare two expressions unless They are seldom exactly equal.
- Avoid using operands that have side effects in a logical binary expression such as (x--&&++y). The second operand may not be evaluated at all.
- Be aware of dangling else statements.
- Use braces to encapsulate the statements in if and else clauses of an if... else statement.
- Do not forget to use a break statement when the cases in a switch statement are exclusive.
- Although it is optional, it is a good programming practice to use the default clause in a switch statement.
- It is an error to use a variable as the value in a case label of a switch statement. (Only integral constants are allowed.)
- Do not use the same constant in two case labels in a switch statement.
- Try to use simple logical expressions.
- Be careful while placing a go to label in a program, as it may lead to an infinite loop condition.
-----------------------------------------------------------------------------------------------------------------------------------
1.State whether the following are true or false:
  (a) A switch expression can be of any type.
   False : In many languages like C, C++, and Java, the switch expression can only be of integer, char, enum, or String type.
  (b) A program stops its execution when a break statement is encountered.
   False : A break statement only exits the loop or switch statement it is in, not the entire program.
  (c) Each case label can have only one statement.
   False : Each case in a switch statement can have multiple statements.
  (d) The default case is required in the switch statement.
   False : The default case is optional in a switch statement.
  (e) When if statements are nested, the last else gets associated with the nearest if without an else.
   True : This is known as ‘dangling else problem’.
  (f) One if can have more than one else clause.
   False : An if statement can have only one else clause.
  (g) Each expression in the else if must test the same variable.
   False : Each else if can test a different condition or variable.
  (h) A switch statement can always be replaced by a series of if…else statements.
   True : A switch statement is essentially a shorthand for a specific type of if-else chain.
  (i) Any expression can be used for the if expression.
   True : Any expression that evaluates to a boolean can be used in an if statement.
  (j) The predicate !(x >= 10)||(y == 5) is equivalent to (x < 10 ) && ( y != 5).
   False : The correct equivalent expression would be (x < 10 ) || ( y == 5).
  (k) It is mandatory to include an else block while using an if statement.
   False : The else block is optional in an if statement.
  (l) The default block can be placed at the beginning of the switch case construct.
   True : The default case can be placed anywhere within the switch statement.

2.Fill in the blanks in the following statements.
  (a) The _______ operator is true only when both the operands are true.
   - **Answer**: AND

  (b) Multiway selection can be accomplished using an else if statement or the _______ statement.
   - **Answer**: switch

  (c) The _______ statement when executed in a switch statement causes immediate exit from the structure.
   - **Answer**: break

  (d) The expression ! (x != y ) can be replaced by the expression _______
   - **Answer**: x == y

  (e) The ternary conditional expression using the operator ?: could be easily coded using _______ statement.
   - **Answer**: if-else

  (f) The _______ operator is used to build two-way decision-making statement that returns one of the two values based on the result of the 
    expression.
   - **Answer**: ?: (ternary operator)

  (g) The _______ statement is used to branch unconditionally from one point to another in a C program.
   - **Answer**: goto
--------------------------------------------------------------------------------------------------------------------------------
1. How many levels can nested blocks be created in C?
Answer: C standard doesn’t limit nested blocks, but 6200 is a practical limit.

2. What happens if the conditional expression is missing in an if statement?
Answer: If the conditional expression is missing in an if statement, the compiler will throw an error. The if statement in C requires a condition 
        to evaluate. If the condition is true, the statements inside the if block are executed. If the expression is false, the statements inside 
        the if body are not executed.

3. What is the purpose of goto statement in decision making and branching?
Answer: The `goto` statement in C is a jump statement which is sometimes also referred to as an unconditional jump statement. The `goto` 
        statement can be used to jump from anywhere to anywhere within a function. However, the use of the `goto` statement is highly discouraged 
        as it makes the program logic very complex.

4. What will be the output of following code?
   
   void main()  
   { 
    int a=5; 
    if(a<0); 
      printf("a is negative");  
    else
      printf("a is positive");  // Always prints "a is positive" due to empty if block.
   }
Answer: The output will be “a is positive” due to the semicolon after if(a<0);. Therefore, the `printf("a is negative");` line will always be 
        executed, regardless of the condition. However, because `a` is not less than 0, the `else` statement is also executed, resulting in "a 
        is positive" being printed.

5. What could be the if expressions that always return true and false values?
Answer: In C, any non-zero value is considered `true`, and zero is considered `false`. So, an if expression that always returns true could be 
        `if(1)` or `if(-1)`, and an if expression that always returns false could be `if(0)`.

6. What types of values are permitted to be used with a switch statement?
Answer: Integers, characters, and enumerated constants are permitted in a switch statement in C.
*/

#include <stdio.h>
int main() 
{
/*1. Write a program to determine whether a given number is 'odd' or 'even' and print the message NUMBER IS EVEN or NUMBER IS ODD 
   (a) without using else option, and 
   (b) with else option.   */

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // (a) without using else option
    if (num % 2 == 0) {
        printf("NUMBER IS EVEN\n");
    }
    if (num % 2 != 0) {
        printf("NUMBER IS ODD\n");
    }

    // (b) with else option
    if (num % 2 == 0) {
        printf("NUMBER IS EVEN\n");
    } else {
        printf("NUMBER IS ODD\n");
    }

/*2. Write a program to find the number of and sum of all integers greater than 100 and less than 200 that are divisible by 7.*/
    int sum = 0;
    int count = 0;
    for (int i = 101; i < 200; i++) {
        if (i % 7 == 0) {
            sum += i;
            count++;
        }
    }
    printf("The number of integers is %d\n", count);
    printf("The sum of integers is %d\n", sum);

/*3. A set of two linear equations with two unknowns x1 and x2 is given below:
     ax₁ + bx₂ = m
     cx₁ + dx₂ = n
   The set has a unique solution
     x₁ = (md – bn) / (ad – cb)
     x₂ = (na – mc) / (ad – cb)
   provided the denominator ad – cb is not equal to zero. 
   Write a program that will read the values of constants a, b, c, d, m, and n and compute the values of x₁ and x₂. An appropriate message should 
   be printed if ad – cb = 0. */

    float a, b, c, d, m, n, x1, x2;
    printf("Enter the values of a, b, c, d, m, and n: ");
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &m, &n);

    if (a*d - b*c != 0) {
        x1 = (m*d - b*n) / (a*d - b*c);
        x2 = (n*a - m*c) / (a*d - b*c);
        printf("The solutions are x1 = %.2f and x2 = %.2f\n", x1, x2);
    } else {
        printf("The denominator ad - cb is equal to zero. No unique solution exists.\n");
    }

    return 0;
}
