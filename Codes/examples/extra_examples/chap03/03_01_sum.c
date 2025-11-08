#include <stdio.h>

int main() {
    int n;
    int i = 0;
    int number;
    long long sum = 0;

    printf("Enter the total count of numbers (N): ");
    scanf("%d", &n);

    printf("Now enter the %d numbers:\n", n);

    while (i < n) {
        scanf("%d", &number);
        sum = sum + number;
        i++;
    }

    printf("The final sum is: %lld\n", sum);

    return 0;
}
