#include <stdio.h>

/**
 * Merges two sorted arrays into a third sorted array.
 *
 * @param arr1 First sorted array in ascending order
 * @param size1 Size of the first array
 * @param arr2 Second sorted array in ascending order
 * @param size2 Size of the second array
 * @param result Array to store the merged result
 */
void merge_arrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i = 0;  // Index for arr1
    int j = 0;  // Index for arr2
    int k = 0;  // Index for result

    // Merge while both arrays have elements
    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            result[k] = arr1[i];
            i++;
        } else {
            result[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements from arr1 (if any)
    while (i < size1) {
        result[k] = arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements from arr2 (if any)
    while (j < size2) {
        result[k] = arr2[j];
        j++;
        k++;
    }
}

/**
 * Prints an array to the console.
 *
 * @param arr Array to print
 * @param size Size of the array
 */
void print_array(int arr[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

// Example usage
int main() {
    // Test case 1
    int arr1[] = {1, 2, 2, 3, 5};
    int arr2[] = {2, 4, 4, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int result1[size1 + size2];

    printf("Array 1: ");
    print_array(arr1, size1);
    printf("Array 2: ");
    print_array(arr2, size2);

    merge_arrays(arr1, size1, arr2, size2, result1);
    printf("Merged result: ");
    print_array(result1, size1 + size2);

    printf("\n");

    // Test case 2: arrays of different sizes
    int arr3[] = {1, 3, 5, 7};
    int arr4[] = {2, 4, 6, 8, 10, 12};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    int size4 = sizeof(arr4) / sizeof(arr4[0]);
    int result2[size3 + size4];

    printf("Array 3: ");
    print_array(arr3, size3);
    printf("Array 4: ");
    print_array(arr4, size4);

    merge_arrays(arr3, size3, arr4, size4, result2);
    printf("Merged result: ");
    print_array(result2, size3 + size4);

    printf("\n");

    // Test case 3: one array is empty
    int arr5[] = {1, 2, 3};
    int arr6[] = {};
    int size5 = sizeof(arr5) / sizeof(arr5[0]);
    int size6 = 0;
    int result3[size5 + size6];

    printf("Array 5: ");
    print_array(arr5, size5);
    printf("Array 6: ");
    print_array(arr6, size6);

    merge_arrays(arr5, size5, arr6, size6, result3);
    printf("Merged result: ");
    print_array(result3, size5 + size6);

    return 0;
}
