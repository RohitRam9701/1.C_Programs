#include<stdio.h>
int main()
{
/*To count the total no. of digits present in the number input.*/
    int n,c;
    printf("\n Enter number:");
    scanf("%d",&n);
    for(c=0;n>0;c++) 
    {
        n=n/10;
    }
    printf("\n Total digits of number:%d",c);  

/*To find the sum of digits of the number input.*/
    int num,s;
    printf("\n Enter number:");
    scanf("%d",&num);
    for(s=0;num>0;num/=10) 
    {
        s=s+num%10;
    }
    printf("\n Sum of digits:%d",s);  

/*To generate the multiplication table of the number input.*/
    int number,product,count;
    printf("\n Enter number:");
    scanf("%d",&number);
    for(count=1;count<=10;count++) 
    {
        product=number*count;
        printf("\n %d*%d:%d",number,count,product);  
    }

/*To show the input number in reverse order,each digit in a new line */
    int rev,r;   //rev = the number to be reversed
    printf("\n Enter number:");
    scanf("%d",&rev);
    for(;rev > 0;rev /= 10) 
//or, for(r >= 0(unnecessary condition but ok);rev > 0;rev /= 10) 
//or, for(r > 0(unnecessary condition but ok);rev > 0;rev /= 10)  
    {
        r=rev%10;
        printf("\n %d",r);
    }
    return 0 ;
}