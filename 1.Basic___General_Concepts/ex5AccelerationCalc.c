/*To find the acceleration given by f=2(s-ut)/t^2 where input s=distance ,u=initial velocity,t=time*/
#include<stdio.h>
#include<math.h>
void main()
{
 float f,s,u,t;
 printf("\n Enter distance,initial velocity and time:");scanf("%f%f%f",&s,&u,&t);   
 f=2.0*(s-u*t)/pow(t,2);
 printf("\n acceleration:%f",f);
}