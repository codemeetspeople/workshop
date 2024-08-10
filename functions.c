#include <stdio.h>

typedef int (*singleInt)(int);
typedef int (*doubleInt)(int, int);

int increment(int x) {
    return x + 1;
}

int decrement(int x) {
    return x - 1;
}

int pow2(int x) {
    return x * x;
}

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

void map(int array[], int size, singleInt handler) {
    for ( int i = 0; i < 5; i++ ) {
        array[i] = handler(array[i]);
    }
}

int sum(int x, int y) {
    return x + y;
}

int prod(int x, int y) {
    return x * y;
}

int reduce(int array[], int size, doubleInt handler) {
    int result = array[0];

    for ( int i = 1; i < size; i++ ) {
        result = handler(result, array[i]);
    }
    return result;
}


int main() {
    int array[5] = {1, 2, 3, 4, 5};

    printf("sum: %d\n", reduce(array, 5, sum));
    printf("prod: %d\n", reduce(array, 5, prod));

    arrayPrint(array, 5);

    map(array, 5, increment);
    arrayPrint(array, 5);

    map(array, 5, decrement);
    arrayPrint(array, 5);

    map(array, 5, pow2);
    arrayPrint(array, 5);

    return 0;
}
