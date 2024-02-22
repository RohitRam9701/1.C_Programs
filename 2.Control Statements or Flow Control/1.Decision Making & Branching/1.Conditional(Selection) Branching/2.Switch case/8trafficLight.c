#include <stdio.h>
enum Color { RED, GREEN, BLUE };
int main() 
{
    enum Color trafficLight = GREEN;
    switch (trafficLight) {
        case RED:
            printf("Stop!\n");
            break;
        case GREEN:
            printf("Go!\n");
            break;
        case BLUE:
            printf("Invalid traffic light color\n");
            break;
    }
    return 0;
}
