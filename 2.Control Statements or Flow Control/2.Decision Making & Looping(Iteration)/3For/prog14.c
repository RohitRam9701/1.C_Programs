                                                                 /*Nested Loop*/
/*When a number of inner loops are executed, a number of terms for each execution of outer loop,such looping pattern is called 'nested loop'*/ 
/*To find the prime between 1 and 50*/
#include<stdio.h>
void main()
{
    int n,k,c;
    for(n=1;n<=50;n++)
    {
        for(k=1,c=0;k<=n;k++)
        {
            if (n%k==0)
            c=c+1;
        }
        if(c==2)
        printf("\n\n Prime number:%d",n);
    }  
}