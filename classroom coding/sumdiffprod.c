#include <stdio.h>
int main() 
{
int num1, num2;
int sum, diff, prod;
float quo;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    if (num2 != 0) 
	{ 
        quo = (float)num1 / num2;
    } 
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Quotient: %.2f\n", quo);
}