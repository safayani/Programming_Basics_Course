#include <stdio.h>

/**
 * Calculates x raised to the power n recursively.
 * Uses simple exponent reduction: x^n = x * x^(n-1)
 * Supports both positive and negative exponents.
 *
 * @param x The base (assumed to be positive)
 * @param n The exponent (can be positive, negative, or zero)
 * @return x raised to the power n
 */
double power(double x, int n) {
    // Base case: x^0 = 1
    if (n == 0) {
        return 1.0;
    }

    // Handle negative exponent
    if (n < 0) {
        return 1.0 / power(x, -n);
    }

    // Recursive case: reduce exponent by 1 each time
    // x^n = x * x^(n-1)
    return x * power(x, n - 1);
}

// Alternative implementation with tail recursion
/**
 * Tail-recursive version of power function.
 * More efficient as some compilers can optimize tail recursion.
 *
 * @param x The base (assumed to be positive)
 * @param n The exponent (can be positive, negative, or zero)
 * @param result Accumulator for the result (start with 1)
 * @return x raised to the power n
 */
double power_tail_recursive(double x, int n, double result) {
    // Base case: when n reaches 0, return accumulated result
    if (n == 0) {
        return result;
    }

    // Handle negative exponent
    if (n < 0) {
        return power_tail_recursive(x, n + 1, result / x);
    }

    // Recursive case: multiply result by x and reduce n by 1
    return power_tail_recursive(x, n - 1, result * x);
}

// Wrapper function for tail-recursive version
double power_tail(double x, int n) {
    return power_tail_recursive(x, n, 1.0);
}

// Example usage
int main() {
    printf("Testing simple recursive version:\n");
    printf("2^3 = %.6f\n", power(2.0, 3));      // 8.0
    printf("2^-3 = %.6f\n", power(2.0, -3));    // 0.125
    printf("3^0 = %.6f\n", power(3.0, 0));      // 1.0
    printf("5^5 = %.6f\n", power(5.0, 5));      // 3125.0
    printf("10^-2 = %.6f\n", power(10.0, -2));  // 0.01

    printf("\nTesting tail-recursive version:\n");
    printf("2^3 = %.6f\n", power_tail(2.0, 3));      // 8.0
    printf("2^-3 = %.6f\n", power_tail(2.0, -3));    // 0.125
    printf("3^0 = %.6f\n", power_tail(3.0, 0));      // 1.0
    printf("5^5 = %.6f\n", power_tail(5.0, 5));      // 3125.0
    printf("10^-2 = %.6f\n", power_tail(10.0, -2));  // 0.01

    return 0;
}
