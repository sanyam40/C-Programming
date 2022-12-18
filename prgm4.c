/*4. Write a program in C to convert 1000 meter per hour to miles per hour.*/


#include<stdio.h>
int main()
{
float meterph, miph;
printf("Enter speed in meter/hour: ");
scanf("%f", &meterph);
miph = meterph * 0.000621371;
printf("%f meterph = %f miph", meterph, miph);
return 0;
}