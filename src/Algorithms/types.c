//
// Created by thiago on 13/07/2020.
//
#include <stdio.h>
int typeInt () {
    int value_one = 0;
    int value_two = 0;
    if (value_one == value_two) {
        value_one = 10;
    }
    return value_one;
}
float float_number (int number_1, int number_2) {
    float result = number_1 / number_2;
    return result;
}

int main () {
    int result = typeInt();
    printf("The value is: %d\n", result);
    float result_2 = float_number(10, 3);
    printf("The value is: %.2f", result_2);

}
