/* To display the sum of entered even nos.,on only entering 5 even nos. using continue statement*/
#include<stdio.h>
#include<math.h>
#define PI 3.1416
#define MAX 180 
void main()
{
 int n,c=0,s=0;
 while(c<5)
 {
  printf("\n Enter number:");scanf("%d",&n);
  if (n%2>0) 
  continue;
  s+=n;
  c+=1;
 }
printf("\n Sum of 5 even numbers entered:%d",s);  

   //Angle and its cos value
   int angle;
   float x,y;
   angle=0;
   printf("\t   Angle\tCos(angle)\n\n");
   while (angle <= MAX)
   {
        x = (PI/MAX)*angle;
        y = cos(x);
        printf("%15d %13.4f\n",angle,y);
        angle = angle + 10;
   }
}  