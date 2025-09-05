#include <stdio.h>
int main() {
    int usd, inr;
    printf("Enter Rupees: ");
    scanf("%d", &inr);
    usd = inr / 48;
    printf("%d Rupees in Dollars = %d",inr, usd);
    return 0;
}
