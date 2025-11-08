#include <stdio.h>
int main() {
    int n;
    unsigned long long factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Error! Factorial does not exist for negative numbers.\n");
    } else {
        int temp = n;
        while (temp > 1) {
            factorial *= temp;
            temp--;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }
    return 0;
}
