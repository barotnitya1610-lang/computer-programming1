#include <stdio.h>
int main() {
    int g,kg;
    printf("Enter weight in grams: ");
    scanf("%d", &g);
    kg = g / 1000;
    printf("%d Grams into Kilograms = %d",g,kg);
    return 0;
}
