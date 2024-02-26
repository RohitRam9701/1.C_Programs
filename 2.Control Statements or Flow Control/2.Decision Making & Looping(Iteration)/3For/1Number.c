/* The `for` loop is the most versatile loop and it can be used in place of the while or do while loops with the proper modification.*/
#include<stdio.h>
int main()
{
/*To count the total no. of digits present in the number input.*/
    int n,c;  // c = count
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

/*To find the sum of the odd digits & the sum of the even digits of the input number */
    int nmbr, d, even, odd;
    printf("\n Enter number: ");
    scanf("%d", &nmbr);
    for(odd = 0, even = 0; nmbr > 0; nmbr /= 10)
    {
      d = nmbr%10;
      if(d%2 > 0)
        odd = odd + d;
      else
        even = even + d;
    }
    printf("\n Sum of odd digits: %d & Sum of even digits: %d", odd, even);
    
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

/*To check whether the input number is prime or not*/
    int nmr, cnt, k;  // cnt = count
    printf("\nEnter number: ");scanf("%d", &nmr);
    for(k = 1, cnt = 0; k <= nmr; k++)
    {
        if(nmr%k == 0)
        cnt = cnt + 1;   
    }
    if(cnt == 2)
    printf("\nThe no. is Prime");
    else
    printf("\nThe no. is not Prime");

/*To generate and display the factorial of the input number */
    int nbr, i;
    long int f;  // f = factorial of number nbr
    printf("\nEnter a positive integer to find the factorial: ");scanf("%d",&nbr);
    for(i=nbr,f=1;i>0;i--) //or, for(i=1,f=1;i<=nbr;i++)
    {
        f=f*i;
    }
    printf("\nFactorial of the number %d is %ld",nbr, f);  
      
    return 0 ;
}
/* Each of the arguments of the for loop header is optional and can be selectively used.

   Optionality of for Loop Sections: The three sections in the for loop header are optional and may be selectively omitted if not required. 
   However, the two semicolons must be kept. 
   e.g.
   int i=1; //Loop counter i is initialised to 1 outside the loop
   for( ;i<10; ) //loop header contains only the condition part
   {
    printf("%d", i); //Loop body executes loop code
    ++i; //loop counter incremented at the end of the loop body
   }

*/