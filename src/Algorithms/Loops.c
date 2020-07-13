/**
 * @author Thiago Lopes
 */
#include <stdio.h>
#include <values.h>
#include <stdbool.h>

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
/**
 * Nested loop
 * @return boolean
 */
_Bool contains_duplicates (const int *array, size_t len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len; j++) {
            if (i != j && array[i] == array[j]) {
                return 1;
            }
        }
    }
    return 0;
}

int main () {
    int array[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
    int result = find_max(array, 10);
    printf("Result: %d\n", result);

    _Bool result_boolean = contains_duplicates(array, 10);
    if (result_boolean == 1) {
        printf("contain a duplicate item");
    } else  {
        printf("Not contains a duplicate item");
    }
    return 0;
}