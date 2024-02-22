#include<stdio.h>
int main()
{
    //What will be the output of the following program?
    int m,n,p;
    for (m = 0; m < 3; m++)
    for (n = 0; n<3; n++)
    for (p = 0; p < 3; p++)
    if (m + n + p == 2)
    goto print;
    print:
    printf("%d, %d, %d",m,n,p);  //output: 0, 0, 2
    /*The program uses three loops to find the first combination of `m`, `n`, and `p` (from 0 to 2) that adds up to 2. It then prints these values. 
      The first combination that meets this condition is `m=0`, `n=0`, `p=2`, so the output is `0, 0, 2`. The `goto` statement makes the program 
      exit the loops as soon as it finds this combination.*/
    /*Please note that the use of goto is generally discouraged in modern programming because it can make the control flow of the program difficult 
      to understand and maintain. Here’s the program using a break statement to exit the loops instead:*/
   int m, n, p;
   for (m = 0; m < 3; m++) {
      for (n = 0; n < 3; n++) {
        for (p = 0; p < 3; p++) {
          if (m + n + p == 2) {
               printf("%d, %d, %d\n", m, n, p);
               return 0;  // Exit the program
          }
        }
      }
    }
   return 0;    
}