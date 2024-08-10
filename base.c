#include <stdio.h>

int main() {
    int target, base;
    int result = 0;

    scanf("%d %d", &target, &base);

    for ( ; target > 0; target /= base ) {
        result += 1;
    }
    printf("%d\n", result);

    return 0;
}
