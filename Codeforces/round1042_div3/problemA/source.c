#include<stdio.h>
#include<stdlib.h>

void input(int ***array, int *size) {
    scanf("%d", size);
    *array = (int**)malloc(2 * sizeof(int*));
    for (int i = 0; i < 2; i++)
        (*array)[i] = (int*)malloc(*size * sizeof(int));
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < *size; j++)
            scanf("%d", &(*array)[i][j]);
    return;
}

void process(const int **array, int size, int *result) {
    int step = 1, temp;
    for (int i = 0; i < size; i++) {
        temp = array[0][i] - array[1][i];
        if (temp > 0)
            step += temp;
    }
    *result = step;
    return;
}

void output(int result) {
    printf("%d\n", result);
    return;
}
void operate() {
    int **arraySet, size, result;
    input(&arraySet, &size);
    process(arraySet, size, &result);
    output(result);
    free(arraySet);
    return;
}

int main() {
    int loop;
    scanf("%d", &loop);
    for (int i = 0; i < loop; i++)
        operate();
    return 0;
}