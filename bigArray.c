#include <stdio.h>
#include <stdlib.h>

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

int main() {
    int *array;
    array = (int*)malloc(SIZE*sizeof(int));

    arrayFill(array, SIZE);
    arrayPrint(array, SIZE);

    array = (int*)realloc(array, 2*SIZE*sizeof(int));
    arrayFill(array, SIZE*2);
    arrayPrint(array, SIZE*2);

    free(array);

    return 0;
}