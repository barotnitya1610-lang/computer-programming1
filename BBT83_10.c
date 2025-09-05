#include <stdio.h>
int main() {
    int usd,pnd ;
    printf("Enter dollars: ");
    scanf("%d", &usd);
    pnd = usd * 48 * 70;
    printf("%d Dollars in Pounds = %d",usd, pnd);
    return 0;
}
