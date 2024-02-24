/* To input a temperature in the Kelvin scale and convert it to Celsius scale. The input is tested for validity using do-while loop.*/
#include<stdio.h>
int main()
{   float K_temp, C_temp;
    int check = 1;   // An integer variable `check` is used to control the prompts displayed to the user.
    do { if (check == 1)
           puts("\nEnter value of temperature in the Kelvin scale"); 
         else
           puts("\nPlease input a valid temperature!");
         scanf("%f", &K_temp);
         check = 0;   
    } while (K_temp < 0);
    C_temp = K_temp - 273.15;
    printf("\n%f Kelvin = %f degree Celsius\n", K_temp, C_temp);
    return 0;
}
/* The code in a do-while loop will run at least once, i.e., the do-while loop is most suited for cases where the loop needs to run at least once.*/
/* A do-while loop can be used to correctly input a value within a given range of values.*/
/*
This C program is designed to input a temperature in the Kelvin scale and convert it to the Celsius scale. The input is validated using a do-while 
loop to ensure that the temperature entered is a positive value, as negative temperatures are not valid in the Kelvin scale.

The do-while loop runs at least once and continues to run as long as the user inputs a negative value for `K_temp`. Inside the loop, an if-else 
statement is used to display different prompts based on the value of `check`. If `check` is 1 (which it is initially), the program asks the user 
to enter a temperature. If `check` is 0 (which it becomes after the first run of the loop), the program asks the user to input a valid temperature.

Once a positive value is entered for `K_temp`, the condition of the do-while loop becomes false and the loop terminates. The program then 
calculates `C_temp` by subtracting 273.15 from `K_temp` and prints the result.
*/

/*Therefore to test for a valid input the condition of the do-while loop should be just the reverse of the required or valid input.

Explanation: In the context of the code, the valid input is a temperature in the Kelvin scale, which must be a positive value. Therefore, the 
condition of the do-while loop is `K_temp < 0`, which is the reverse of the valid input condition (`K_temp >= 0`). This means the loop will 
continue to prompt the user for input as long as they enter a negative value, which is invalid. Once a valid input (a positive value) is entered, 
the condition of the do-while loop becomes false, and the loop terminates. This is a common pattern for input validation using a do-while loop.
*/

/*If you don't need different prompts for an invalid input, you can simplify the loop without using the `check` variable. In this case, the same 
prompt "Enter value of temperature in the Kelvin scale:" is printed even if an invalid input is entered. 
 
do { puts ("\nEnter value of temperature in the Kelvin scale: ");
      scanf ("%f", &Ktemp) ;
} while (Ktemp < 0) ;
*/