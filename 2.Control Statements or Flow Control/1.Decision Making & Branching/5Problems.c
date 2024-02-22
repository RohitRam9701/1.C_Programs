/*
8. Write an interactive program that could read a positive integer number and decide whether the number is a prime number and display the output 
   accordingly. 
   Modify the program to count all the prime numbers that lie between 100 and 200.
   NOTE: A prime number is a positive integer that is divisible only by 1 or by itself.
*/
#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}
/*or, 
int isPrime(int num) {
    if(num <= 1) return 0;
    if(num == 2) return 1;
    if(num % 2 == 0) return 0;
    for(int i = 3; i <= sqrt(num); i += 2) {
        if(num % i == 0) return 0;
    }
    return 1;
}
*/
int main() {
    int num, count = 0;

    // Read a positive integer number
    printf("Enter a positive integer: ");
    if(scanf("%d", &num) != 1 || num <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    // Check if the number is prime
    if(isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    // Count and print prime numbers between 100 and 200
    printf("Prime numbers between 100 and 200 are: ");
    for(int i = 100; i <= 200; i++) {
        if(isPrime(i)) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nThere are %d prime numbers between 100 and 200.\n", count);

    return 0;
}