#include <stdio.h>
#include <math.h> //fabs  , ceil, floor

int main() 
{
/*Write a program that reads a floating-point number and then displays the right-most digit of the integral part of the number.*/
    float num;
    printf("Enter a floating-point number: ");
    scanf("%f", &num);      //input:546.23

    int integralPart = (int)fabs(num); // Extract the integral part //fabs , used to get absolute value
//or, int integralPart = (int)num;
    int rightMostDigit = integralPart % 10; // Extract the right-most digit
    printf("Right-most digit of the integral part: %d\n", rightMostDigit);//output:5

/*Modify the above program to display the two right-most digits of the integral part of the number.
    int integralPart = (int)number;   
    int rightMostDigit = integralPart % 100; 
    printf("Right-most digit of the integral part: %d\n", rightMostDigit);//output:45    */

/*Given an integer number, write a program that displays the number as follows:
First line         :    all digits
Second line        :    all except first digit
Third line         :    all except first two digits
Last line          :    The last digit

For example, the number 5678 will be displayed as:
5678
678
78
8 */  
    int no, temp;
    
    printf("Enter a number: ");
    scanf("%d", &no);
    
    // Store a copy of the no
    temp = no;
    
    // Print the first line
    printf("%d\n", no);
    
    // Remove the first digit
    no %= 1000;
    
    // Print the second line
    printf("%d\n", no);
    
    // Restore the original no
    no = temp;
    
    // Remove the first two digits
    no %= 100;
    
    // Print the third line
    printf("%d\n", no);
    
    // Remove all digits except the last one
    no %= 10;
    
    // Print the last line
    printf("%d\n", no);

/*in short 

    int no,k,l,m;
    printf("Enter an integer no: ");
    scanf("%d", &no);
    k=no%1000;
    l=no%100;
    m=no%10;
    printf("\n%d\n%d\n%d\n%d",no,k,l,m);  */    
/* Modify the program to reverse the number ,then display as previous format.
#include<stdio.h>
void displaynFormat(int no) 
{
    int temp = no;
    int count = 0;

    while (temp != 0) {
        temp /= 10;
        count++;
    }

    temp = no;

    for (int i = count; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("%d", temp % 10);
            temp /= 10;
        }
        printf("\n");
        temp = no;
    }
}

int main() {
    int no;
    printf("Enter an integer no: ");
    scanf("%d", &no);

    displaynoFormat(no);
    return 0;
}
*/

/*The straight-line method of computing the yearly depreciation of the value of an item is given by
                        Depreciation =(Purchase Price-Salvage Value) /Years of Service
Write a program to determine the salvage value of an item when the purchase price, years of service, and the annual depreciation 
are given. */   
    float purchasePrice, annualDepreciation;
    int yearsOfService;

    printf("Enter the purchase price: ");
    scanf("%f", &purchasePrice);
    printf("Enter the annual depreciation: ");
    scanf("%f", &annualDepreciation);
    printf("Enter the years of service: ");
    scanf("%d", &yearsOfService);

    float salvageValue = purchasePrice - (annualDepreciation * yearsOfService);
    printf("Salvage Value: %.2f\n", salvageValue);

/*Write a program that will read a real number from the keyboard and print the following output in one line:
Smallest integer      The given     Largest integer 
not less than         number        not greater than
the number                          the number   */
    float number;
    printf("Enter a real number: ");
    scanf("%f", &number);

    int smallestInteger = (int)ceil(number);
    int largestInteger = (int)floor(number);

    printf("Smallest integer not less than the number: %d\n", smallestInteger);
    printf("The given number: %.2f\n", number);
    printf("Largest integer not greater than the number: %d\n", largestInteger);

/*The total distance travelled by a vehicle in t seconds is given by
    distance =    ut + (a*t²) / 2
    Where u is the initial velocity (metres per second), a is the acceleration (metres per second²). 
    Write a program to evaluate the distance travelled at regular intervals of time, given the values of u and a The program 
    should provide the flexibility to the user to select his own time intervals and repeat the calculations for different 
    values of u and a. */
  
    float u, a;
    int t;

    printf("Enter the initial velocity (u): ");
    scanf("%f", &u);
    printf("Enter the acceleration (a): ");
    scanf("%f", &a);
    printf("Enter the time interval (t): ");
    scanf("%d", &t);

    float distance = (u * t) + (0.5 * a * t * t);

    printf("Distance traveled: %.2f\n", distance); 

/*
#include <stdio.h>

float calculateDistance(float u, float a, float t) {
    return (u * t) + (0.5 * a * t * t);
}

int main() {
    float u, a, t;
    printf("Enter the initial velocity (u): ");
    scanf("%f", &u);
    printf("Enter the acceleration (a): ");
    scanf("%f", &a);
    printf("Enter the time interval (t): ");
    scanf("%f", &t);

    float distance = calculateDistance(u, a, t);
    printf("Distance travelled: %.2f\n", distance);
 
    return 0;
}  
*/    
/*In inventory management, the Economic Order Quantity for a single item is given by
       EOQ= sqrt((2 * demand rate* setup costs)/holding cost per item per unit time)
    and the optimal Time Between Orders
   TBO= sqrt((2* setup costs)/demand rate xholding cost per unit time)
   Write a program to compute EOQ and TBO, given demand rate (items per unit time), setup costs (per order), and the holding 
   cost (per item per unit time).  */

    float demandRate, setupCosts, holdingCost;
    float eoq, tbo;

    printf("Enter the demand rate: ");
    scanf("%f", &demandRate);
    printf("Enter the setup costs: ");
    scanf("%f", &setupCosts);
    printf("Enter the holding cost per item per unit time: ");
    scanf("%f", &holdingCost);

    eoq = sqrt((2 * demandRate * setupCosts) / holdingCost);
    tbo = sqrt((2 * setupCosts) / (demandRate * holdingCost));

    printf("Economic Order Quantity (EOQ): %.2f\n", eoq);
    printf("Optimal Time Between Orders (TBO): %.2f\n", tbo);

    return 0;
}
/*
#include <stdio.h>
#include <math.h>

float calculateEOQ(float demandRate, float setupCost, float holdingCost) {
    return sqrt((2 * demandRate * setupCost) / holdingCost);
}

float calculateTBO(float setupCost, float demandRate, float holdingCost) {
    return sqrt((2 * setupCost) / (demandRate * holdingCost));
}

int main() {
    float demandRate, setupCost, holdingCost;

    printf("Enter the demand rate (items per unit time): ");
    scanf("%f", &demandRate);
    printf("Enter the setup cost (per order): ");
    scanf("%f", &setupCost);
    printf("Enter the holding cost (per item per unit time): ");
    scanf("%f", &holdingCost);

    float eoq = calculateEOQ(demandRate, setupCost, holdingCost);
    float tbo = calculateTBO(setupCost, demandRate, holdingCost);

    printf("EOQ: %.2f\n", eoq);
    printf("TBO: %.2f\n", tbo);

    return 0;
}
*/  