/*To take two numbers from user and interchange them (swap their values) without using 3rd variable */
#include<stdio.h>
int main()
{
  int x,y;
  printf("\n Enter x and y:");
  scanf("%d%d",&x,&y);
  x=x+y;
  y=x-y;
  x=x-y;
  printf("\n x:%d ,y:%d",x,y);
  return 0;
}
/*
 **Assigning values to variables:
   e.g.  int count,sum;
         count=5;//format:variable_name=constant
         sum=0;//declaration first then initialized
         or,
         int count=5,sum=0;//format:data-type variable_name=constant
         //initialized during declaration
         or,while (year<=period)
         {
          . . . .
          . . . .
          year=year+1;//new value of year is old value of year plus 1.
         }

 **Declaring a variable as constant:
   e.g;   const int class_size = 40;
   
 **Declaring a variable as volatile:
   e.g.;  volatile int date;
          volatile const int location=100;   
*/