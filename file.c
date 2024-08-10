#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int dividend, divisor;
    int multiple;

    fscanf(in, "%d %d", &dividend, &divisor);
    fclose(in);

    multiple = dividend - dividend % divisor;
    if ( divisor < 0 ) {
        divisor *= -1;
    }
    if ( multiple < dividend ) {
        multiple += divisor;
    }

    fprintf(out, "%d\n", multiple);
    fclose(out);

    return 0;
}
