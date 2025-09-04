#include <stdio.h>

int main()
{
    int a, b, sum, sub, mul,div;


    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);


    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;

    printf("\nAddition: %d + %d = %d", a, b, sum);
    printf("\nSubtraction: %d - %d = %d", a, b, sub);
    printf("\nMultiplication: %d * %d = %d", a, b, mul);
    printf("\nDivision: %d / %d = %d", a, b, div);


    return 0;
}
