#include <stdio.h>
int main() {
    int choice;
    printf("Welcome to the Restaurant!\n");
    printf("1. Pizza\n");
    printf("2. Burger\n");
    printf("3. Pasta\n");
    printf("4. Exit\n");
    printf("Please enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You ordered Pizza. Enjoy your meal!\n");
            break;
        case 2:
            printf("You ordered Burger. Enjoy your meal!\n");
            break;
        case 3:
            printf("You ordered Pasta. Enjoy your meal!\n");
            break;
        case 4:
            printf("Thank you for visiting. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
    }

    return 0;
}