/*Defining or declaring symbolic constant*/
/*To  define the constant factor having value 2.54(using pre-processor directive #define)*/
#include<stdio.h>
//#define symbolic-name value of constant
#define FACTOR 2.54//factor is symbolic-name and 2.54 is value of constant
#define PI 3.1416
int main ()
{
   float radius;
   printf("factor:%f",FACTOR);
   printf("\nEnter radius of circle:");
   scanf("%f",&radius);
   printf("\n Area:%f",PI*radius*radius);
   return 0;
}
/*Constants can be declared in two ways :
  1.pre-processor directive #define
  2.const keyword 
  **#define does not end with ';'
  **symbolic names have same form as variable names and written in capitals to distinguish them from the normal variable names,which is
    written in lowercase letters.This is only a convention not a rule.
*/
/*
Variables are storage locations that hold values, whereas symbolic names are identifiers used to represent values or memory locations.
The declaration of a variable introduces the variable and specifies its data type, while the definition of a symbolic name provides a name to 
represent a constant value, often using the #define preprocessor directive.
*/