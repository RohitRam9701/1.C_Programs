/*
                                                        Operators In C programming
An expression is a combination od operators and operands.The operands are the data to be processed and operators are symbols specifying the type of 
processing (i.e.various operations) to be done or performed  on one or more operands (values or variables). They are used to manipulate data and 
perform calculations. 
**Operand may be a variable, a constant or a data type qualifier.
**Expressions:combination of variables with arithmetic and other operators involved

C supports a rich set of operators, which are symbols used within an expression to specify the manipulations to be performed while evaluating that 
expression. C has operators for:



Unary Operator:++,--,!
A unary expression consists of a single operand and no operators. Examples of unary expressions are ++x (pre-increment), -x (negation), 
and !x (logical negation).

Binary Operator:
                  Arithmetic:+, -, *, /, % 
                  Relational:==,!=,>,<,<=,>=
                  Logical :&&,||,!
                  Bitwise:&,|,^,<<,>>
                  Assignment:=,+=,-=,*=,/=,%=,>>=,<<=,&=,^=,|=
Ternary Operator:Ternary or Conditional Operator(?:): This operator can be used to perform type conversion based on a condition. It has the form 
                 condition ? value1 : value2. Depending on the condition, it returns either value1 or value2, performing any necessary type 
                 conversions. 

Miscellaneous Operators:

**member selection:1.member access: .
                   2.pointer member access: ->
**subexpression grouping or calling functions or Function call operator: ( )
**Sequencing or Sequential-evaluation or Comma operator: ,
**typecast operator:(type)
**pointer operators:1.Address-of Operator (&):The address-of operator returns the memory address of a variable i.e. to assign the address of a 
                                              variable to a pointer,you use the address-of operator (&). 
                                              Syntax:&variable
                                              Example:
                                              int num = 20;
                                              int *ptr = &num;// 'ptr' holds the memory address of the variable  
                    2.Dereference operator(*): This operator is used to cast a pointer to a different type. It allows you to change 
                                                         the type of a pointer and access the data accordingly i.e to access the value stored 
                                                         at the memory address pointed to by a pointer, you use the dereference operator (*).
                                                         For example:
                                                         int value = *ptr;  // Retrieves the value stored at the address pointed to by 'ptr'
  pointer operators will be discussed later.

**two preprocessor operators:1.string-ize or string-izing operator(#)
                             2.token-pasting operator(##)
**Object size(Sizeof) Operator: Returns the size_t data type or variable in bytes of a given data type , representing the number of bytes required 
                                to store the operand.It is commonly used to calculate the size of an object or data type.
                                It is compile time operator that returns the no of bytes the operand occupies.
                                It is normally used to determine the lengths of arrays and structures when their sizes are not known to the programmer.
                                It is also used to allocate memory space dynamically to variable during execution of a program.
  Syntax: sizeof (operand) or sizeof(type)
  e.g.     m = sizeof(sum);
           n = sizeof(long int);
           k = sizeof(235L);

//           

**type conversion: (typename):

In C programming, type conversion operators(operator invoving type conversion) allow you to convert a value from one data type to another 
temporarily or explicitly. These operators help ensure that the correct type of operation is performed on the data. There are two types of 
type conversion : 

1.Implicit Type Conversion or Coercion or automatic type conversion
2.Explicit Type Conversion or Casting or (type) expression

//  1.Implicit Type Conversion or Coercion or automatic type conversion:

Implicit type conversion occurs automatically by the compiler when the types involved in an expression are compatible or you mix different data types 
in an expression. The compiler promotes one or both operands to a common type before performing the operation. It takes place when a value of one 
data type is assigned to a variable of another compatible data type.Implicit type conversion follows a set of rules known as "usual arithmetic 
conversions" to determine the resulting type.This conversion is performed when there is no loss of data or precision.

In short, C permits mixing of constants and variables of different types in an expression. C automatically converts any intermediate values to the
proper type so that the expression can be evaluated without loosing any significance.

It converts the types of operands from lower to higher.(e.g. from int to float)

conversion hierarchy:
short or char → int → unsigned int → long int → unsigned long int → float → double → long double

float to int causes truncation of the fractional part
double to int causes rounding of digits
long int to int causes dropping of the excess higher order bits.

Assignment Conversion Operator (=): This operator automatically performs type conversion during assignment. It converts the value on the right-hand
side of the assignment to the type of the variable on the left-hand side.

int num = 10;
double result;
result = num;  // Implicit conversion from int to double

For example:

int num1 = 10;
float num2 = num1;  // Implicit conversion from int to float
In the above example, the value of num1 (an integer) is implicitly converted to a float type when assigning it to num2.

Here are some examples:
A.Conversion from integer to float:

Arithmetic Conversion Operators: These operators are used during arithmetic operations when operands have different types. They automatically 
promote one or both operands to a common type before performing the operation. The common types used for arithmetic conversions in C are int, 
unsigned int, long, unsigned long, long long, unsigned long long, float, and double.

int num1 = 10;
float num2 = 3.14;
float result = num1 + num2;

B.Conversion from integer to double:

int num1 = 10;
double num2 = 5.5;
double result = num1 * num2;

C.Conversion from smaller integer type to larger integer type(Integer Promotion)

short num1 = 10;
int num2 = 20;
int result = num1 + num2;

//  2.Explicit Type Conversion or Casting or (type) expression:(force type conversion)

It allows user to convert explicitly a value from one data type  of a variable or an expression temporarily, overriding the default type conversion 
rules to another data type using type conversion operators(typecast or cast operator), even if the types are not compatible and this process is 
called typecasting. It is denoted by enclosing the desired data type in parentheses and placing it before the expression or variable to be converted.
This conversion is performed when there is a possibility of data loss or a need to force the conversion.

Syntax: (data_type) expression  or (type) expression or (type_name) expression

The (type_name) specifies the target data type you want to convert the expression to. 

For example:

int a = 10;
double b = (double)a;
// b becomes 10.0 (integer 'a' is converted to double)

The most commonly used casting operators in C are:

(type) : Converts a value to the specified type.
int() : Converts a value to an integer.
float() : Converts a value to a float.
double() : Converts a value to a double.
char() : Converts a value to a character.
long() : Converts a value to a long integer.
unsigned() : Converts a value to an unsigned integer.
void() : Converts a value to a void type (used in function pointers).

A.Casting from integer to float:

int num = 10;
float result = (float)num;

B.Casting from float to integer:

float num1 = 3.14;
int num2 = (int)num1;// Explicit conversion from float to int
In the above example, the value of num1 (a float) is explicitly converted to an int type using the (int) type conversion operator.

C.Casting from character to integer:

char ch = 'A';
int result = (int)ch;

It's important to note that type conversion may result in loss of precision or information or truncation of data. Therefore, you should be careful 
when performing explicit type conversions to ensure the correctness and integrity of your program.For example, when converting from a floating-
point type to an integer type, the fractional part is truncated.

It's worth mentioning that C also provides a set of library functions for more complex type conversions, such as atoi() (string to integer), 
atof() (string to float), itoa(), and sprintf() (formatting values into strings), among others. These functions are commonly used for converting 
values between different types(strings and numerical types).

Remember to use type conversion operators carefully, as improper use can lead to unexpected behavior or incorrect results in your program.

//  **OperatorPrecedence-and-associativity

Rank or Precedence    Operator           Description                                         Associative   

 1                      ()             Function call or Parentheses                         Left to Right                          
                        []             Array element reference or array subscripting        Left to Right 
                         .             member access                                        Left to Right 
                        ->             pointer member access                                Left to Right 
                        ++             postfix increment                                    Left to Right
                        --             postfix decrement                                    Left to Right

 2                      ++             prefix increment                                     Right to Left
                        --             prefix decrement                                     Right to Left
                        +              unary plus                                           Right to Left
                        -              unary minus                                          Right to Left
                        !              logical not or logical negation                      Right to Left
                        ~              bitwise not or ones complement                       Right to Left                     
                        *              pointer reference or indirection                     Right to Left
                        &              address or address-of                                Right to Left
                     sizeof            size of an object                                    Right to Left
                     (type)            cast or type cast(conversion)                        Right to Left
                     _Alignof          alignment requirement                                Right to Left

 3                      *              multiplication                                       Left to Right
                        /              division                                             Left to Right
                        %              modulus                                              Left to Right

 4                      +              Addition                                             Left to Right
                        -              Subtraction                                          Left to Right

                        <=             Less than or equal to                                Left to Right
 5                      <<             Left shift                                           Left to Right
                        >>             Right shift                                          Left to Right

 6                      <              Less than                                            Left to Right
                        >              Greater than                                         Left to Right
                        >=             Greater than or equal to                             Left to Right

 7                      ==             Equality                                             Left to Right
                        !=             Inequality                                           Left to Right

 8                       &             Bitwise AND                                          Left to Right

 9                       ^             Bitwise XOR                                          Left to Right

 10                      |             Bitwise OR                                           Left to Right

 11                      &&            Logical AND                                          Left to Right

 12                      ||            Logical OR                                           Left to Right

 13                      ?:            Conditional expression                               Right to Left

 14                      =             Assignment operators                                 Right to Left
                        *= /= %=
                        += -= &=
                        ^= !=
                        <<= >>=

 15                        ,           Comma operator                                       Left to Right

 Associativity is used to decide which of several different expressions is evaluated first.

 Parentheses can be used to change the order of evaluation expressions.*/