#include <stdio.h>
int main() {
    int i, n, count = 0, num = 2;
    printf("Enter n: ");
    scanf("%d", &n);

    while(count < n) {
        printf("%d\n", num);
        num += 2;
        count++;
    }
    return 0;
}
