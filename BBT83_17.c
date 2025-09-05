#include <stdio.h>
int main() {
    int L, A, P;
    printf("Enter side length: ");
    scanf("%d", &L);

    A = L * L;
    P = 4 * L;

    printf("Area = %d\n", A);
    printf("Perimeter = %d\n", P);

    return 0;
}
