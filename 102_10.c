#include <stdio.h>
int main() {
    int n, i;
    long fact = 1;   // long used for bigger results

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact = fact * i;   // multiply fact with i
    }

    printf("Factorial of %d = %ld\n", n, fact);
    return 0;
}
