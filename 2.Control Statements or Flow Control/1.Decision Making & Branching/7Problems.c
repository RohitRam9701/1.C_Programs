#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() 
{
/*
12. Write a C program to input the total percentage of marks of a student and display its Division using below rules:
     (a) Greater than or equal to 80 percent - “First Division”
     (b) Greater than or equal to 60 percent and less than 80 percent - “Second Division”
     (c) Less than 60 percent - "Third Division" 
*/    
    double percentage;
    int result;

    printf("Enter the total percentage of marks: ");
    result = scanf("%lf", &percentage);
    if(result != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    if(percentage >= 80) {
        printf("First Division\n");
    } else if(percentage >= 60) {
        printf("Second Division\n");
    } else {
        printf("Third Division\n");
    }
/*
13. Using Switch case block, input the name of the month from the user and display the corresponding number of days in that month. 
*/
    char month[10];
    int res;

    printf("Enter the name of the month: ");
    res = scanf("%9s", month);  // Read up to 9 characters, leaving room for the null terminator

    if(res != 1) {
        printf("Invalid input. Please enter a string.\n");
        return 1;
    }

    // Convert the month to lowercase for case-insensitive comparison
    for(int i = 0; month[i]; i++){
        month[i] = tolower(month[i]);
    }

    // Switch case to find the number of days in a month
    switch(month[0]) {
        case 'j':
            if(month[1] == 'a') printf("January has 31 days\n");
            else if(month[2] == 'n') printf("June has 30 days\n");
            else printf("July has 31 days\n");
            //printf("%s has %d days\n", month, (month[1] == 'a') ? 31 : ((month[2] == 'n') ? 30 : 31));
            break;
        case 'f':
            printf("February has 28 days normally and 29 days in a leap year\n");
            break;
        case 'm':
            if(month[2] == 'r') printf("March has 31 days\n");
            else printf("May has 31 days\n");
            break;
        case 'a':
            if(month[1] == 'p') printf("April has 30 days\n");
            else printf("August has 31 days\n");
            //printf("%s has %d days\n", month, (month[1] == 'p') ? 30 : 31);
            break;
        case 's':
            printf("September has 30 days\n");
            break;
        case 'o':
            printf("October has 31 days\n");
            break;
        case 'n':
            printf("November has 30 days\n");
            break;
        case 'd':
            printf("December has 31 days\n");
            break;
        default:
            printf("Invalid input. Please enter a valid month.\n");
    }
/*
    // Use a switch statement to check the first character of the month name
    switch(month[0]) {
        case 'j': printf("%s has %d days\n", month, (month[1] == 'a') ? 31 : ((month[2] == 'n') ? 30 : 31)); break;
        case 'f': printf("28 or 29 days\n"); break;
        case 'm': printf("31 days\n"); break;
        case 'a': printf(month[1] == 'p' ? "30 days\n" : "31 days\n"); break;
        case 's': case 'n': printf("30 days\n"); break;
        case 'o': case 'd': printf("31 days\n"); break;
        default: printf("Invalid input.\n");
    }
*/

/*
14. Write a C program that inputs a string and counts the number of capital and small alphabets in that string.
*/
    char str[100];
    int i, uppercase = 0, lowercase = 0;

    printf("Enter a string: ");
    fflush(stdin);//to ignore input issue due to the previous two programs
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z')
            uppercase++;
        else if(str[i] >= 'a' && str[i] <= 'z')
            lowercase++;
    }

    printf("Number of uppercase letters: %d\n", uppercase);
    printf("Number of lowercase letters: %d\n", lowercase);
/*
    char str[100];
    int i, capitalCount = 0, smallCount = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            capitalCount++;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            smallCount++;
        }
    }

    printf("Number of capital alphabets: %d\n", capitalCount);
    printf("Number of small alphabets: %d\n", smallCount);
*/
    return 0;
}