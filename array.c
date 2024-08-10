#include <stdio.h>

#define SIZE 10

void arrayFill(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        array[i] = i + 1;
    }
}

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

void arrayPrintPointer(int *array, int size) {
    for ( int i = 1; i < size; i++, array++) {
        printf("%d ", *array);
    }
    printf("%d\n", *array);
}


int main() {
    int array[SIZE];

    arrayFill(array, SIZE);
    arrayPrint(array, SIZE);
    arrayPrintPointer(array, SIZE);

    return 0;
}
