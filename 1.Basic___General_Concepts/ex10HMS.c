#include<stdio.h>
void main()
{
    /*To find total hour, minute, second in a given number of seconds*/    
    int H, M, S, total, rem;
    printf("\nInput total number of seconds:");
    scanf("%d",&total);
    H = total/3600;
    rem = total%3600;
    M = rem/60;
    S = rem%60;
    printf("\n%3d Hour, \n%3d Minute, \n%3d Second", H, M, S);
    fflush(stdin);
    getchar();
}