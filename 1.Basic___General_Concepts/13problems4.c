/*
write scanf statements to read the following data lists.
1. 78 B 45
2. 123 1.23 45A
3. 15-10-2002
4. 10 TRUE 20

Sure, here are the `scanf` statements to read the data lists you provided:

1. For `78 B 45`, you can use:
  int num1, num3;
  char ch;
  scanf("%d %c %d", &num1, &ch, &num3);
2. For `123 1.23 45A`, you can use:
  int num;
  float fnum;
  char str[4];
  scanf("%d %f %s", &num, &fnum, str);
3. For `15-10-2002`, you can use:
  int day, month, year;
  scanf("%d-%d-%d", &day, &month, &year);
4. For `10 TRUE 20`, you can use:
  int num1, num2;
  char str[5];
  scanf("%d %s %d", &num1, str, &num2);
Please replace the variable names (`num1`, `num2`, `ch`, `str`, etc.) with the actual variable names you are using in your program. 
*/

/*
 State the outputs produced by the following printf statements.

(a) printf ("%d%c%f", 10, 'x', 1.23);

(b) printf ("%2d%c %4.2f", 1234,, 'x', 1.23);

(c) printf ("%d\t%4.2f", 1234, 456);

( d) printf ("\"%08.2f\"", 123.4);

(e) printf ("%d%d %d", 10, 20);

(a) Output: 10 x 1.230000

(b) Output: This statement will cause a compilation error due to extra comma.

(c) Output: 1234    456.00

(d) Output: "00123.40"

(e) Output: This statement will cause a compilation error because the printf function expects three arguments for the three format 
    specifiers (%d, %d, and %d), but only two arguments (10 and 20) are provided.
*/

/*
For questions 1 to 4 assume that the following declarations have been made in the program:
    int year, count; 
    float amount, price; 
    char code, city [10];
    double root;

1. What will be the values stored in the variables year and code when the data 1988, x is keyed in as a response to the following 
   statements:
   (a) scanf("%d %c", &year, &code);
   (b) scanf("%c %d", &year, &code);
   (c) scanf("%d %c", &code, &year);
   (d) scanf("%s %c", &year, &code);

Sol: (a) scanf("%d %c", &year, &code); will assign 1988 to year and 'x' to code. 
     (b) scanf("%c %d", &year, &code); will cause undefined behavior because it tries to read a character into an integer variable and an 
         integer into a character variable. 
     (c) scanf("%d %c", &code, &year); will cause undefined behavior because it tries to read an integer into a character variable and a 
         character into an integer variable. 
     (d) scanf("%s %c", &year, &code); will cause undefined behavior because it tries to read a string into an integer variable.

2. The variables count, price, and city have the following values:
   count <______ 1275
   price<______ -235.74
   city<______ Cambridge
   Show the exact output that the following output statements will produce: 
   (a) printf("%d %f", count, price);
   (b) printf("%2d\n%f", count, price);
   (c) printf("%d %f", price, count);
   (d) printf("%10dxxxx%5.2f",count, price);
   (e) printf("%s", city);
   (f) printf(%-10d %-15s", count, city);

Sol: (a) printf("%d %f", count, price); will output: 1275 -235.740000 
     (b) printf("%d\n%f", count, price); will output: 1275\n-235.740000 
     (c) printf("%d %f", price, count); will cause undefined behavior because it tries to print a float as an integer and an integer as
         a float. 
     (d) printf("%10dxxxx%5.2f",count, price); will output:       1275xxxx-235.74 
     (e) printf("%s", city); will output: Cambridge 
     (f) printf("%-10d %-15s", count, city); will output: 1275       Cambridge      

3. State what (if anything) is wrong with each of the following output statements:
   (a) printf(%d 7.2%f, year, amount);
   (b) printf("%-s, %c"\n, city, code);
   (c) printf("%f, %d, %s, price, count, city);
   (d) printf("%c%d%f\n", amount, code, year);

Sol: (a) printf(%d 7.2%f, year, amount); is incorrect because it’s missing double quotes around the format specifiers. 
     (b) printf("%-s, %c"\n, city, code); is incorrect because the - flag is not applicable to strings, and there’s an extra double quote 
         before the newline character. 
     (c) printf("%f, %d, %s, price, count, city); is incorrect because it’s missing double quotes around the format specifiers. 
     (d) printf("%c%d%f\n", amount, code, year); is incorrect because it tries to print a float as a character, a character as an integer, 
         and an integer as a float.

4. In response to the input statement
   scanf("%4d%*%d", &year, &code, &count);
   the following data is keyed in:
                        19883745
   What values does the computer assign to the variables year, code, and count?

Sol: scanf("%4d%*%d", &year, &code, &count);, year will be assigned the value 1988 because of the %4d.code and count will not be assigned any 
     values because %*%d is not a valid format specifier.The * is used in scanf to ignore a field, but it should be placed just before the 
     conversion specifier (like d for int), not before the % symbol.


**Describe the purpose of commonly used conversion characters in printf and scanf functions in C:
Sol:
printf function:

%d or %i: Signed decimal integer.
%u: Unsigned decimal integer.
%x: Hexadecimal integer.
%o: Octal integer.
%s: String.
%c: Single character.
%f: Fixed decimal floating point.
%e: Scientific notation floating point.
%g: Use f or e, whichever is shorter.
%ld: Signed long integer.
%lu: Unsigned long integer.
%p: for printing memory addresses
scanf function:

%d: Reads an integer value.
%f: Reads a floating-point value.
%c: Reads a single character.
%s: Reads a string of characters.
%lf: Reads a double-precision floating-point value

**How does control string in a printf function differ from control string in a scanf function?

Sol:
The control strings in printf and scanf functions in C serve different purposes:

printf function: The control string in printf is used to format the output. It can contain text that will be printed verbatim, and 
                 placeholders (conversion specifiers) for variables that will be replaced by their values when printed. For example, 
                 printf("%d", num); will print the value of num as a decimal integer.

scanf function: The control string in scanf is used to specify the type and format of the input data to be read. It contains conversion 
                specifiers that correspond to the types of the variables where the input data will be stored. For example, 
                scanf("%d", &num); will read an integer from the input and store it in num.

Here are some key differences between the control strings in printf and scanf:

    Usage of ‘*’: In printf, ‘*’ in a specifier indicates a width/precision, while in scanf, it indicates not to save the scanned item.

    Return Values: printf returns the printed character count, while scanf returns the conversion count.
    
    Handling of Floating-Point Values: scanf requires %lf to scan a double value, whereas printf uses %f to output a double value.
    
    Precision Control: scanf has no precision control, while printf does.
    
    Whitespace Handling: A whitespace in scanf consumes 0 or more any white spaces. In printf, it is always printed as is.
    
    Width Specification: A width in scanf is the maximum number of characters to scan. With printf, it is the minimum number of characters 
                         to print.
Remember, when using these functions, the arguments must correspond properly with the conversion specifier. For example, the %d conversion 
specifier reads integer values, while the %f specifier reads floating-point values. Similarly, the %c conversion specifier won’t 
automatically skip any leading whitespace, so if there’s a stray newline in the input stream (from a previous entry, for example) the 
scanf call will consume it immediately. One way around the problem is to put a blank space before the conversion specifier in the format 
string: scanf(" %c", &c);

**what happens when there are more or fewer characters than the specified field width in an input data or an output data?
Sol:
printf function:
  If an output data item contains more characters than the minimum field width specified, the minimum field width is ignored, and the 
  output is formatted to accommodate the additional characters. This means that the entire data item will be displayed.
  If the number of characters in the corresponding data item is less than the specified field width, the data item will be preceded by 
  enough leading blanks to fill the specified field.
scanf function:
  If an input data item contains more characters than the specified field width, any character that extends beyond the specified field 
  width will not be read, and may be incorrectly interpreted as the components of the next data item.
  If the data item may be composed of fewer characters than the specified field width, it doesn’t cause any issues.

**How are the unrecognised characters within the controlled string are interpreted in scanf and printf function?

Sol:
In C programming, the `printf` and `scanf` functions interpret unrecognized characters within the control string in the following ways:

**printf function:**
Unrecognized characters in the control string of `printf` are usually printed as they are. However, if an unrecognized character follows 
a `%`, it could lead to undefined behavior. For example, `printf("%k", 5);` might cause a runtime error or print unexpected characters 
because `%k` is not a recognized conversion specifier.

**scanf function:**
Unrecognized characters in the control string of `scanf` are expected to match exactly with the input. If the input does not match the 
exact character, `scanf` stops reading the input. For instance, `scanf("%d | %d", &a, &b);` expects to read two integers separated by 
' | '. If the input is "5 6", `scanf` will only read '5' into 'a', and 'b' will remain uninitialized because the input does not contain 
' | '.

Remember, when using these functions, the arguments must correspond properly with the conversion specifier. For example, the `%d` 
conversion specifier reads integer values, while the `%f` specifier reads floating-point values. Similarly, the `%c` conversion 
specifier won't automatically skip any leading whitespace, so if there's a stray newline in the input stream (from a previous entry, 
for example) the `scanf` call will consume it immediately. One way around the problem is to put a blank space before the conversion 
specifier in the format string: `scanf(" %c", &c);`.
*/