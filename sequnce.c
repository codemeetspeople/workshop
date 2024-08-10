#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int length = 0;
    
    for ( int tmp; fscanf(in, "%c", &tmp) == 1; length++ );
    fclose(in);

    fprintf(out, "%d\n", length);
    fclose(out);
    
    return 0;
}
