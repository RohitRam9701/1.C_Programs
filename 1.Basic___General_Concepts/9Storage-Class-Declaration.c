/*To take two numbers from user and interchange them using 3rd variable */
#include<stdio.h>
void main()
{
  int x,y,t;
  printf("\n Enter x and y:");
  scanf("%d%d",&x,&y);
  t=x;
  x=y;
  y=t;
  printf("\n x:%d ,y:%d",x,y);
}

/*Declaration of Storage Class:
    Variables in C have not only data type but also storage class that provides information about their location and visibility.
    The storage class decides the portion of the programm within which the variables are recognized.
    e.g.;
         int m;//m is global variable(exrternal variable) & it can be used all the functions in the program & it need not to be declared 
                 in other functions.
         main()
         {
          int i;
          float balance;
          . . . .
          . . . .
          function1();
         }
         function1()
         {
          int i;
          float sum;// i, balance and sum are local variables  as they are declared inside a functiony are not known to other functions.
          . . . .
          . . . .
         }
         //the variable i has been declared in both the functions.Any change in the value of i in one function does not affect its value 
           in the other.
     There are four storage class specifiers:
      1.auto    :Local variable known only to the function in which it is declared.Default is auto.
      2.static  :Local variable which exists and retains its value even after the control is transferred to the calling function.
      3.extern  :Global variables known to all functions in the file and to functions in other files which have been linked to this file.
      4.register:Local variables which is requested to be stored in a CPU register subject to availability by the programmer.
     The storage class is another qualifier (like long or unsigned) that ca be added to a variable declaration as shown below:
                                auto int count;
                                register char ch;
                                static int x;
                                extern long total;
      Static & external(extern) variables are automatically initialized to 0.
      Automatic(auto) variables contain undefined values(known as garbage) unless they are initialized explicitly.                
      i.e. Auto variables (local variables) are not initialized to 0 by default. They have an indeterminate value until assigned a 
      specific value.*/