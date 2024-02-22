/*typedef

There is another way of using Boolean value, i.e., typedef. Basically, typedef is a keyword in C language, which is used to assign the name to the 
already existing datatype.
*/
// example 2(alternative way to example 1)

    #include <stdio.h>  
    typedef enum{false,true} b;  
    int main()  
    {  
    b x=false; // variable initialization  
    if(x==true) // conditional statements  
    {  
    printf("The value of x is true");  
    }  
    else  
    {  
    printf("The value of x is false");  
    }  
    return 0;  
    }  

/*In the above code, we use the Boolean values, i.e., true and false, but we have not used the bool type. We use the Boolean values by creating a 
  new name of the 'bool' type. In order to achieve this, the typedef keyword is used in the program.
    typedef enum{false,true} b;  
The above statement creates a new name for the 'bool' type, i.e., 'b' as 'b' can contain either true or false value. We use the 'b' type in our 
program and create the 'x' variable of type 'b'.
Output
The value of x is false
*/