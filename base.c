#include <stdio.h>

int getDigits(int value, int base) {
    int result = 0;

    for ( ; value > 0; value /= base, result++ );
    return result;
}

int getOrder(int count, int base) {
    int result = 1;

    for ( int i = 1; i < count; i++, result *= base);
    return result;
}

int main() {
    int target, base;
    int digits;

    scanf("%d %d", &target, &base);

    digits = getDigits(target, base);

    for ( int i = digits; i > 0; i-- ) {
        int order = getOrder(i, base);
        int value = target / order;

        printf("%d", value);
        target -= order * value;
    }
    printf("\n");
    

    return 0;
}
