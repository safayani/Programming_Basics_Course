#include <stdio.h>

int main() {
    int n;
    int counter;
    int number;
    int max;
    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("No numbers to compare.\n");
        return 0;
    }
    printf("Enter number 1: ");
    scanf("%d", &max);
    counter = 1;
    while (counter < n) {
        printf("Enter number %d: ", counter + 1);
        scanf("%d", &number);
        if (number > max) {
            max = number;
        }
        counter++;
    }
    printf("\nThe largest number is: %d\n", max);
    return 0;
}
