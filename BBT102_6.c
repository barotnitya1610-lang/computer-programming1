#include <stdio.h>
int main() {
    int m1, m2, m3, total;
    float avg;

    printf("Enter marks of 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    avg = total / 3.0;

    printf("Total = %d\n", total);
    printf("Average = %.2f\n", avg);

    // Check fail in any subject
    if (m1 < 35 || m2 < 35 || m3 < 35) {
        printf("Result: Fail (because less than 35 in one subject)\n");
    }
    else {
        // Check grade based on average
        if (avg >= 70)
            printf("Result: Distinction\n");
        else if (avg >= 60)
            printf("Result: First Class\n");
        else if (avg >= 50)
            printf("Result: Second Class\n");
        else if (avg >= 35)
            printf("Result: Third Class\n");
        else
            printf("Result: Fail\n");
    }

    return 0;
}
