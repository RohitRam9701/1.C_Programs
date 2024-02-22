#include <stdio.h>

#define RICE_PRICE 16.75     //q 6.
#define SUGAR_PRICE 15.00    //q 6.

int main() 
{
/*6. Write a program to illustrate the use of symbolic constants in a real-life application*/
    printf("*** LIST OF ITEMS ***\n");
    printf("Item\t\tPrice\n");
    printf("Rice\t\tRs %.2f\n", RICE_PRICE);
    printf("Sugar\t\tRs %.2f\n", SUGAR_PRICE);

/*In this program, symbolic constants `RICE_PRICE` and `SUGAR_PRICE` are defined using the `#define` preprocessor directive. These constants hold 
the prices of rice and sugar, respectively. The program then uses these constants to display the prices.*/

/*7. Write a C program to input an integer and print its table.*/
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    printf("Table of %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
/*8. Write a C program to print the square of a number.*/   
  //int num;    
    printf("Enter a number: ");
    scanf("%d", &num);
        
    printf("Square of %d is %d\n", num, num * num);
    
/*9. Write a C program to input an integer between 0 and 128 and print its ASCII character.*/
  //int num;

    printf("Enter an integer between 0 and 128: ");
    scanf("%d", &num);

    printf("ASCII character: %c\n", num);    
  /*int num;
    
    printf("Enter an integer between 0 and 128: ");
    scanf("%d", &num);
    
    if (num >= 0 && num <= 128) {
        printf("ASCII character: %c\n", num);
    } else {
        printf("Invalid input!\n");
    }*/
    
/*10. Write a C program to input the value of days and convert it into years, weeks and days.*/

    int days, years, weeks;
    
    printf("Enter the number of days: ");
    scanf("%d", &days);
    
    years = days / 365;
    weeks = (days % 365) / 7;
    days = (days % 365) % 7;
    
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);
    
/*
    int days;
    int years, weeks, remainingDays;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    years = days / 365;
    weeks = (days % 365) / 7;
    remainingDays = (days % 365) % 7;

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", remainingDays);
*/    

/*11. Write a C program to input the distance travelled by a car and the fuel consumed. Next, compute the mileage of the car.*/
    float distance, fuel;
    float mileage;
    
    printf("Enter the distance travelled (in km): ");
    scanf("%f", &distance);
    
    printf("Enter the fuel consumed (in liters): ");
    scanf("%f", &fuel);
    
    mileage = distance / fuel;
    
    printf("Mileage: %.2f km/l\n", mileage);
    
/*12. Write a C program to input the amount value and break it into the smallest possible Indian currency notes.*/
    int amount;
    
    printf("Enter the amount: ");
    scanf("%d", &amount);
    
    printf("Indian Currency Notes:\n");
    printf("2000 Rs Notes: %d\n", amount / 2000);
    amount = amount % 2000;
    printf("500 Rs Notes: %d\n", amount / 500);
    amount = amount % 500;
    printf("200 Rs Notes: %d\n", amount / 200);
    amount = amount % 200;
    printf("100 Rs Notes: %d\n", amount / 100);
    amount = amount % 100;
    printf("50 Rs Notes: %d\n", amount / 50);
    amount = amount % 50;
    printf("20 Rs Notes: %d\n", amount / 20);
    amount = amount % 20;
    printf("10 Rs Notes: %d\n", amount / 10);
    amount = amount % 10;
    printf("5 Rs Notes: %d\n", amount / 5);
    amount = amount % 5;
    printf("1 Rs Notes: %d\n", amount);

/*
    int amount;
    int notes[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int count[10] = {0};

    printf("Enter the amount: Rs ");
    scanf("%d", &amount);

    for (int i = 0; i < 10; i++) {
        count[i] = amount / notes[i];
        amount = amount % notes[i];
    }

    printf("Indian Currency Notes:\n");
    for (int i = 0; i < 10; i++) {
        printf("%dx Rs %d\n", count[i], notes[i]);
    }
*/    
    
    return 0;
}