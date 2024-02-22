#include <stdio.h>

void displayAirTimings() {
    printf("Air Timings:\n");
    // Add your code to display the air timings here
}

void displayBusService() {
    printf("Bus Service:\n");
    // Add your code to display the bus service details here
}

void displayTrainTimings() {
    printf("Train Timings:\n");
    // Add your code to display the train timings here
}

int main() {
    char character;
    
    printf("TRAVEL GUIDE\n\n");
    printf("A Air Timings\n");
    printf("T Train Timings\n");
    printf("B Bus Service\n");
    printf("X To skip\n");
    printf("\nEnter your choice: ");
    character = getchar();
    
    switch (character) {
        case 'A':
        case 'a':
            displayAirTimings();
            break;
        case 'B':
        case 'b':
            displayBusService();
            break;
        case 'T':
        case 't':
            displayTrainTimings();
            break;
        default:
            printf("Invalid choice.\n");
            return 1; // Exit the program with a non-zero status to indicate an error.
    }
    
    return 0;
}
