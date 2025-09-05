#include <stdio.h>
int main() {
    int usd, inr;
    printf("Enter dollars: ");
    scanf("%d", &usd);
    inr = usd * 48;
    printf("%d Dollars in Rupees = %d",usd, inr);
    return 0;
}
