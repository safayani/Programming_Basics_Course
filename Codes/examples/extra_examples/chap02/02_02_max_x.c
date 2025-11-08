#include <stdio.h>

int main() {
    int x;
    int result;

    // Get the number X from the user
    printf("Enter an integer (X): ");
    scanf("%d", &x);

    // Check if the number is even or odd
    if (x % 2 == 0) {
        // It's an even number
        result = 2 * x + 5;
    } else {
        // It's an odd number
        result = 2 * x - 5;
    }

    // Print the final calculated result
    printf("The result is: %d\n", result);

    return 0;
}
