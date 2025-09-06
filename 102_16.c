#include <stdio.h>
int main() {
    int i, num, largest, smallest;

    printf("Enter number 1: ");
    scanf("%d", &num);

    // initialize both with the first number
    largest = smallest = num;

    // read remaining 99 numbers
    for(i = 2; i <= 100; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if(num > largest)
            largest = num;

        if(num < smallest)
            smallest = num;
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

    return 0;
}
