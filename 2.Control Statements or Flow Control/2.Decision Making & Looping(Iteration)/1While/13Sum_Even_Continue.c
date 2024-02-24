/*When the continue statement is encountered in the execution of loop,the rest of the statements in the loop after the continue statement are 
  ignored and the control of execution goes to beginning of the loop. */

/* To display the sum of entered even nos.,on only entering 5 even nos. using continue statement*/
#include<stdio.h>
int main ()
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
    return 0;   
}