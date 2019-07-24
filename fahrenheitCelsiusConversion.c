#include <stdio.h>

void getData (float* centigrade, float* fahrenheit);
void calculateTemperature (float centigrade, float fahrenheit, float* cen, float* fan);
void printData (float centigrade, float fahrenheit, float cen, float fan);

int main()
{
float centigrade;
float fahrenheit;
float fan;
float cen;
getData(&centigrade, &fahrenheit);
calculateTemperature(centigrade, fahrenheit, &cen, &fan);
printData(centigrade, fahrenheit, cen, fan);
return 0;
}

void getData (float* centigrade, float* fahrenheit)
{
printf("Enter centigrade: " );
scanf("%f", centigrade);
printf("\nEnter fahrenheit: ");
scanf("%f", fahrenheit);
}

void calculateTemperature (float centigrade, float fahrenheit, float* cen, float* fan)
{
*cen = 5/9.0 * (fahrenheit - 32);
*fan = 32 + centigrade * 1.8;
}

void printData (float centigrade, float fahrenheit, float cen, float fan)
{
printf("\n%f fahrenheit temperature in centigrade: %f\n\n", fahrenheit, cen);
printf("%f celsius temperature in fahrenheit: %f\n", centigrade, fan);
}
