/*
> Write a program that converts temperatures between Celsius and Fahrenheit
hint --> to convert from Celsius to Fahrenheit we use this equation : 
	converted_temperature = (temperature * 9/5) + 32

hint --> to convert from Fahrenheit to Celsius we use this equation : 
	converted_temperature = (temperature - 32) * 5/9;

input : Enter the temperature followed by the unit (C or F): 55 C
output : 55.00C is equal to 131.00F
-----
input : Enter the temperature followed by the unit (C or F): 55 F
output : 55.00F is equal to 12.78C
*/

// The program

#include <stdio.h>

int main() 
{
    float temperature, converted_temperature;
    char unit;

    printf("Enter the temperature followed by the unit (C or F): ");
    scanf("%f %c", &temperature, &unit);

    if (unit == 'C') {
        converted_temperature = (temperature * 9/5) + 32;
        printf("%.2f%c is equal to %.2fF\n", temperature, unit, converted_temperature);
    } else if (unit == 'F') {
        converted_temperature = (temperature - 32) * 5/9;
        printf("%.2f%c is equal to %.2fC\n", temperature, unit, converted_temperature);
    } else {
        printf("Invalid unit entered. Please enter either 'C' or 'F'\n");
        return 1;
    }

    return 0;