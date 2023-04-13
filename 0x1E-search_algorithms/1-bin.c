#include <stdio.h>

int binary_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1;
    }

    size_t left = 0;
    size_t right = size - 1;

    while (left <= right) {
        size_t middle = left + (right - left) / 2;
        if (array[middle] == value) {
            printf("Array: ");
            for (size_t i = 0; i < size; i++) {
                printf("%d ", array[i]);
            }
            printf("\n");
            return middle;
        } else if (array[middle] < value) {
            printf("Array: ");
            for (size_t i = 0; i <= middle; i++) {
                printf("%d ", array[i]);
            }
            printf("\n");
            left = middle + 1;
        } else {
            printf("Array: ");
            for (size_t i = middle; i < size; i++) {
                printf("%d ", array[i]);
            }
            printf("\n");
            right = middle - 1;
        }
    }

    return -1;
}
