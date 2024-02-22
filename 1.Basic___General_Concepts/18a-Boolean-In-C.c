/*
    In C, Boolean is a data type that contains two types of values, i.e., 0 and 1. Basically, the bool type value represents two types of behavior, 
    either true or false. Here, '0' represents false value, while '1' represents true value.In C Boolean, '0' is stored as 0, and another integer is 
    stored as 1. We have to use the header file, i.e., stdbool.h. to use the Boolean data type(i.e. bool variable_name; ).
    *///example 1
    
  //#include <stdbool.h> // although the program runs, the header file stdbool.h is not working and showing problems , 
                         // so I defined bool, true and false(in 2 ways).
    #include <stdio.h>
    typedef enum { false, true } bool; // User-defined bool type
/*or
    #define bool int
    #define true 1
    #define false 0 */

    int main()
    {
    bool x = false; // variable initialization.  
    if(x==true) // conditional statements  
    {  
     printf("The value of x is true");  
    }  
    else  
     printf("The value of x is FALSE");
    /*
    Boolean Array
    Now, we create a bool type array. The Boolean array can contain either true or false value, and the values of the array can be accessed with the
    help of indexing.
    */
    bool b[2]={true,false}; // Boolean type array  
    for(int i=0;i<2;i++) // for loop  
    {  
     printf("\n%d,",b[i]); // printf statement  
    }  
    return 0;  
    }     