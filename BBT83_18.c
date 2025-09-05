#include <stdio.h>
int main() {
    int L, B, A, P;
    printf("Enter length and breadth: ");
    scanf("%d %d", &L, &B);

    A = L * B;
    P = 2 * (L + B);

    printf("Area = %d\n", A);
    printf("Perimeter = %d\n", P);

    return 0;
}
