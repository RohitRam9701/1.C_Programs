/*To find squareroot & cuberoot and square & cube of the input number*/
#include<stdio.h>
#include<math.h>
void main()
{
    int n;float r,x;
    printf("\n Enter a number:");scanf("%d",&n);
    r=pow(n,0.5);
    printf("\n Root of number:%.2f",r);
    x=1.0/3;
    r=pow(n,x);
    printf("\n Cube root of number:%.2f",r);
    r=pow(n,2);//or r= n*n;
    printf("\n Square of number:%.2f",r);
    r=pow(n,3);
    printf("\n Cube of number:%.2f",r);
}