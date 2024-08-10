#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int x, y;

    fscanf(in, "%d %d", &x, &y);
    fclose(in);

    fprintf(out, "%d\n", x+y);
    fclose(out);

    return 0;
}
