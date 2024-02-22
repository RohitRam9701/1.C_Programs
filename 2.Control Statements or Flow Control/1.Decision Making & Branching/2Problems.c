#include <stdio.h>
#include<math.h>
int main() 
{
/*
1. Given a list of marks ranging from 0 to 100, write a program to compute and print the number of students:
    (a) who have obtained more than 80 marks;
    (b) who have obtained more than 60 marks;
    (c) who have obtained more than 40 marks;
    (d) who have obtained 40 or less marks;
    (e) in the range 81 to 100;
    (f) in the range 61 to 80;
    (g) in the range 41 to 60; and
    (h) in the range 0 to 40.
   The program should use a minimum number of if statements.
*/

    int marks[100]; // Assume maximum of 100 students
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    printf("Enter marks for each student (0-100):\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    int count_above_80 = 0;
    int count_above_60 = 0;
    int count_above_40 = 0;
    int count_below_40 = 0;
    int count_in_81_100 = 0;
    int count_in_61_80 = 0;
    int count_in_41_60 = 0;
    int count_in_0_40 = 0;

    for (i = 0; i < n; i++) {
        if (marks[i] > 80) {
            count_above_80++;
            count_above_60++;
            count_above_40++;
        } else if (marks[i] > 60) {
            count_above_60++;
            count_above_40++;
        } else if (marks[i] > 40) {
            count_above_40++;
        } else {
            count_below_40++;
        }

        if (marks[i] >= 81) {
            count_in_81_100++;
        } else if (marks[i] >= 61) {
            count_in_61_80++;
        } else if (marks[i] >= 41) {
            count_in_41_60++;
        } else {
            count_in_0_40++;
        }
    }

    printf("Number of students:\n");
    printf("> 80: %d\n", count_above_80);
    printf("> 60: %d\n", count_above_60);
    printf("> 40: %d\n", count_above_40);
    printf("<= 40: %d\n", count_below_40);
    printf("81-100: %d\n", count_in_81_100);
    printf("61-80: %d\n", count_in_61_80);
    printf("41-60: %d\n", count_in_41_60);
    printf("0-40: %d\n", count_in_0_40);

/*
    int marks[100]= {85, 70, 90, 60, 75, 83, 40, 95, 72, 88, //...other marks...}; // assuming we have 100 students
    int count[8] = {0}; // to store counts for each category

    // assuming marks are already filled
    // iterate over the marks
    for (int i = 0; i < 100; i++) {
        if (marks[i] > 80) count[0]++;
        if (marks[i] > 60) count[1]++;
        if (marks[i] > 40) count[2]++;
        if (marks[i] <= 40) count[3]++;
        if (marks[i] >= 81 && marks[i] <= 100) count[4]++;
        if (marks[i] >= 61 && marks[i] <= 80) count[5]++;
        if (marks[i] >= 41 && marks[i] <= 60) count[6]++;
        if (marks[i] >= 0 && marks[i] <= 40) count[7]++;
    }

    // print the counts
    printf("More than 80 marks: %d\n", count[0]);
    printf("More than 60 marks: %d\n", count[1]);
    printf("More than 40 marks: %d\n", count[2]);
    printf("40 or less marks: %d\n", count[3]);
    printf("In the range 81 to 100: %d\n", count[4]);
    printf("In the range 61 to 80: %d\n", count[5]);
    printf("In the range 41 to 60: %d\n", count[6]);
    printf("In the range 0 to 40: %d\n", count[7]);

*/
/*
//C program that initializes the marks array with 100 random marks ranging from 0 to 100, and computes the number of students in each category:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int marks[100]; // array to store marks of 100 students
    int count[8] = {0}; // to store counts for each category

    // seed the random number generator
    srand(time(0));

    // fill the marks array with random marks between 0 and 100
    for (int i = 0; i < 100; i++) {
        marks[i] = rand() % 101;
    }

    // iterate over the marks
    for (int i = 0; i < 100; i++) {
        if (marks[i] > 80) count[0]++;
        if (marks[i] > 60) count[1]++;
        if (marks[i] > 40) count[2]++;
        if (marks[i] <= 40) count[3]++;
        if (marks[i] >= 81 && marks[i] <= 100) count[4]++;
        if (marks[i] >= 61 && marks[i] <= 80) count[5]++;
        if (marks[i] >= 41 && marks[i] <= 60) count[6]++;
        if (marks[i] >= 0 && marks[i] <= 40) count[7]++;
    }

    // print the counts
    printf("More than 80 marks: %d\n", count[0]);
    printf("More than 60 marks: %d\n", count[1]);
    printf("More than 40 marks: %d\n", count[2]);
    printf("40 or less marks: %d\n", count[3]);
    printf("In the range 81 to 100: %d\n", count[4]);
    printf("In the range 61 to 80: %d\n", count[5]);
    printf("In the range 41 to 60: %d\n", count[6]);
    printf("In the range 0 to 40: %d\n", count[7]);

    return 0;
}
*/

/*2. Admission to a professional course is subject to the following conditions:
    (a) Marks in Mathematics >= 60
    (b) Marks in Physics >= 50
    (c) Marks In Chemistry >= 40
    (d) Total In all three subjects >= 200 or Total In Mathematics And Physics >= 150
   Given the marks in these three subjects, write a program to process the applications to list the eligible candidates.
*/

    int math, physics, chem; // marks in Mathematics, Physics, and Chemistry

    // assuming marks are already filled
    printf("Enter the marks in Mathematics, Physics, and Chemistry: ");
    scanf("%d %d %d", &math, &physics, &chem);

    // check the conditions
    if (math >= 60 && physics >= 50 && chem >= 40 && (math + physics + chem >= 200 || math + physics >= 150)) {
        printf("The candidate is eligible for admission.\n");
    } else {
        printf("The candidate is not eligible for admission.\n");
    }
/*
3. Write a program to print a two-dimensional Square root table as shown below, to provide the square root of any number from 0 to 9.9. 
   For example, the value x will give the square root of 3.2 and y the square root of 3.9.

                        Square root table
                        -----------------
         ___________________________________________
        |  Number |	0.0	 | 0.1 |  0.2  | .... | 0.9 |
        |---------|------|-----|-------|------|-----|
        |  1.0	  |		 |	   |	   |	  |		|	      
        |  2.0	  |		 |	   |	   |	  |		|	      
        |  3.0	  |	     |     |   x   |	  |  y  |
        |  ...	  |		 |	   |	   |	  |		|
        |  9.0	  |		 |	   |	   |	  |		|
        ---------------------------------------------	
*/

    printf("Number\t0.0\t0.1\t0.2\t0.3\t0.4\t0.5\t0.6\t0.7\t0.8\t0.9\n"); // print the header
    printf("------\t----\t----\t----\t----\t----\t----\t----\t----\t----\t----\n"); // print the header
    for (int i = 0; i <= 9; i++) {
        printf("%d.0\t", i);
        for (int j = 0; j <= 9; j++) {
            float num = i + j / 10.0; // calculate the number
            printf("%.4f\t", sqrt(num)); // print the square root
        }
        printf("\n");
    }

/*
#include <stdio.h>
#include <math.h>
void print_square_root_table() {
  int i, j;
  // Header row
  printf(" Number |");  
  for (i = 0; i < 10; i++) printf("  0.%d   |", i);
  // Separator
  printf("\n--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|\n");  
  // Table body
  for (i = 0; i < 10; i++) {
    printf("%d.0     |", i);
    for (j = 0; j < 10; j++) printf(" %.4lf |", sqrt(i + (double)j / 10.0));
    printf("\n");
  }
}
int main() {
  print_square_root_table();
  return 0;
}

*/    

    return 0;
}