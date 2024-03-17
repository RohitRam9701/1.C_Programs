/* Write a C program to print all the prime numbers between 1 and n, where 'n' is the value supplied by the user*/
#include<stdio.h>
void main ()
{
    int prime(int);
    int n, i;
    int temp;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("\nPrime numbers between 1 and %d are:\n", n);
    for(i=2; i<=n; i++)
    {
        temp = prime(i);  // Call function prime
        if (temp == -99)
           continue;
        else
           printf("%d\t", i);
    }    
}
int prime (int num)
{
    int j;
    for (j=2; j<num; j++)
        if (num%j == 0)
            return (-99);
    if (j == num)
        return (num);
/*or,
    int i, flag = 0; 
    for(i=2; i<= num/2; i++)
    {
        if(num%i == 0)
        {
            flag = -99;
            break;
        }
    }
    return flag;
    // "If the number is not prime, the function returns -99. If the number is prime, the function returns 0."
*/        
} 
/*
   In the provided code, the prime function returns -99 if the number is not prime (i.e., if it has a divisor other than 1 and itself), and 0 if 
   the number is prime. The function checks divisibility from 2 to num/2, and if any number divides evenly (remainder is 0), it sets flag to -99 
   and breaks the loop. If no such number is found, flag remains 0, indicating that the number is prime.

   In the program, a user defined function named prime has been defined and used. The function checks to see whether a given number is prime or not. 
  
   In C, variables declared inside a function are local to that function. This means that the i in the main function and the i in the prime 
   function are two different variables. They do not interfere with each other, so you can use the same name without any issues. This concept 
   is known as variable scoping. So, the code is perfectly fine.*/
/*
Output:
/*
Enter the value of n: 100
Prime numbers between 1 and 100 are:
2       3       5       7       11      13      17      19      23      29      31      37      41      43      47      53      59      61      
67      71      73      79      83      89      97
*/