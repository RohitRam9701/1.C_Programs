#include<stdio.h>
#include<math.h>   //sqrt
#define BASE_SALARY   1500.00
#define BONUS_RATE   200.00
#define COMMISSION   0.02
int main()
{
/*1. Salesman's Salary:
    A computer manufacturing company has the following monthly compensation policy to their sales-persons: 
      Minimum base salary                                   :     1500.00
      Bonus for every computer sold                         :     200.00
      Commission on the total monthly sales                 :     2 per cent
      Since the prices of computers are changing, the sales price of each computer is fixed at the beginning of every month.
           
      Given the base salary, bonus, and commission rate, the inputs necessary to calculate the gross salary are,the price of each computer and the
      number sold during the month. 
      The gross salary is given by the equation:
          Gross salary: =base salary + (quantity*bonus rate)+(quantity*Price)*commission rate       

       A program to compute a sales-person's gross salary is given below.      */    
    int quantity;
    float gross_salary, price; 
    float bonus, commission;
    printf("Input number sold and price\n");
    scanf("%d %f", &quantity, &price); //  5  20450.00
    bonus              = BONUS_RATE*quantity;
    commission         = COMMISSION*quantity*price;
    gross_salary       = BASE_SALARY + bonus + commission;
    printf("\n");
    printf("Bonus        = %6.2F\n", bonus);
    printf("Commission   = %6.2f\n", commission); 
    printf("Gross salary = %6.2f\n", gross_salary);

/*2. Solution of the Quadratic Equation
    An equation of the form      a*x^2 + bx + c = 0   is known as the quadratic equation. 
    The values of x that satisfy the equation are known as the roots of the equation. A quadratic equation has two roots which are given by the 
    following two formulae:
    root 1 = (- b + sqrt(b^2 - 4ac))/(2a)
    root 2 = (- b - sqrt(b^2 - 4ac))/(2a)*/
    
    float a, b, c, discriminant, root1, root2;
    printf("\nInput values of a, b, and c\n");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b*b-4*a*c;
    if(discriminant < 0)
       printf("\n\nROOTS ARE IMAGINARY\n");
    else   
    { 
        root1 = (-b + sqrt(discriminant)) /( 2.0* a); 
        root2 = (-b - sqrt(discriminant)) /( 2.0* a);
        printf("\n\nRoot1 = %5.2f\n\nRoot2 = %5.2f\n", root1, root2);
    }

    return 0;  
}    