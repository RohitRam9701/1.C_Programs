/*Integer and float*/
#include<stdio.h>
int main()
{
    int x,y=8;//Initialization is the process of assigning a value to a variable at the time of declaration. 
    x=5;      //For example, int x = 5; initializes the variable "x" with the value 5.    
    float amount;
    amount =30.75 + 75.35;
    printf("The value %d is an integer.\n",986);
    printf("The value %f is a float.\n",98.6);
    printf("The value of variable x is %d. \n",x);
    printf("The value of variable y is %d. \n",y);
    printf("%5.2f",amount);/* %5.2f tells the compiler that the output must be in floating point,with 5 places in all and 2 places to the
                           //>   right of decimal point.*/

    char c;
    int i;
    float f;
    double d;
    c='g';
    i=6;
    f=12.0;
    d=640.004;
    printf("\n%c \n%d \n%f \n%lf \n",c,i,f,d);
    char wish[15]="Good Morning";
    printf("wish:%s",wish);/*To print & define the constant wish having value Good Morning*/   

/*Write a c program that makes use of different data types to input and print student's name, age and average marks.*/ 
    char firstname[20],lastname[20];
    int age; float avg;
    printf("\nEnter student's name: ");    
    scanf("%s %s", firstname, lastname);
    printf("\nEnter student's age and average marks: ");
    fflush(stdin);
    scanf("%d %f", &age, &avg);
    printf("\nStudent's name, age and average marks are %s %s, %d years and %.2f% respectively.",firstname, lastname, age, avg);    

    return 0;                       
}
/*Constants and variables can be again classified as primary and secondary based on their type.
Data types: A.Primary(fundamental) data types(5)  -int ,char,float,double and void
            B.Secondary: 1.Derived data types  -arrays,functions,structures and pointers
                         2.User-defined data types
Primary data type     Data Type                            Specifier/Conversion Character              Range                                
A.Integer type:  8-bit signed int (byte)                             %d                             -128 to 127                              
                 16-bit signed int (short)                           %d                           -32768 to 32767                                         
                 32-bit signed integer (int/long int)                %d(%ld)              -2,147,483,648 to 2,147,483,647                    
                 64-bit signed integer (long long, long int)                  -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807           

                 8-bit unsigned int (byte)                           %u                                0 to 255
                 16-bit unsigned int (short)                         %u                                0 to 65535
                 32-bit signed integer (int/long int)                %u(%lu)                           0 to 4294967295
                                                                                        
B.Character type:8-bit char/signed char                              %c                             -128 to 127                           
                 8-bit unsigned char                                 %c                                0 to 255                           

C.Floating type: 32-bit float(floating point)                        %f                          -3.4e38 to +3.4e38/1.7E-38 to 3.4E38
                 64-bit double(double-precision floating point)      %f(%lf)                    -1.7e308 to +1.7e308/2.22E-308 to 1.8E308
                 80-bit long double                                  %Lf(%l or %L)             -3.4e4932 to -3.4e4932

                 32-bit scientific notation                          %e                          -3.4e38 to +3.4e38                                      
                 32-bit shortest decimal                             %g                          -3.4e38 to +3.4e38    
                 string                                              %s                                  N.A.                             
*/
//A character is stored as an integer. It is therefore possible to perform arithmetic operations on characters.

//Do not use lowercase I for long as it is usually confused with the number 1.

//Floating point constants, by default, denote double type values in C.To denote a float type, the constant should be suffixed with 'f'(e.g., 3.14f).

//An int can have the qualifiers signed and unsigned at a time