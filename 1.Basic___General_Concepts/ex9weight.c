/* C program to input a given weight in grams and find out the number and type of each weight that are required to balance the weight in a common 
   balance when I have 100gm, 50gm, 20gm, 10gm, 5gm, 2gm and 1gm weights available.*/

#include <stdio.h>
int main()
{
    int weight;
    printf("Enter the weight in grams: ");
    scanf("%d", &weight);
    printf("Weights required to balance %d grams:\n", weight);
    printf("100gm: %d\n", weight / 100);
    printf("50gm: %d\n", (weight % 100) / 50);
    printf("20gm: %d\n", ((weight % 100) % 50) / 20);
    printf("10gm: %d\n", (((weight % 100) % 50) % 20) / 10);
    printf("5gm: %d\n", ((((weight % 100) % 50) % 20) % 10) / 5);
    printf("2gm: %d\n", (((((weight % 100) % 50) % 20) % 10) % 5) / 2);
    printf("1gm: %d\n", (((((weight % 100) % 50) % 20) % 10) % 5) % 2);
    return 0;
}
