/* While loop without the use of a proper counter variable*/

/* Getting the sum of the digits of a number.*/
#include<stdio.h>
int main()
{
    int num, sum=0;
    printf("Enter number to add digits: ");
    scanf("%d",&num);
    while( num > 0 )
    {
        sum+=num%10;
        num/=10;
    }
    printf("Sum of digits is %d",sum);
    return 0;
}
/* Note : For doing a series sum, always initialize the sum variable to 0.*/
/*
Enter a number: 12345
Sum of digits is 15
*/
/*
Enter a number: 123456789
Sum of digits is 45
*/
/*
Enter a number: 123456789012
Sum of digits is 72
*/