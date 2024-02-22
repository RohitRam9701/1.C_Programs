/*REVIEW QUESTIONS

1. Declared a as int and b as float ,state whether the following statements are true or false.
(a) The statement `a = 1/3 + 1/3 + 1/3;` assigns the value 1 to `a`.
--->
False. In C, when performing integer division, the result is also an integer. Since `1/3` results in `0` (integer division truncates the decimal 
part), the expression `1/3 + 1/3 + 1/3` evaluates to `0 + 0 + 0`, which is `0`. Therefore, `a` will be assigned the value `0`, not `1`.

(b) The statement `b = 1.0/3.0 + 1.0/3.0 + 1.0/3.0` assigns a value 1.0 to `b`.
--->
True. Here, floating-point division is used (1.0/3.0), which results in the approximate value of 0.333333. Adding three of these values together 
gives 0.999999. Since b is declared as a float, the assigned value would be approximately 0.999999, which can be considered as 1.0 due to the 
limited precision of floating-point numbers.

(c) The statement `b = 1.0/3.0 * 3.0` gives a value 1.0 to `b`.
--->
True. Here, the expression `1.0/3.0 * 3.0` performs division and multiplication using floating-point numbers. When multiplying `1.0/3.0` by `3.0`, 
the result is exactly `1.0`. Therefore, `b` will be assigned the value `1.0`.
or,
True. Here, floating-point division is used (1.0/3.0), resulting in approximately 0.333333. Multiplying this value by 3.0 gives approximately 
0.999999, which can be considered as 1.0 due to the limited precision of floating-point numbers. Therefore, the assigned value of b would be 1.0.

(d) The statement `b = 1.0/3.0 + 2.0/3.0` assigns a value 1.0 to `b`.
--->
True. Similar to statement (b), both divisions are done using floating-point numbers. Adding `1.0/3.0` and `2.0/3.0` results in `0.333333... + 
0.666666...`, which is exactly `1.0`. Therefore, `b` will be assigned the value `1.0`.

(e) The statement `a = 15/10.0 + 3/2` assigns a value 3 to `a`.
--->
False. As mentioned in statement (a), integer division truncates the decimal part. In this case, `15/10.0` evaluates to `1` , and `3/2` evaluates 
to `1`  dur integer division. Adding `1` and `1` together results in `2`, not `3`. Therefore, `a` will be assigned the value `2`, not `3`.

2. Which of the following expressions are true?
(a) !(5 + 5 >= 10)
(b) 5 + 5 ==10||1+3==5 
(c) 5 > 10||10<20 && 3 < 5
(d) 10!= 15 && !(10<20) || 15> 30

(a) !(5 + 5 >= 10)
First, we calculate 5 + 5, which gives us 10. Then we evaluate if 10 is greater than or equal to 10, which is true. 
Finally, we negate the result with the "!" operator. Therefore, !(5 + 5 >= 10) = 0 i.e !(5 + 5 >= 10) is false.

(b) 5 + 5 == 10 || 1 + 3 == 5
Here, we evaluate two conditions using the "==" operator. First, we check if 5 + 5 is equal to 10, which is true. Then we check 
if 1 + 3 is equal to 5, which is false. Using the "||" operator (logical OR), if any of the conditions is true, the whole 
expression becomes true. Since one of the conditions is true, 5 + 5 == 10 || 1 + 3 == 5 is true.

(c) 5 > 10 || 10 < 20 && 3 < 5
In this expression, we have three conditions combined with logical operators. First, we check if 5 is greater than 10, which is 
false. Then we evaluate the second part of the expression, 10 < 20, which is true. Finally, we evaluate the last part, 3 < 5, 
which is also true. Now, using the "||" operator (logical OR), if any of the conditions is true, the whole expression becomes 
true. Since the second and third conditions are both true, 5 > 10 || 10 < 20 && 3 < 5 is true.

(d) 10 != 15 && !(10 < 20) || 15 > 30
In this expression, we have three conditions combined with logical operators. First, we check if 10 is not equal to 15, which is 
true. Then we evaluate the second part of the expression, !(10 < 20), which is false. The "!" operator negates the result of the 
condition, so !(10 < 20) is false. Finally, we check if 15 is greater than 30, which is false. Now, using the "&&" operator 
(logical AND), all conditions must be true for the whole expression to be true. Since the second condition is false, 10 != 15 
&& !(10 < 20) || 15 > 30 is false.

To summarize:P
(a) !(5 + 5 >= 10) is false.
(b) 5 + 5 == 10 || 1 + 3 == 5 is true.
(c) 5 > 10 || 10 < 20 && 3 < 5 is true.
(d) 10 != 15 && !(10 < 20) || 15 > 30 is false.

3. Which of the following arithmetic expressions are valid?If valid, give the value of the expression; otherwise give reason.
(a) 25/3 % 2 (b) +9/4 + 5 (c) 7.5 % 3 (d) 14 % 3 + 7 % 2 (e) -14 % 3 (f) 15.25+-5.0  (g) (5/3) * 3 + 5 % 3 (h) 21 % (int)4.5

--(a) 25/3 = 8 (decimal part is removed); now 8%2=0. Valid and value = 0.
--(b) 9/4 = 2 (decimal part is removed); now 2 + 5 = 7. Valid and value = 7. 
--(c) float value can not be used with % . Invalid
--(d) 14%3=4;7%2=3. Valid and value = 7.
--(e) Valid and value = -4
--(f) Valid and value = 10.25
--(g) 5/3=1;5%3=2; Valid and value = 3
--(h) the value 4.5 is cast to an integer using (int). so 21%4=1. Valid and value = 1.
*/


/*4. Write C assignment statements to evaluate the following equations:
(a) Area = πr² +2πrh 
(b) Torque = (2m₁m₂/(m₁+m₂))*g
(c) Side = sqrt(a² + b² - 2ab * cos(x))
(d) Energy = mass [acceleration * height+(velocity)²/2]  */

#include<stdio.h>
#include <math.h>
int main()
{
    //(a) Area = πr² + 2πrh
    float radius = 5.0,height = 10.0, pi = 3.14159, area;
    area = pi * pow(radius, 2) + 2 * pi * radius * height;
    printf("Area: %.2f\n", area);

    //(b) Torque = (2m₁m₂/(m₁+m₂)) * g
    float m1 = 5.0, m2 = 3.0, g = 9.81;
    float torque = (2 * m1 * m2 / (m1 + m2)) * g;
    printf("Torque: %.2f\n", torque);
    
    //(c) Side = sqrt(a² + b² - 2ab * cos(x))
    float a = 3.0, b = 4.0, x = 45; 
    float radians = x * 3.14159 / 180.0; // Convert degrees to radians
    float side = sqrt(pow(a, 2) + pow(b, 2) - 2 * a * b * cos(x));
    printf("Side: %.2f\n", side);

    //(d) Energy = mass * (acceleration * height + (velocity)²/2)
    float mass = 2.0, acceleration = 9.8, height = 10.0, velocity = 15.0;
    float energy = mass * (acceleration * height + pow(velocity, 2) / 2);
    printf("Energy: %.2f\n", energy);

    return 0;
}

/*5. Identify unnecessary parentheses in the following arithmetic expressions.
(a) ( (x - (y / 5) + z)% * 8) + 25
(b) ( (x - y) * p)+q 
(c) (m * n)+ (- x / y)
(d) x / (3 * y) 

Corrected expressions:
(a) `(x - (y / 5) + z) % 8 + 25`
(b) `(x - y) * p + q`
(c) `m * n + (-x / y)`
(d) `x / (3 * y)`

6. Determine the value of each of the following logical expressions if a = 5 b = 10 and c = - 6
(a) a > b && a < c 
(b) a < b && a > c
(c) a==c|| b > a
(d) b > 15 && c < 0 || a > 0
(e) (a/2.0== 0.0 && b/2.0 != 0.0)||c<0. 

(a)false
(b)true
(c)true as b>a
(d)true
(e)true

7. What is the output of the following program?
unsigned x = 1 ; signed y = -1;
if (x>y)
printf("x>y");
else
printf("x<= y");

---->
The unsigned integer x has a value of 1, while the signed char y after promotion (that allows for consistent comparison between 
signed and unsigned types.) to unsigned int will have the maximum value representable by an unsigned char (usually 255, 
depending on the implementation).

8. Find errors, if any, in the following assignment statements and rectify them.

(a) m = ++a*5;
(b) p *= x / y ; 
(c) s =/5: 
(d) a =b++ -c*2

There are a few errors in the provided code:

1. `m = ++a*5;` - This line seems fine assuming that `a` and `m` are declared and initialized properly. However, if `a` is not 
initialized before this statement, it can lead to undefined behavior.

2. `p *= x / y;` - This line also appears fine assuming that `p`, `x`, and `y` are declared and initialized properly. However, 
if `y` is equal to 0, it will result in a division by zero error.

3. `s =/5;` - This line contains a syntax error. The `/` operator should come before the `=` sign. It should be `s /= 5;` which 
means divide `s` by 5 and store the result back in `s`.

4. `a = b++ - c*2;` - This line seems fine assuming that `a`, `b`, and `c` are declared and initialized properly. However, the 
usage of the post-increment operator (`b++`) might lead to unexpected behavior. The value of `b` will be assigned to `a` before 
being incremented.

To summarize, the errors in the provided code are:
- Possible uninitialized variable (`a`) in the first line.
- Division by zero potential error in the second line (`y` being 0).
- Syntax error in the third line (`s =/ 5;` should be `s /= 5;`).
- Potential unexpected behavior due to post-increment operator in the fourth line (`b++`).
*/

/*
In C, an lvalue refers to an expression that represents a location in memory where a value can be stored. It refers to the 
left-hand side of an assignment expression and can be assigned a value. In simple terms, an lvalue is something that can be 
assigned to.
For example:
int x;  // 'x' is an lvalue because it represents a memory location that can hold a value
x = 10; // 'x' appears as an lvalue on the left-hand side of the assignment operator '='

int y = x; // 'y' is also an lvalue because it represents a memory location that can hold a value
In these examples, `x` and `y` are considered lvalues because they are variables that can store values.

On the other hand, an rvalue refers to an expression that produces a value but does not necessarily represent a memory location 
that can be assigned to. An rvalue can appear on the right-hand side of an assignment expression or as an operand of an 
arithmetic or logical operation.
For example:

int a = 5; // '5' is an rvalue because it is a constant value that cannot be assigned to
int b = a + 3; // The expression 'a + 3' is an rvalue because it produces a value but cannot be assigned to
In these examples, `5` and `a + 3` are considered rvalues because they produce values but are not assignable.

So, in summary, an lvalue represents a memory location that can be assigned to, while an rvalue represents an expression that 
produces a value but cannot be assigned to.
*/