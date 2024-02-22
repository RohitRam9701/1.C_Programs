/*
for more info read explicit type conversion

The use of typecasting on a variable can change its type in the memory.
*/
#include<stdio.h>
void main()
{
 int a=2,b=3,c,avg;
 c=a+b;
 avg=c/2;   
 printf("\n Average:%d",avg);//output:Average:2

 int k=2,l=3,m;
 float avrg;
 m=k+l;
 avrg=m/2;   
 printf("\n Average:%0.2f",avrg);//output:Average:2.00

 int x=2,y=3,z;
 float average;
 z=x+y;
 average=(float)z/2;//z is temporarily converted to float,this term is called "typecasting" //also you have to write 'float' before z 
 //can be replaced by average=z/(float)2; or average=(float)z/(float)2;
 printf("\n Average:%0.2f",average);//so output:Average:2.50 

 int p, q; float r;
 printf("\nInput numbers:");scanf("%d %d", &a, &b);
 r = (float)p/q;//or r = p/(float)q; or r = (float)p/(float)q; 
} 
/*
Integer division always truncates the decimal part of the result. Use it carefully. Use casting when necessary.
*/