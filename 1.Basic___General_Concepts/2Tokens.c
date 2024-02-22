/*To print an integer entered by you*/
#include <stdio.h>
int main()
{
	int a;
	printf("Enter an integer:");//printf shows the output written within the inverted commas
	scanf("%d", &a);//scanf inputs the input
	printf("Integer that you have entered is %d.\n",a);

/*write a program that will print your mailing address in the following form:
    First line        :     Name
    Second line       :     Door No., Street
    Third line        :     City, Pin code   */
    // Define variables for the address components
    char name[] = "John Doe";
    char doorStreet[] = "123 Main Street";
    char cityPin[] = "Cityville, 12345";
    
    // Print the mailing address
    printf("First line   : %s\n", name);
    printf("Second line  : %s\n", doorStreet);
    printf("Third line   : %s\n", cityPin);
    
	return 0;
}
/*C Character Set:A.Alphabet(Letters):1.Uppercase A.....Z
                                      2.Lowercase a.....z
				  B.Digits:All decimal digits 0....9
				  C.White Spaces:Blank Space
				                 Horizontal Tab
								 Carriage return
								 New line
								 Form feed
				  D.Special Characters: , comma                  & ampersand
				                        . period                 ^ caret
                                        ; semicolon              * asterisk
										; colon                  - minus sign
										? question mark          + plus sign   
										' apostrophe             < opening angle bracket(or less than sign)
										" quotation mark         > closing angle bracket(or greater than sign) 
										! exclamation mark       ( left parenthesis
										| vertical bar           ) right parenthesis
										/ slash                  [ left (square) bracket     
										\ backslash              ] right (square) bracket
										~ tilde                  { left brace
										_ underscore             } right brace
										$ dollar sign            # number sign
										% percent sign   
  Trigraph Characters:Some keyboards do not have some special characters so use trigraph sequence to get that charater
                   Trigraph sequence            Translation
                         ??=                   # number sign
						 ??(                   [ left bracket
						 ??)                   ] right bracket  
						 ??<                   { left brace 	
						 ??>                   } right brace 
						 ??!                   | vertical bar 
                         ??/                   \ back slash 
                         ??\                   ^ caret 
						 ??-                   ~ tilde 
  C Tokens :
    A.Keywords(Reserved Words):These keywords are used to construct  a C program and cannot be used for any other purpose.
                  C Language Keywords(44)
      _Alignas(c11)             break        float           signed         //c89-32 ;c99-5 ;c11-7
      _Alignof(c11)             case         for             sizeof
      _Atomic(c11)              char         goto            static
      _Bool(c99)                const        if              struct
      _Complex(c99)             continue     inline(c99)     switch
      _Generic(c11)             default      int             typedef
      _Imaginary(c99)           do           long            union
      _Noreturn(c11)            double       register        unsigned
      _Static_assert(c11)       else         restrict(c99)   void
      _Thread_local(c11)        enum         return          volatile
      auto                      extern       short           while
      remaining are c89

	B.Identifiers:Identifiers refer to user-defined names of variables,constants,functions,arrays,structures etc.that are used to identify
	  the different parts of a program. 
	  Naming Rules for Identifiers:
	     1.Cannot be any keyword
		 2.Must consist of only letters,digits or underscore
		 3.1st character must be an alphabet or underscore not digit i.e.;it cannot start with a digit
		 4.Must not contain a blank space(white space)
		 5.Only first 31 characters are significant.
	  Identifier names are case-sensitive i.e. NAME and name are different identifiers in C. 

    C.Literals(Constants):It can be numeric(PI as 3.14159) or alphanumeric(like an input prompt as "Enter your name:").

	D.Operators:These are certain special symbols or combination of symbols to do specific operations like adding two numbers,comparing 
	  two values ,incrementing a number etc.
	  & + -  * / % = > < >= <= == != ++ -- += -= *= /= %= -> && || etc.

	E.Punctuators(Special symbols): ()  {}  [] ; : , etc.

	F.Instructions:
	   1.Type declaration instructios:declaration of variables
	   2.Input/Output instructions
	   3.Arithmetic instructions
	   4.Control instructions:Used for controlling the flow of a program i.e. to control the execution of various statements in C program.
	     e.g.;If (x%==2) printf("\n Even number:"); else printf("\n Odd number:");

    G.Strings:e.g.; "ABC" , "year"etc.

	H.Functions:It is a group of statements that perform some meaningful work and normally returns a result back to the point from where 
	  it was used .you can supply data to the function for processing and get the result back from it.
	  You can have both user-defined and library functions.
	  The process of defining a function is called 'function definition'and the process of using it is called 'function call'.

*/
/*The keyword typedef can be used to create a data type identifier.

The following variable names are invalid in C and the reasons are provided for each:

1. n1+n2: This is an invalid variable name because it contains the '+' operator. Variable names cannot contain operators or special characters like 
          '+', '-', '*', '/', etc.

2. n$: This is an invalid variable name because it contains the '$' character. Variable names in C cannot contain special characters, except for 
       the underscore ('_').

3. &name: This is an invalid variable name because it contains the '&' character. Variable names cannot start with special characters, and '&' is 
          an operator used for taking the address of a variable.

4. First.name: This is an invalid variable name because it contains the dot ('.') character. Variable names in C cannot contain the dot character 
               as it is reserved for accessing structure members or invoking methods in object-oriented programming languages.

5. Row Total: This is an invalid variable name because it contains a space. Variable names cannot have spaces or any whitespace characters in C. 
              If you want to represent multiple words, you can use an underscore ('_') instead, such as "Row_Total" or "rowTotal".

6. Column-total: This is an invalid variable name because it contains a hyphen ('-'). Variable names cannot contain hyphens in C. If you want to 
                 represent multiple words, you can use an underscore ('_') instead, such as "Column_total" or "columnTotal".

7. float: This is an invalid variable name because "float" is a reserved keyword in C. Reserved keywords have predefined meanings in the language 
          and cannot be used as variable names.
*/		  