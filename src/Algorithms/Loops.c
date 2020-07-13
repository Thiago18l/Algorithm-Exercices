/**
 * @author Thiago Lopes
 */
#include <stdio.h>
#include <values.h>

/**
 * The following function finds the maximal element an array.
 * @return int
 */
int find_max (const int *array, size_t len) {
    int max = INT_MIN;
    for (size_t i = 0; i < len; i++) {
        if (max < array[i]) {
            max = array[i];
        }
    }
    return max;
}


int main () {
    int array[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
    int result = find_max(array, 10);
    printf("Result: %d", result);
    return 0;
}