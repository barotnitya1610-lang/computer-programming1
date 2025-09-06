#include <stdio.h>
int main() {
    int n, i, sum = 0, num = 2;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum = sum + num;
        num = num + 2;   // next even number
    }

    printf("Sum of first %d even numbers = %d\n", n, sum);
    return 0;
}
