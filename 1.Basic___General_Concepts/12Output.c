#include<stdio.h>
#include <ctype.h>
#define WISH "Good Morning Darjeeling"
void main()
{
  puts("Using Basic math operators on 7 & 6:");                                     
  printf("Addition is %f\n",7.0+6);//%d gives 0 (error) as result of addition of 7.0 and 6 so use float %f
  printf("Subtraction is %d\n",7-6);
  printf("Multiplication is %d\n",7*6);
  printf("Division is %d\n",7/6);

  //Output of Integer Numbers    //   Output
  int x=9876;                    
  printf("%d\n",x);              //   9 8 7 6
  printf("%6d\n",x);             //   _ _ 9 8 7 6
  printf("%4d\n",x);             //   9 8 7 6
  printf("%-06d\n",x);           //   9 8 7 6 _ _  
  printf("%06d\n",x);            //   0 0 9 8 7 6
  printf("%10d\n",x);            //   _ _ _ _ _ _ 9 8 7 6                   
  printf("%-10d\n",x);           //   9 8 7 6 _ _ _ _ _ _                     
  printf("%10.6d\n",x);          //   _ _ _ _ 0 0 9 8 7 6                       
  printf("%-10.6d\n",x);         //   0 0 9 8 7 6 _ _ _ _                             
  printf("%*d\n", 10, x);        //   _ _ _ _ _ _ 9 8 7 6                
  printf("%*.*d\n",8,4,x);       //   _ _ _ _ 9 8 7 6                             
  printf("%-+4d\n",x);           //   + 9 8 7 6                            

  //Output of Real Numbers       //   Output
  float y=98.7654;               
  printf("%7.4f\n",y);           //   9 8 . 7 6 5 4
  printf("%7.2f\n",y);           //   _ _ 9 8 . 7 7
  printf("%-7.2f\n",y);          //   9 8 . 7 7 _ _
  printf("%f\n",y);              //   9 8 . 7 6 5 4 0 4 
  printf("%.5f\n",y);            //   9 8 . 7 6 5 4 0
  printf("%5.0f\n",y);           //   _ _ _ 9 9
  printf("%+7.2f\n",y);          //   _ + 9 8 . 7 7 
  printf("%-+7.2f\n",y);         //   + 9 8 . 7 7 _
  printf("%f\n",y);              //   9 8 . 7 6 5 4 0 4               
  printf("%08.2f\n",y);          //   0 0 0 9 8 . 7 7                    
  printf("%#6.0f\n",y);          //   _ _ _ 9 9 .                      
  printf("%.*f\n", 4, y);        //   9 8 . 7 6 5 4
  printf("%*.*f\n", 8, 4, y);    //   _ 9 8 . 7 6 5 4

  printf("%10.2e\n",y);          //   _ 9 . 8 8 e + 0 1
  printf("%-10.2e\n",y);         //   9 . 8 8 e + 0 1 _ 
  printf("%11.4e\n",-y);         //   - 9 . 8 7 6 5 e + 0 1
  printf("%12.4e\n",-y);         //     - 9 . 8 7 6 5 e + 0 1
  printf("%e\n",y);              //   9 . 8 7 6 5 4 0 e + 0 1   
      

  //Printing of Strings          //   Output
  char m[20]="NEW DELHI 110001"; //   1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0  //String is kept inside " "//
  printf("%s\n",m);              //   N E W   D E L H I   1 1 0 0 0 1 
  printf("%20s\n",m);            //           N E W   D E L H I   1 1 0 0 0 1 
  printf("%20.10s\n",m);         //                       N E W   D E L H I    
  printf("%-20.10s\n",m);        //   N E W   D E L H I  
  printf("%5s\n",m);             //   N E W   D E L H I   1 1 0 0 0 1 
  printf("%.5s\n",m);            //   N E W   D 
  printf("**%20.10s\n",m);       //   * *                     N E W   D E L H I 
  printf("**%8.5s\n",m);         //   * *       N E W   D
  char n[10]="cricket";
  printf("**%8.5s\n",n);         //   * *       c r i c k

  puts("\nHello World!!\tMake a mission and get it");
  puts("I am ready.\n Now ,you go.");
  puts(WISH);                                                                  
  puts("Good\t\tMorning\t\tDarjeeling");                                       
  puts("Arise, awake, and stop not\nTill your goal is reached");

  char jerk[20],p='D';//single character is kept inside ' '//
  printf("\n%c\n%3c\n%5c\n%3c\n%c\n",p,p,p,p,p);
  puts("Name some jerk you know:");
  gets(jerk);//gets() is not considered a safe, secure function to use.
  printf("Yeah, I think %s is a jerk, too.\n",jerk);

  //
 printf("\nYour name is %s.","Ram");    //Your name is Ram.
 printf("\nYour name is ""Ram.");       //Your name is Ram.
 printf("\nYour name is ","Ram.");      //Your name is 
 printf("\nYour name is %s""Ram.");     //Your name is (null)Ram.

  char alphabet;
  printf("\nEnter an alphabet");                                            
  putchar('\n');
  alphabet = getchar();
  if (islower(alphabet))
    putchar(toupper(alphabet));//Reverse and display                  
  else                                                              
    putchar(tolower(alphabet));//Reverse and display
  //The program uses three new functions: islower, toupper, and tolower. The function islower is a conditional function and takes the 
  //value TRUE if the argument is a lowercase alphabet; otherwise takes the value FALSE.The function toupper converts the lowercase 
  //argument into an uppercase alphabet while the function tolower does the reverse   
}
/*
A.Formatted Text Output:printf() function can display all data-types and work with multiple arguments and format data.
  
   printf("control string with placeholders",data list or arguments);      //control string(format string) = data to displayed on screen,
   escape sequences and format specifiers also known as type specifiers(that function as placeholders) ,  data list = data1,data2,....  &
   arguments = arg1,arg2,....
   
   Characteristics:
    1.A printf() function has a single control string (within inverted commas) with or without any data list.
    2.There can be none or multiple data items in the data list where in case of multiple data items,a format specifier must be included
      in the control string for each data item in the list in a correct order accordingly.
   
   % w.p type-specifier//w=integer specifying the total nos. of columns for the output
                         p=integer specifying the no. of digits to the right of the decimal point(of a real number) or
                           the no. of the characters to be printed from a string.
                         w & p are optional

   Output of Integer Numbers:  

   % w d //w=minimum field width for the output but if a no. n > the specified field width ,it will be printed in full,overriding the 
             minimum specification
           d=an integer value to be printed
   e.g.;int a=3; printf("The square of %d is %d.",a,a*a);     //output:The square of 3 is 9.

   Output of Real Numbers:      

   % w.p f    //w=minimum no. of positions that are to be used for the display of the value/field width specifier
                p=the no. of digits to be displayed after the decimal point(precision).The default precision is 6 decimal places.
   for exponential number 
   %w.p e     The display takes the form   [-]m.nnnne[+-]xx
   where the length of the string of n's is specified by the precision p.The default precision is 6The field width w should satisfy
         w>=p+7

   printf("%*.*f",width,precision,number);       e.g.;printf("%*.*f",7,2,number); is equivalent to  printf("%7.2f",number); 

   Printing of a single character: %wc//w=field width specifier,the default value for w =1

   Printing of Strings:%w.ps/p instructs that only the 1st p characters of the string are to be displayed.
    
   Mixed Data Output: printf("%d %f %s %c",a,b,c,d);

   Commonly used Output Format flags 
   Flags               Meaning
   -                   Output is left-justified within the field .Remaining field will be blank.
   +                   + or - will precede the signed numeric item.   
   0                   Causes leading zeros to appear.
   #(with o or x)      Causes octal and hex items to be preceded by O or Ox resp.
   #(with e,f or g)    Causes a decimal point to be present in all floating point numbers,even if it is whole number.Also prevents the 
                       truncation of trailing zeros in g-type conversion.
B.Unformatted Text Output:
		 
	 1.putchar(single character) is used for writing characters one at a time to the terminal. It takes the form as shown below:

     putchar (variable_name);
     where variable_name is a type char variable containing a character. This statement displays the character contained in the 
     variable_name at the terminal. For example, the statements
       
                        putchar('Y');
                        or
                        answer = 'Y';
                        putchar (answer);

     will display the character Y on the screen. The statement

                         putchar ('\n');

     would cause the cursor on the screen to move to the beginning of the next line.       

    **How can you use the putchar function to output multi character strings?

    Sol: The `putchar` function in C is used to write a single character to the standard output (usually the console). To output 
         multi-character strings, you can use `putchar` in a loop to print each character of the string. Here is an example:
             #include <stdio.h>
             int main() 
             {
              char str[] = "Hello, World!";
              int i = 0;
              while (str[i] != '\0') 
              {
                putchar(str[i]);
                i++;
              }
              return 0;
             }

    In this program, `putchar` is called in a loop to print each character of the string `str` until the null character (`'\0'`) is 
    encountered, which marks the end of the string.

   2.Whereas the putchar() function displays a character on the screen, the puts()(not pronounced “putz”) function is used to display an 
     unformatted text string on the screen.You don’t have to put a \n at the end of a puts() text string because puts() always displays 
     the newline character at the end of its output whereas the printf() function doesn’t tack a newline character at the end of its 
     output.

       /*    When to use puts()                                                            When to use printf()

      Use puts() to display a single line of                                  Use printf() to display the contents of a variable
      text — nothing fancy.                                                   nestled in the middle of another string.
      Use puts() to display the contents of a                                 Use printf() to display the contents of more than 
      string variable on a line by itself.                                    one variable at a time. 
                                                                              Use printf() when you don’t want the newline (Enter)
                                                                              character to be displayed after every line, such as 
                                                                              when you’re prompting for input.   
                                                                              Use printf() when fancy formatted output is required.*                       
*/