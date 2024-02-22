#include<stdio.h>
void increment(int *num) {
    (*num)++; // Increment the value pointed to by num
}

int main() {
    int x = 5;
    increment(&x); // Pass the address of x
    printf("%d\n", x); // Output: 6
    return 0;
}