#include <stdio.h>
#include<math.h>
int main() 
{
/*
6. An electricity board charges the following rates for the use of electricity:
   For the first 200 units: 80 P per unit
   For the next 100 units: 90 P per unit
   Beyond 300 units: Rs.1.00 per unit
   All users are charged a minimum of Rs.100 as meter charge. If total amount is more than Rs.400, then an additional surcharge of 15% of total 
   amount is charged.
   Write a program to read the names of users and number of units consumed and print out charges with names.
*/

    char name[50];
    int units;
    float charge;

    printf("Enter the name of the user: ");
    scanf("%s", name);

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if(units <= 200)
        charge = units * 0.80;
    else if(units <= 300)
        charge = 200 * 0.80 + (units - 200) * 0.90;
    else
        charge = 200 * 0.80 + 100 * 0.90 + (units - 300) * 1.00;

    charge += 100; // Adding meter charge

    if(charge > 400)
        charge += charge * 0.15; // Adding surcharge

    printf("User %s consumed %d units. Total charge is Rs. %.2f\n", name, units, charge);

/*
7. Write a program to compute and display the sum of all integers that are divisible by 6 but not divisible by 4 and lie between 0 and 100. The 
   program should also count and display the number of such values.
*/
    int sum = 0;
    int count = 0;

    for (int i = 0; i <= 100; i++) {
        if (i % 6 == 0 && i % 4 != 0) {
            sum += i;
            count++;
        }
    }

    printf("The sum of all integers that are divisible by 6 but not divisible by 4 and lie between 0 and 100 is: %d\n", sum);
    printf("The number of such values is: %d\n", count);

    return 0;
}