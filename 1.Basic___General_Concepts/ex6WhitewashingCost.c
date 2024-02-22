/*To find the cost of white washing of a room where the user inputs the lenght ,breadth and height of the room and the cost per unit area of 
whitewashing*/
#include <stdio.h>
void main() 
{
    float length, breadth, height, costPerUnitArea, totalCost, totalArea;
    printf("Enter length, breadth, and height of the room (in meters): ");
    scanf("%f %f %f", &length, &breadth, &height);
    printf("Enter the cost per unit area of whitewashing (in rupees per square meter): ");
    scanf("%f", &costPerUnitArea);
    totalArea = 2 * (length * height + breadth * height);
    totalCost = totalArea * costPerUnitArea;
    printf("The total cost of whitewashing the room is Rs. %.2f\n", totalCost);
}
