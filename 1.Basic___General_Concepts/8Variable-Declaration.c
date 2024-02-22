/*To take a fractional number as input and generate and display nearest whole number*/
#include<stdio.h>
void main()
{
 int x;float y,z;
 printf("\n Enter number:");
 scanf("%f",&y);
 x=y;
 z=y-x;
 if(z>=0.5)
 x=x+1;
 printf("\n Nearest whole number:%d",x);
}
/*Declaration of Variables:1.It tells the compiler what variable name is.
                           2.It specifies what type of data the variable will hold.
    A.Primary Type Declaration:
           format : data-type v1,v2,v3,....,vn;
           e.g.;
           main()
           {
            float      x,y; 
            int        code;
            short int  count;
            long int   amount;
            double     deviation;
            unsigned   n;
            char       c;
            /*..................Computation.................../
            .   .   .   .
            .   .   .   .
            .   .   .   .
           }/*.............Program ends..............      
           //When an adjective(qualifier) short,long,or unsigned is used without a basic data type specifier ,C compilers treat the data 
             type as an int.If we want to declare a character variable as unsigned,then  we must do so using both the terms like 'unsigned
             char'.
             Like variables, constants in C have a type.
    B.User-defined Type Declaration:
          1.A featue that defines an identifier as an existing data type is called "type definition"

            Format :typedef type indentifier;
                    //type refers to an existing data type and identifier refers to the new name given to the data type.   
            New type is 'new' only in name,but not the data type.typedef cannot create a new type.
             e.g.;
                  typedef int units;
                  tyedef float marks;       
                 Here, units symbolizes int and marks symbolizes float.They can be later used to declare variables as follows:
                  units batch1,batch2;//batch1 and batch2 are declared as int variable
                  marks name1[50],name2[50];//name1[50] and name2[50] are declared as 50 element floating point array variables.
          2.Another user-defined data type is enumerated data type provided by ANSI standard.

            Format:enum identifier{value1,value2,....,valuen};
                   //The "identifier" is a user-defined enumerated data type which can be used to declare variables that can have one of 
                     the values enclosed within the braces(known as enumertion constants).After this definition,we can declare to be of 
                     this 'new' type as below:
                         enum identifier v1,v2,....,vn;
                     the enumerated variables v1,v2,...,vn can only have one of the values value1,value2,....,valuen.The assignments of
                     the following types are valid:
                                        v1 = value3;
                                        v5 = value1;
                     e.g.;
                                enum day{Monday,Tuesday,...Sunday};
                                enum day week_st,week_end;
                                Combining in one statement:enum day{Monday,Tuesday,...Sunday} week_st,week_end;

                                 week_st=Monday;
                                 week_end=Friday;
                                 if(week_st==Tuesday)   
                                 week_end=Saturday;     
                     The compiler automatically assigns integer digits beginning with 0 to all the enumeration constants.That is,the 
                     enumeration constant value1 is assigned 0,value2 is assigned 1,and so on.However, the automatic assignments can be 
                     overridden by assigning values explicitly to the enumeration constants.
                       e.g.;   enum day{Monday = 1,Tuesday,...Sunday};
                     Here the constant Monday is assigned the value of 1.The remaining constants are assigned values that increase 
                     successively by 1.
*/
/*
Enumeration variables are user-defined data types that consist of a set of named values called enumerators. They are used to define a list of 
related constants. Enumeration variables are declared using the enum keyword.The advantage of using enumeration variables is that they make the 
code more readable and maintainable by providing meaningful names to a set of related constants.
*/