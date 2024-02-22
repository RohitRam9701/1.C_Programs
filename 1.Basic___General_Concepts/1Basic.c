/*Adding 2 nos.*/                  /*Documentation Section/Comment*/
#include"stdio.h"                  /*Linking section/#include section/Pre-processor directive:
                                     It provides instructions to the compiler to link functions from the system library i.e.;it contains 
                                     directives(#include)or commands to be executed by preprocessor to combine specified header files with
                                     program file to enable compiler generate machine  language  code  of  the function used in program 
                                     and described in the header files(contains extension ".h") */
                                   /*Definition Section:It defines all symbolic constants.*/
                                   /*Global Declaration Section/External variable declaration:
                                     There are some variables that are used in more than one function.Such variables are called 'global 
                                     variables' and are declared in the global declaration section that is outside of all the functions.
                                     This section also declares all the user-defined functions*/
int main()                         /*Function Section/The main() function header(Program section starts below with main function):
                                     A.Declaration part:1)variable declaration statement,

                                     B.Executable part: 2)data input statement,
                                                        3)data processing statement,
                                                        4)data output statement*/
{                                  /*Delimiters:2 curly brackets(braces) from line 18 to 42*/
                                   /*Statement terminator:Semi-colon(;) is always used at the end of program*/
  int x,y,z;                       /*variable declaration statement/Declaration part/ local variable definition */             
  printf("\n Enter 2 numbers:");   /*data output statement/Output Instruction*/ 
  scanf("%d%d",&x,&y);             /*data input statement/Input Instruction:
                                                        1)Character(char)(8-bit):a)single character- %c
                                                                                 b)multiple character(i.e string = character array)- %s
                                                        2)Number(int)(16-bit)- %d(decimal),%o(octal without leading 0),%x(hexadecimal
                                                                                 without leading 0x), %i(any of previous 3)
                                                                               %u (unsigned integer),%h (short integer)
                                                                               **long int- %ld 
                                                        3)Fractional(float)(32-bit)- %f (decial form upto 6 decimal places)
                                                                                     %e (exponential power scientific format)
                                                                                     %g (decimal format & removing succeeding zeros)
                                                        4)Large functional(double)(64-bit)- %lf
                                                                                            %lg
                                                                                            %le
                                                        %a,%n,%p,%u are unknown. Rest alphabets do not work as specifiers  */
  z=x+y;                           /*data processing statement/Arithmetic Section:
                                    It performs mathematical and logical operation on data using various expressions(created by a no of 
                                    operators discussed in next chap.).Branching statements like If-else,switch-case & loop structures are 
                                    also a part of it*/
  printf("\n Sum of numbers:%d",z);/*data output statement*/
  return 0;                        /*Return statement*/
}
/*Subprogram section
   
   function 1
   function 2
      -              (User-defined functions)
      -
   function n   
*/
/*the part within inverted commas as in data I/O statements are called 'control string' */
/*Compared to scanf(), the gets() function is nice and simple. Both do the same thing: They read characters from the keyboard and save 
them in a variable. gets() reads in only text, however. scanf() can read in numeric values and strings and in a number of combinations.
That makes it valuable, but for reading in text, clunky.*/

/*There are several types of errors that can occur during program compilation in C. Here are some common types of errors:

1. Syntax Errors: These errors occur when the program violates the rules of the C syntax. It could be a missing semicolon, mismatched parentheses, 
   incorrect use of operators, or misspelled keywords.

2. Semantic Errors: Semantic errors occur when the program is grammatically correct but does not make sense logically. For example, using a variable 
   without declaring it, assigning an incompatible value to a variable, or passing arguments of the wrong type to a function.

3. Linker Errors: Linker errors occur during the linking phase of the compilation process. These errors happen when there are unresolved external 
   symbols or when there are multiple definitions of a symbol.

4. Type Errors: Type errors occur when there is a mismatch between the types of variables or values used in the program. For example, assigning an 
   integer value to a variable of type float, or passing an argument of the wrong type to a function.

5. Compiler Warnings: Compiler warnings are not necessarily errors but warnings issued by the compiler to indicate potential issues in the code. 
   These warnings can include unused variables, implicit type conversions, or deprecated functions.

6. Preprocessor Errors: Preprocessor errors occur during the preprocessing phase of compilation. These errors can include problems with include 
   directives, macro definitions, conditional compilation directives, etc. For example, if a required header file is not found or a macro is defined 
   incorrectly, preprocessor errors can occur.

7. Runtime Errors: Runtime errors occur when the program is executing and encounters an unexpected condition or behavior. These can include division 
   by zero, accessing invalid memory, or using uninitialized variables. Runtime errors may cause the program to crash or produce incorrect results.

8. Logic Errors: Logic errors occur when the program's code does not produce the expected output due to incorrect reasoning or algorithm design. 
   These errors can be challenging to detect and may require careful debugging to identify and fix.

It's important to carefully review and address any error messages or warnings produced by the compiler during the compilation process to ensure the 
program is correct and can be executed successfully.





/*State whether the following statements are true or false. 
(a) Every line in a C program should end with a semicolon.                                       
- True, because it indicates the end of a statement.
  An expression statement in C is terminated with a semicolon (;), not a period.

(b) The closing brace of the main() in a program is the logical end of the program.              
- False, because the closing brace of the main() function marks the end of the function, but not necessarily the logical end of the entire program. 
         There can be code or other functions after the main() function.

(c) Comments cause the computer to print the text enclosed between /* and */ //when executed.     
/*- False, because they are used to provide explanations or annotate the code for humans reading the code, not for the computer to print anything. 

(d) Every C program ends with an END word.                                                      
- False, because they end after the last line of code in the program.

(e) A printf statement can generate only one line of output.                                    
- False, because a printf statement in C can generate multiple lines of output by using escape characters like '\n' to indicate new lines.

(f) The purpose of the header file such as stdio.h is to store the source code of a program.    
- False, because the purpose of header files like stdio.h is to provide required function prototypes, constant definitions, and other declarations.

(g) A line in a program may have more than one statement.                                        
- True, because a line in a C program can have multiple statements separated by semicolons.

(h) Syntax errors will be detected by the compiler.                                              
- True, because syntax errors, such as missing semicolons or incorrect syntax, will be detected by the compiler during the compilation process.

(i) In C language lowercase letters are significant.                                            
- True, because in C, lowercase and uppercase letters are treated as different and significant.

(j) main() is where the program begins its execution.                                           
- True, because the main() function is the starting point of execution for a C program.

(k) Every C program must have at least one user-defined function.                               
- False, because a C program can exist without any user-defined functions, although most programs typically include functions.

(l) Declaration section contains instructions to the computer.                                  
- False, because the declaration section in C contains variable and type declarations but not instructions for the computer.

(m) Only one function may be named main().                                                       
- True, because the `main()` function serves as the entry point of the program, and the name is typically reserved for this specific purpose. 
        Attempting to define multiple functions named `main()` will result in a compilation error.

(n) Comments serve as internal documentation for programmers.                                   
- True, because comments in C serve as internal documentation for programmers to explain the code's purpose, provide explanations, or make notes.

(o) In C, we can have comments inside comments.                                                  
- False, because in C, comments cannot be nested inside other comments. A comment is terminated by the first occurrence of "*/ //after /*".
/*
(p) Use of comments reduces the speed of execution of a program.                                
- False, because they are completely ignored by the compiler and have no effect on runtime performance. 

(q) A comment can be inserted in the middle of a statement.                                      
- False, because comments cannot be inserted in the middle of a statement in C. They can only appear on their own line or after a statement, 
  starting with "//" for single-line comments or between '/*' and '*/ //for multi-line comments.

/*
**C programs are written in lowercase letters whereas uppercase letters are mainly used to define symbolic names and output strings.

**C language offers several built-in libraries that can be used in a program by including the relevant header files.

The C language offers several built-in libraries that provide various functionalities and can be used in a program by including the relevant header 
files. Some of the commonly used built-in libraries in C include:

1. `<stdio.h>`: This library provides functions for input and output operations, such as `printf()` and `scanf()`, to read from and write to the 
    standard input/output streams.This header file defines a set of functions, macros, and variable types that provide input and output capabilities 
    for C programs.

2. `<stdlib.h>`: This library provides general-purpose functions, including memory management functions like `malloc()` and `free()`, as well as 
    utility functions like `atoi()` and `rand()`.

3. `<math.h>`: This library provides mathematical functions, such as `sqrt()`, `sin()`, `cos()`, and `pow()`, allowing you to perform various 
    mathematical calculations.

4. `<string.h>`: This library provides functions for string manipulation, including functions like `strlen()`, `strcpy()`, `strcat()`, and 
   `strcmp()`, which allow you to work with strings efficiently.

5. `<time.h>`: This library provides functions for working with time and date, including functions like `time()`, `localtime()`, and `strftime()`, 
    which allow you to retrieve and manipulate time-related information.

6. `<stdbool.h>`: This library introduces the `bool` data type in C, along with the values `true` and `false`, providing a more convenient way to 
    work with Boolean values.

These are just a few examples of the built-in libraries in C. Depending on your program's requirements, you can include the relevant header files 
and make use of the functions and features provided by these libraries to enhance the functionality of your C program.




**In C, the `main()` function is the entry point of a program, and it is required for every C program. However, there are two common ways to declare 
  the `main()` function: `int main()` and `void main(void)`. The main difference lies in the return type and the parameter list of the function.

1. `int main()`:
   - Return type: `int`
   - Parameter list: No parameters or optional `argc` and `argv` parameters (used for command-line arguments)
   
   The `int` return type indicates that the `main()` function should return an integer value to the operating system when the program finishes 
   execution. The absence of parameters or optional `argc` and `argv` parameters signifies that the `main()` function does not accept any command-
   line arguments.

   Example:
   int main() {
       // Function body
       return 0;
   }
  

2. `void main(void)`:
   - Return type: `void` (no return value)
   - Parameter list: No parameters
   
   The `void` return type indicates that the `main()` function does not return any value to the operating system. The absence of parameters 
   signifies that the `main()` function does not accept any arguments, including command-line arguments. 

   Example:

   void main(void) {
       // Function body
   }
  
While both forms of `main()` are widely used, it is important to note that the C standard (ISO/IEC 9899) specifies the use of `int main()` as the 
correct form. Using `void main(void)` is considered non-standard and may not be portable across different compilers or platforms. It is recommended 
to use `int main()` for better compatibility and adherence to the C language standard. */