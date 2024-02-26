#include<stdio.h>
int main()
{
/* To generate a fibonacci series of n terms(0,1,1,2,3,5,8,...,n) ,value of n being taken as input*/
    int n,i,x=-1,y=1,z;
    printf("\n How many terms in series?:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        z=x+y;
        x=y;
        y=z;
        printf("  %d  ",z); //for n = 14 output : 0    1    1    2    3    5    8    13    21    34    55    89    144    233
      //printf("%d,",z);    //for n = 14 output : 0,1,1,2,3,5,8,13,21,34,55,89,144,233,
    } 

/* A C program to print nth Fibonacci number.*/
    int number, k, num1 = 0, num2 = 1, fib;
    printf("\nEnter the value of number: ");scanf("%d",&number);
    for(k = 1;k <= number-2; k++)
    {
        fib = num1 + num2 ; 
        num1 = num2 ; 
        num2 = fib;
    }
    printf("\nnth fibonacci number (for number = %d) = %d", number, fib); 
    
    return 0;
}