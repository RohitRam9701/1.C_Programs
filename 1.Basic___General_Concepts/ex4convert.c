#include <stdio.h>
#define AU_TO_KM 149597870.0
#define SPEED_OF_LIGHT 300000.0

/*To convert the distance in light years to distance in astronomical units(au).Given 1 au=149,597,870km,the speed of light =300,000km/sec.
  Test the program with 4.2 light years,the distance of our nearest star*/
/*
double lightYearsToAU(double lightYears) 
{
    double km = lightYears * SPEED_OF_LIGHT * 365.25 * 24 * 60 * 60;  // Convert light years to kilometers
    double au = km / AU_TO_KM;  // Convert kilometers to astronomical units
    return au;
}

int main() 
{
    double lightYears = 4.2;
    double au = lightYearsToAU(lightYears);
    printf("%.2f light years is equal to %.2f astronomical units.\n", lightYears, au);
}*/    
int main() 
{
    double lightYears = 4.2;
    double km = lightYears * SPEED_OF_LIGHT * 365.25 * 24 * 60 * 60;
    double au = km / AU_TO_KM;
    printf("Distance in light years: %.2f\n", lightYears);
    printf("Distance in astronomical units (au): %.2f\n", au);

/*To Convert temperature from fahrenheit to celsius*/
    float F,C;
    printf("Enter temperature in Fahrenheit:");scanf("%f",&F);
    C=5*(F-32)/9;
    printf("The required temperature in Celsius:%f",C);

/*Inch to cm conversion*/
    const float INtoCM = 2.54;
    float inch;
    printf("\nInput the length in inches:");
    fflush(stdin);
    getchar();
    scanf("%f", inch);
    fflush(stdout);
    printf("\nThe required length in cm is = %f", INtoCM * inch);  


/*To convert the length in inches to feet*/
    int inches;float feet;
    printf("\nEnter the length in inches: ");
    scanf("%d", &inches);
    feet = inches/12;
    printf("\nThe required feet = %f", feet);  
}

