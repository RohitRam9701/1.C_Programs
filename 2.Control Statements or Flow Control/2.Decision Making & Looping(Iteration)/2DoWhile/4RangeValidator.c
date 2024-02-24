/* “Program to validate input within the range (0,100).”*/
#include <stdio.h>
// Function to get a number from the user
int getnum() {
    int num;
    scanf("%d", &num);
    return num;
}
int main() {
    int number;
    // This loop will continue to run as long as the user inputs a number between 0 and 100 exclusive
    do {
        printf("Input a number between 0 and 100: ");
        number = getnum();
    } while (number > 0 && number < 100);  // Using logical AND operator
    // If the user inputs a number outside the range 0 to 100 exclusive, the program will stop asking for input and terminate

    return 0;
}