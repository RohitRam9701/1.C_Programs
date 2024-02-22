/*
1.State errors ,if any, in the following input statements:

(a) `scanf("%c%f%d", city, &price, &year);`
- Error: %c, Sol: %s if city is a string otherwise the given %c would be correct(where city would represent a character).
(b) `scanf("%s%d", city, amount);`
- Error: amount, Sol: &amount
(c) `scanf("%f, %d,&amount, &year);`
- Error: " is missing, Sol: scanf("%f, %d",&amount, &year);
(d) `scanf("\n"%f", root);`
- Error: & is missing for root Sol: scanf("%f", &root);
(e) `scanf("%c %d %ld", *code, &count, Root);`
- Error: & is missing for root and *code is trying to dereference a pointer, but scanf requires the address of the variable, which is why code is 
    correct. Now if `code` is a character, it should be `scanf("%c%d%ld", code, &count, &Root);` otherwise 'scanf("%s%d%ld", code, &count, &Root);'.

2.Given the string WORDPROCESSING, write a c program to read the string from the terminal and display the same in the following formats: 
(a) WORD PROCESSING 
(b) WORD
    PROCESSING 
(c) W.P.
(d) W.O.R.D.P.R.O.C.E.S.S.I.N.G.  (added by me)

//Pre-decided input
#include <stdio.h>
int main() {
    char str[50];
    printf("Enter a string: ");
    scanf("%s", str);

    printf("(a) WORD PROCESSING\n(b) WORD\nPROCESSING\n(c) W.P.\n");

    return 0;
}
*/
//Or
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main() {
    char str[50];
    int i, len;

    printf("Enter a word: ");
    scanf("%s", str);

    len = strlen(str);

    // Display the string with a space between "WORD" and "PROCESSING"
    printf("(a) %.*s %s\n", len/3, str, str + len/3);
    printf("(b) %.*s\n%s\n", len/3, str, str + len/3);

    // Display the initials
    printf("(c) ");
    for(i = 0; i < len; i++) {
        if(str[i] == 'W' || str[i] == 'P') {
            if(i != 0) {
                printf(".");
            }
            printf("%c", str[i]);
        }
    }
    printf(".\n");
    // Display the string with "." after each letter
    printf("(d) ");
    for(i = 0; i < len; i++) 
    {
        if(isupper(str[i])) {
            if(i != 0) {
                printf(".");
            }
            printf("%c", str[i]);
        }
    }
    printf("\n");
/*
3.Write a program to read the values of X and Y and print the results of the following expressions in one line.

  (a)(x+y)/(x-y), (b) (x+y)/2, (c) (x+y)*(x-y)
*/
    int x,y;
    printf("\n Enter x and y:");
    scanf("%d %d",&x, &y);
    printf("(a) %d (b) %d (c) %d",(x+y)/(x-y), (x+y)/2, (x+y)*(x-y));
/*
4.Write a program to read the following numbers, round them off to the nearest integers and print out the results in integer form:
  35.7     50.21    -23.73     -46.45       */

    float n1, n2, n3, n4;

    printf("\nEnter four numbers: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    printf("Rounded numbers: %.2f, %.2f, %.2f, %.2f\n", round(n1), round(n2), round(n3), round(n4));
/*or,
#include <stdio.h>
int main() {
    float num1, num2, num3, num4;

    printf("Enter four numbers: ");
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);

    num1 = (num1 >= 0) ? (int)(num1 + 0.5) : (int)(num1 - 0.5);
    num2 = (num2 >= 0) ? (int)(num2 + 0.5) : (int)(num2 - 0.5);
    num3 = (num3 >= 0) ? (int)(num3 + 0.5) : (int)(num3 - 0.5);
    num4 = (num4 >= 0) ? (int)(num4 + 0.5) : (int)(num4 - 0.5);

    printf("Rounded numbers: %.2f, %.2f, %.2f, %.2f\n", num1, num2, num3, num4);

    return 0;
}
*/
/*
5.Write a program that reads 4 floating point values in the range 0.0 to 20.0, and prints a horizontal bar chart to represent these values using 
  the character * as the fill character. For the purpose of the chart, the values may be rounded off to the nearest integer. For example, the value 
  is 4.36 should be represented as follows.
       *    *    *    *
       *    *    *    *    4.36
       *    *    *    *
  Note that the actual values are shown at the end of each bar.
*/

    float values[4];
    int rounded_values[4];

    printf("Enter 4 floating point values in the range 0.0 to 20.0:\n");
    for(int i = 0; i < 4; i++) {
        scanf("%f", &values[i]);
        rounded_values[i] = round(values[i]);
    }

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < rounded_values[i]; j++) {
            printf("*    ");
        }
        printf("%.2f\n", values[i]);
    }
/*
6.Write an interactive program to demonstrate the process of multiplication. The program should ask the user to enter two 2 digit integers and 
  print the product of integers as shown below.

                       45
                 x     37
                 ________
      7 x 45  is      315
      3 x 45  is      135
                 ________
       Add them      1665
                 ________
*/
    int num1, num2, product;
    printf("Enter two two-digit integers:\n");
    scanf("%d%d", &num1, &num2);
    product = num1 * num2;
    printf("\t\t%d\n\t     x  %d\n\t  _________", num1, num2);
    printf("\n%d x %d is      %d", num2%10, num1, (num2%10)*num1);
    printf("\n%d x %d is      %d", num2/10, num1, (num2/10)*num1);
    printf("\n\t  _________\nAdd them      %d\n\t  _________\n", product);
/*
7.Write a program to read three integers from the keyboard using one scanf statement and output them on one line using:
   (a) three printf statements
   (b) only one printf with conversion specifiers, and
   (c) only one printf without conversion specifiers.
*/
    int a, b, c;

    // Read three integers from the keyboard using one scanf statement
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // (a) Output them on one line using three printf statements
    printf("%d ", a);
    printf("%d ", b);
    printf("%d\n", c);

    // (b) Output them on one line using only one printf with conversion specifiers
    printf("%d %d %d\n", a, b, c);

    // (c) Output them on one line using only one printf without conversion specifiers
    printf("%d %d %d\n", a, b, c);

//This program first reads three integers from the user. Then it prints these integers in three different ways as per your request. 
//Please note that in C, it's not possible to use `printf` without conversion specifiers to print integers, so for (c) it's the same as (b).


/*
8.Write a program that prints the value 10.45678 in exponential format with the following specifications:
  (a) correct to two decimal places; 
  (b) correct to four decimal places; and 
  (c) correct to eight decimal places.
*/
    double value = 10.45678;

    // (a) Print the value correct to two decimal places in exponential format
    printf("%.2e\n", value);

    // (b) Print the value correct to four decimal places in exponential format
    printf("%.4e\n", value);

    // (c) Print the value correct to eight decimal places in exponential format
    printf("%.8e\n", value);


/*
9.Write a program to print the value 345.6789 in fixed-point format with the following specifications:
  (a) correct to two decimal places;
  (b) correct to five decimal places; and 
  (c) correct to zero decimal places.
*/

    double val = 345.6789;

    // (a) Print the value correct to two decimal places in fixed-point format
    printf("%.2f\n", val);

    // (b) Print the value correct to five decimal places in fixed-point format
    printf("%.5f\n", val);

    // (c) Print the value correct to zero decimal places in fixed-point format
    printf("%.0f\n", val);

/*
10.Write a program to read the name ANIL KUMAR GUPTA in three parts using the scanf statement and to display the name in the following format, 
   using the printf statement:
    (a) ANIL K. GUPTA
    (b) A.K. GUPTA
    (c) GUPTA A.K. 
*/

    char k[20],l[20],m[20];
    printf("Enter your name: ");
    scanf("%s %s %s");
    printf("(a) %s %.1s. %s\n", k,l,m);
    printf("(b) %.1s.%.1s. %s\n", k,l,m);
    printf("(c) %s %.1s.%.1s.\n",m, k, l);

/*
11.Write a program to read and display the following table of data. 
            Name     Code     Price
            Fan      67831    1234.50 
            Motor    450      5786.70
   The name and code must be left-justified, and price must be right-justified.         
*/

    char N1[10],N2[10];int C1,C2;float P1,P2;
    printf("Enter Names,Codes and Prices\n");
    scanf("%s %s %d %d %f %f", N1, N2, &C1, &C2, &P1, &P2);//Fan Motor 67831 450 1234.50 5786.70
    printf("%-10s %-10s %10s\n", "Name", "Code", "Price");
    printf("%-10s %-10d %10.2f\n%-10s %-10d %10.2f", N1, C1, P1, N2, C2, P2);

/*
12.Write of C program to print inventory stock report using some sample data. The report should show item code quantity and inventory location as formated output.
*/

    printf("%-10s %-10s %s\n", "Item Code", "Quantity", "Location");
    printf("%-10d %-10d %s\n", 101, 50, "Warehouse A");
    printf("%-10d %-10d %s\n", 102, 120, "Warehouse B");
    printf("%-10d %-10d %s\n", 103, 70, "Warehouse C");
    printf("%-10d %-10d %s\n", 104, 200, "Warehouse D");
    printf("%-10d %-10d %s\n", 105, 30, "Warehouse E");

//or
/*
    int item_codes[] = {101, 102, 103, 104, 105};
    int quantities[] = {50, 120, 70, 200, 30};
    char* locations[] = {"Warehouse A", "Warehouse B", "Warehouse C", "Warehouse D", "Warehouse E"};

    int n = sizeof(item_codes) / sizeof(item_codes[0]);

    printf("%-10s %-10s %s\n", "Item Code", "Quantity", "Location");
    for(int i = 0; i < n; i++) {
        printf("%-10d %-10d %s\n", item_codes[i], quantities[i], locations[i]);
    }
*/
//or
/*
    int item_codes[] = {101, 102, 103, 104, 105};
    int quantities[] = {50, 120, 70, 200, 30};
    char* locations[] = {"Warehouse A", "Warehouse B", "Warehouse C", "Warehouse D", "Warehouse E"};

    int n = sizeof(item_codes) / sizeof(item_codes[0]);

    printf("%-10s %-10s %s\n", "Item Code", "Quantity", "Location");
    int i = 0;
    while(i < n) {
        printf("%-10d %-10d %s\n", item_codes[i], quantities[i], locations[i]);
        i++;
    }
*/
    return 0;
}