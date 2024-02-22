#include<stdio.h>
void main()
{ 
  //Inputting Integer numbers
  int a,b,c,e,f,l,m,i,j,k;  
  printf("Enter 3 numbers:\n");              //Enter 3 numbers:
  scanf("%d %*d %d",&a,&b,&c);               //1 2 3
  printf("%d %d %d \n\n",a,b,c);             //1 3 515(garbage) 
  //here a=1,2nd value is skipped (due to *) so value of c transferred to b i.e.,b=3 and c=garbage.//
  printf("Enter two 4-digit numbers:\n");    //Enter two 4-digit numbers:
  scanf("%2d %4d",&l,&m);                    //6789 4321
  printf("%d %d \n\n",l,m);                  //67 89
  printf("Enter 2 numbers:\n");              //Enter 2 numbers:
  scanf("%d %d",&a,&l);                      //44 66
  printf("%d %d \n\n",a,l);                  //4321 44
  printf("Enter a 9-digit number:\n");       //Enter a 9-digit number:
  scanf("%3d %4d %3d",&i,&j,&k);             //123456789
  printf("%d %d %d \n\n",i,j,k);             //66 1234 567
  printf("Enter two 3-digit numbers:\n");    //Enter two 3-digit numbers:
  scanf("%d %d",&l,&m);                      //123 456
  printf("%d %d \n\n",l,m);                  //89 123  
  printf("Enter two 3-digit numbers:\n");    //Enter two 3-digit numbers:
  scanf("%d-%d",&e,&f);                      //
  printf("%d-%d \n\n",e,f);                  // 
/*
The 2nd scanf specifies the format %2d and %4d for the variables x and y resp. Whenever we specify field width for reading integer numbers,
the input nos. should not contain more digits than the specified size .Otherwise the extra digits on the right-hand side will be truncated
(replaced) and assigned to the next variable in the list.Thus,the second scanf has truncated the four digit number 6789 and assigned 67 to
x and 89 to y.The value 4321 has been assigned to the first variable in the immediately following scanf statement.
*/
  //Inputting Real numbers
  float x,y;double p,q;
  printf("Values of x and y:");                    //Values of x and y:12.3456 17.5e-2
  scanf("%f %e",&x,&y);                            //x = 12.345600
  printf("\n");                                    //y = 0.175000
  printf("x=%f\n y=%f\n\n",x,y);
  printf("Values of p and q:");                    //Values of p and q:4.142857142857 18.5678901234567890
  scanf("%lf %lf",&p,&q);                          //p =  4.142857142857          
  printf("\n\np=%.12lf\n q=%.12e\n",p,q);            //q =  1.856789012346e+01  
  //Inputting Character Strings
  /*
  **strings or characters with array property do not use '&' operator
  
  //ex-1 char n1[any no.] means a string  
  #include<stdio.h>
  int main() 
  {
  char n1[3],n2[4];                     
  printf("Enter serial number and name one\n");     Enter serial number and name one
  scanf("%d %s",&nmbr,n1);                           1 bmk       
  printf("%d %s\n\n",nmbr,n1);                       0 bmk      //because n1[3] has capacity of 3 characters so it resulted in 0
  printf("Enter serial number and name two\n");     Enter serial number and name two
  scanf("%d %s",&nmbr,n2);                           1 bmk              
  printf("%d %s\n\n",nmbr,n2);                       1 bmk      //because n2[4] has capacity of 4 characters so it resulted in 1 i.e. no change 
                                                                  in no 
  }
  */
  
  int nmbr;
  char nbr1;                     
  printf("Enter serial number and name one\n");          //Enter serial number and name one
  scanf("%d %c",&nmbr,&nbr1);                              //1 n       
  printf("%d %c\n\n",nmbr,nbr1);                           //1 n
  char nbr2[4];                     
  printf("Enter serial number and name two\n");          //Enter serial number and name two
  scanf("%d %c",&nmbr,nbr2);                               //1 n      
  printf("%d %c\n\n",nmbr,nbr2);                           //1 garbage
  char nbr3[4];                     
  printf("Enter serial number and name three\n");        //Enter serial number and name three
  scanf("%d %c",&nmbr,&nbr3);                              //1 n       
  printf("%d %c\n\n",nmbr,nbr3);                           //1 garbage

  char nr1[3],nr2[4];                     
  printf("Enter serial number and name one\n");         //Enter serial number and name one
  scanf("%d %s",&nmbr,nr1);                             //1 sbi     
  printf("%d %s\n\n",nmbr,nr1);                         //1 sbi   //Although nr1[3] has capacity of 3 characters but it did not result in 0
                                                                  //as in ex-1 due to previuos vacant storage left by nbr2[4] and nbr3[4]
  printf("Enter serial number and name two\n");         //Enter serial number and name two
  scanf("%d %s",&nmbr,nr2);                             //1 mbk            
  printf("%d %s\n\n",nmbr,nr2);                         //1 mbk

  int no;
  char n1[15],n2[15],n3[15];                        //    Don't use                          Do use
  printf("Enter serial number and name one\n");     //    Enter serial number and name one   Enter serial number and name one
  scanf("%d %15c",&no,n1);                          //    1 123456789012(hit 2/3 times enter)1 123456789012345                  
  printf("%d %15s\n\n",no,n1);                      //    1 123456789012345☺                 1 123456789012☺
  printf("Enter serial number and name two\n");     //    Enter serial number and name two   Enter serial number and name two
  scanf("%d %s",&no,n2);                            //    2 New York                         2 New-York     
  printf("%d %15s\n\n",no,n2);                      //    2             New                  2             New-York
  printf("Enter serial number and name three\n");   //    Enter serial number and name three Enter serial number and name three
  scanf("%d %15s",&no,n3);                          //    2                                  3 London
  printf("%d %15s\n\n",no,n3);                      //                                       3             London  
  // New York seems two different words so printed New only.To fix this ,use '-'(hyphen) e.g.,New-York 

  //fflush
  int num1; float num2; char ch;
  printf("\nEnter an integer (Number1<=32767): ");
  scanf ("%d", &num1);
  printf("\nEnter a floating point number (Number2): "); 
  scanf("%f", &num2); 
  printf("\nEnter a character: ");//Enter a character:Soumya    
  fflush(stdin);
  scanf("%c", &ch);
  printf("\nNumber1 printed with a %%d specifier: %d", num1);
  printf("\nNumber1 printed with a %%u specifier: %u", num1);
  printf("\n\nNumber2 printed with a %%f specifier: %f", num2);
  printf("\nNumber2 printed with a %%e specifier: %e", num2);
  printf("\nNumber2 printed with a %%g specifier: %g", num2);
  printf("\n\n Character entered printed with a %%d specifier: %c", ch);//Character entered printed with a %%d specifier:S
  //A % symbol can be used before a format specifier to ignore it as a format specifier inside the control string.

  //Details of a student
  int ID, class, age;
  char sec;
  float weight;
  printf("\nEnter your ID, Class, Section, Age,and Weight in order:");
  printf("\nSeparate each piece of data with a blank...\n");
  scanf("%d %d %c %d %f", &ID, &class, &sec, &age, &weight);
  printf("\nYour ID=%d, Class=%d and Section=%c", ID, class, sec);
  printf("\nYour Age=%d years and weight=%f Kg", age, weight);

  //Total Bill at Shop
  float rate, amount;
  int qty;
  printf("\nEnter Rate of Item per Kg in Rs.:");
  scanf("%f", &rate);  //Never use Rs. before %f or never use any character before any other data type(%d,%f,%c and so on.) as it results in garbage
  printf("\nEnter quantity of Item in Kg:");
  scanf("%dKg", &qty); 
  amount = rate*qty;
  printf("\nThe total amount =Rs. %f", amount); 


  //Use of getchar in an interactive environment
  char answer;
  printf("Would you like to know my name?\n");                         //   Would you like to know my name?
  printf("Type Y for YES and N for NO: ");                             //   Type Y for YES and N for NO: Y
  answer = getchar(); // ..... Reading a character...                  //   My name is BUSY BEE  
  if (answer == 'Y' || answer =='y')                                      
     printf("\n\nMy name is BUSY BEE\n");                              //   Would you like to know my name?
  else                                                                 //   Type Y for YES and N for NO: n
     printf("\n\nYou are good for nothing\n");                         //   You are good for nothing
  /*The program displays a question of YES/NO type to the user and reads the user's response in a single character (Y or N).If the 
    response is Y or y, it outputs the message
                              My name is BUSY BEE
    otherwise, outputs                      
                              You are good for nothing
    Note There is one line space between the input text and output message. */
  //gets
  char name[21];
  puts("Enter your name (<=20 characters)");
  fflush(stdin);
  gets(name);
  printf("\nYour name is %s",name);    
  //
  char name[] = "Soumya",WISH[] = "Thank You";
  printf("\nUsing %%s specifier to print: %s", WISH);
  printf("\nUsing %%s specifier to print: %s", name);
}

/*                         
  A.Formatted Text Input:scanf() can be used to input all data-types and scans formatted datafrom the keyboard.
   
   scanf("control string",data list or arguments);//control string specifies the field format in which the input data is to be formatted
                                                    here format specifiers is called conversion character(as they determine how the data 
                                                    is to be interpreted during input.
                                                    data list contains the address of locations where data is stored i.e.;address references
                                                    of one or more data items 
                                                    address operator '&' is used.
   Inputting Integer numbers:%wd //w=an integer no that specifies the field width of the no. to be read
                                   d=data type character indicating the no. to be read in integer mode
                   Input                                 Output
        e.g.;scanf("%2d %5d",&num1,&num2);              50 31624   
             scanf("%d %d",&num1,&num2);                31624 50

             scanf("%d-%d",&a,&b);//it accepts input like 123-456 to assign 123 to a and 456 to b.
   Inputting Real numbers:
             scanf("%f %f %f",&x,&,y,&z);     with the input data 475.89=x   43.21E-1=y and  684=z
             for double type,use %lf.
             A no. may be skipped using %*f specification.   
           
   Inputting Character Strings:         
             %wc or %ws    //& is not used as address operator when character is used

     When we use %wc for reading a string, the system will wait until the w^th character is keyed in.        

   Some scanf versions support the following conversion specifications for the strings
                                 %[characters]//means only the characters specified within the brackets are permissibe in the input string.
                                                If the input string contains any other character,the string will be terminated at the 1st
                                                encounter of such a character.
                                 %[^characters]//means exactly the reverse i.e.;the characters specified after the circumflex (^) are not
                                                 permitted in the input string.If the reading of the string will be terminated at the en-
                                                 counter of one of these characters.
            //the program illustrates the function of %[] specification. 
             main() 
             { 
               char address[80];
               printf("Enter address\n");        // Enter address
               scanf("%[a-z]",address);          // new delhi 110002                  
               printf("%-80s\n\n",address);      // new
             }
             main()
             {  
               char address[80];
               printf("Enter address\n");        // Enter address
               scanf("%[^\n]", address);         // New Delhi 110002                    
               printf("%-80s", address);         // New Delhi 110002
             }                                 
   Reading Mixed Data Types: 
             scanf("%d %c %f %s",&count,&code,&ratio,&name); will read the data      15 p 1.575 coffee

   %[..] means a string of word(s).                           
  
   Note: A space before the %c specification in the format string is necessary to skip the white space before p.

   Some of the general points to keep in mind while writing a scanf statement:

    1. All function arguments, except the control string, must be pointers to variables.
    2. Format specifications contained in the control string should match the arguments in order.    
	  3. Input data items must be separated by spaces and must match the variables receiving the input in the same order.
    4. The reading will be terminated,when scanf encounters a 'mismatch' of data or a character that is not valid for the value being read.
    5. When searching for a value, scanf ignores line boundaries and simply looks for the next appropriate character.
    6. Any unread data items in a line will be considered as part of the data input line to the next scanf call.    
	  7. When the field width specifier w is used, it should be large enough to contain the input data size.  
	
	 Rules for scanf

   • Each variable to be read must have a filed specification.
   • For each field specification, there must be a variable address of proper type.
   • Any non-whitespace character used in the format string must have a matching character in the user input.
   • The scanf reads until:
     -A whitespace character is found in a numberic specification, or 
     -The maximum number of characters have been read or
     -An error is detected, or
     -The end of file is reached

   **A peek into the working of the scanf() function and use of fflush(stdin):

         Data is read by the scanf() function from what is called the input stream(a series of characters being input from some source).
         In the case of scanf() it is the raw data that is input from the keyboard. After typing the input when the Enter key is pressed,
         the data that you have typed is sent to the scanf() function as a series of meaningless characters in the order in which it was
         typed. The scant () function then reads the data and uses the format specifiers or conversion characters to convert the raw data
         to the desired data type which agree with the conversion characters.
         During conversion it ignores all white-space characters and looks for the first non-white-space character which matches with the
         specifier, and assigns it to the respective variable. The assignment stops at the first ro matching character.

         Important Note!: The scanf() function uses an area of the memory called the input buffer to store the characters being typed into 
         the input stream, before converting the data using the conversion characters. As an example when an integer is input from the 
         keyboard,the user types the integer and presses the Enter key The integer along with the white-space character 'Enter' is then 
         passed to the input buffer. The scanf() function then interprets and converts the data input as per the conversion character 
         within its control string.

         In case of the integer data, it will take the characters up to the next white-space character and leave the white-space character
         'Enter' in the input buffer. In case the next data to be input is a character or string type data, then scanf() will first read
         the white-space character still remaining in the input buffer as a leftove from the previous input. Unlike a numeric data, this
         white-space character however is a valid input for character or string type data. Thus instead of using the current data as an 
         input, it will take the leftove white-space character from the last input as a valid input. This causes an error in the input and
         the progan will not wait for the current input from the user as it takes the leftover white-space from the input buffer.

         To avoid this problem the fflush() function is used which flushes out or clears any data that may remain in the buffer. The 
         argument of the fflush() function is the buffer name that we want to clear. In t case the argument should be the buffer related 
         to the standard input device i.e. the keyboard and which is designated by 'stdin' (standard input device). For example to input
         a char type data x, the code will be

        fflush(stdin);//this function along with argument stdin is used to clear input buffer
        scanf("%c", &x);
        Always use the fflush(stdin) statement before entering a character type or string type data using the scanf(), getchar() or gets() 
        functions to avoid any malfunction.
        
  B.Unformatted Text Output:

    1.getchar(get+character) is used to input unformatted character data.The character can be input either as a char or an int type but it
      does not take anything as its argument and also does not appear at the beginning of a line.The getchar () function can be used to 
      pause the program output before the last return statement.The getchar takes the following form:
                                 variable_name = getchar();     
      variable_name is a valid C name that has been declared as char type. When this statement is encountered, the computer waits until a
      key is pressed and then assigns this character as a value to getchar. Since getchar is used on the right-hand side of an assignment
      statement, the character value of getchar is in turn assigned to the variable name on the left. For example
                                 char name;
                                 name=getchar();
      will assign the character 'H' to the variable name when we press the key H on the keyboard.

        The getchar may be called successively to read the characters contained in a line of text. For example, the following program 
        segment reads characters from keyboard one after another until the 'Return' key is pressed.
                      - - - ---------
                      - - - ---------
                      char character; 
                      character=' ';
                      while(character != '\n')
                      {
                        character getchar();
                      }
                      - - - ---------
                      - - - ---------
        The getchar() accepts any character keyed in. This includes RETURN and TAB. This means when we enter single character input, the 
        newline character is waiting in the input queue after getchar() returns. This could create problems when we use getchar() in a 
        loop interactively. A dummy getchar() may be used to 'eat' the unwanted newline character. We can also use the fflush function 
        to flush out the unwanted characters. 

        #include<stdio.h>
        int main()
        {
          int ascii;
          puts("Input any character to see its ASCII code: ");
          fflush(stdin);
          ascii=getchar();//(1)
          printf("The ASCII value of %c is %d.",ascii,ascii);
          puts("\nPress ENTER to continue");
          fflush(stdin);
          getchar();//(2)
          return 0;//3
          //In Short 
          char ch;
          puts("Input any character to see its ASCII code: ");
          fflush(stdin);
          scanf("%c", &ch);
          printf("The ASCII value of %c is %d.",ch, ch);
          return 0;
        }             
        //the getchar() function//(2) is used without assigning it to any variable. When the program encounters the function,as usual it 
          waits for some input from the keyboard. However when something is typed from the keyboard, then instead of assigning it to any
          variable as in //(1),the program control passes onto the next line i.e.//3 and the data entered is lost forever.The getchar ()
          function is used in this manner when someone wants to halt the prrogram until the user wants to proceed further, as with the 
          "Press any key to continue"type of comment.To view the output of a program without going to the output screen,this function
          can be used before the return 0 statement.fflush(stdin) is used before //(1) and //(2).

     *** How can you use the getchar function to read multi character strings? 

    Sol:The `getchar` function in C reads a single character from the standard input (usually the keyboard). To read multi-character strings, 
        you can use `getchar` in a loop until a newline character (`'\n'`) or another delimiter is encountered. Here is an example:
           #include <stdio.h>
           int main() 
           {
            char str[100];
            int i = 0, ch;
            printf("Enter a string: ");
            while ((ch = getchar()) != '\n' && ch != EOF)
            {
              str[i++] = ch;
            }
            str[i] = '\0';  // Null-terminate the string
            printf("You entered: %s\n", str);
            return 0;
           }

    In this program, `getchar` is called in a loop to read characters one by one until a newline character (`'\n'`) or end-of-file (`EOF`) is 
    encountered. Each character is added to the `str` array, which stores the string. After the loop, a null character (`'\0'`) is appended to 
    the end of the string to mark its end.

    **  Two similar functions: getch() and getche() functions

        The program requests the user to enter a character and displays a message on the screen telling the user whether the character is 
        an alphabet or digit, or any other special character.

        Program:
             #include <stdio.h>
             #include <ctype.h>
             void main()
             {
              char character;
              printf("Press any key\n");                                       Press any key
              character=getchar();                                             h
              if (isalpha(character) > 0)/*Test for letter*                    The character is a letter.
                printf("The character is a letter.");                          Press any key
              else                                                             5
                if (isdigit (character) 0)/*Test for digit*                    The character is a digit.
                  printf("The character is a digit.");                         Press any key
                else                                                           *
                  printf("The character is not alphanumeric.");                The character is not alphanumeric.
             }  
        This program receives a character from the keyboard and tests whether it is a letter or digit and prints out a message accordingly. 
        These tests are done with the help of the following functions:
                                 isalpha (character)
                                 isdigit (character)
        For example, isalpha assumes a value non-zero (TRUE) if the argument character contains an alphabet. otherwise it assumes 0 (FALSE)
        Similar is the case with the function isdigit.
        C supports many other similar functions(Character Test Functions). The prototypes of these character functions are contained in 
        the file ctype.h and therefore the statement
                   #include <ctype.h>
        must be included in the program.

        Character Test Functions:
        Function                                         Test
        isalnum(c)                                       Is c an alphanumeric character?
        isalpha(c)                                       Is c an alphabetic character?      
        isdigit(c)                                       Is c a digit?   
        islower(c)                                       Is c lower case letter?
        isprint(c)                                       Is c a printable character? 
        ispunct(c)                                       Is c a punctuation mark?
        isspace(c)                                       Is c a while space character?
        isupper(c)                                       Is c an upper case letter?

    2.gets(get+string)() function is used to input any type of unformatted text/string into a variable.Unlike the scanf() function it can 
      even input a string with blank spaces separating the words in the input stream.The argument of the gets() function contains only the
      string variable name(without address operator &).
      
    **Both getchar () and gets() functions echo(i.e.display) the character typed on the screen.  
    
    The ctype in ctype.h stands for “character type”. The ctype.h header file in C language contains declarations for character 
    classification functions. These functions are used to classify and transform characters in various character classes. For example, 
    it includes functions like isalnum(), isalpha(), isblank(), iscntrl(), isdigit(), islower(), isprint(), ispunct(), isspace(), 
    isupper(), and isxdigit(). These functions take an integer (ASCII value of the character) as an input. If the input is not an 
    integer, it is typecasted internally in the function.  */    