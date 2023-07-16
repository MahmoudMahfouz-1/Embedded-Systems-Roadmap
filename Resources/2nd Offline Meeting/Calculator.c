/*
> Make a simple Calculator that performs the main operations (+, -, *, /)

Input: 
Welcome to the calculator program!
Please enter the first number: 5
Please enter the operator (+, -, *, /): +
Please enter the second number: 4

Output:
5.00 + 4.00 = 9.00

*/


#include <stdio.h>

int main() 
{
    float num1, num2, result;
    char operator;

    printf("Welcome to the calculator program!\n\n");
    printf("Please enter the first number: ");
    scanf("%f", &num1);
    printf("Please enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Please enter the second number: ");
    scanf("%f", &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: division by zero!\n");
            } else {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            }
            break;
        default:
            printf("Invalid operator entered. Please enter +, -, *, or /\n");
            return 1;
    }

    return 0;
}