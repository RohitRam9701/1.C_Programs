#include<stdio.h>
int main()
{
/*To find the sum of the odd digits & the sum of the even digits of the input number */
  int num,d,even,odd;
  printf("\n Enter number:");scanf("%d",&num);
  for(odd=0,even=0;num>0;num/=10)
  {
    d=num%10; 
    if(d%2>0) 
      odd=odd+d;
    else
      even=even+d;   
  }
  printf("\n Sum of odd digits:%d & Sum of even digits:%d",odd,even);
  
  /*To generate a fibonacci series of n terms(0,1,1,2,3,5,8,...,n) ,value of n being taken as input*/
 int n,i,x=-1,y=1,z;
 printf("\n How many terms in series?:");scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  z=x+y;
  x=y;
  y=z;
  printf("  %d  ",z); //for n = 14 output : 0    1    1    2    3    5    8    13    21    34    55    89    144    233
//printf("%d,",z);    //for n = 14 output : 0,1,1,2,3,5,8,13,21,34,55,89,144,233,
 }

  return 0;
}