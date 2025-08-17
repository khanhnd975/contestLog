#include<stdio.h>
#include<stdlib.h>

void input(int *size) {
    scanf("%d", size);
    return;
}

void process(int **result, int size) {
    *result = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i += 2)
        (*result)[i] = -1;
    for (int i = 1; i < size; i += 2)
        (*result)[i] = 3;
    if (!(size & 1))
        (*result)[size - 1] = 2;
    return;
}

void output(const int *result, int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", result[i]);
    printf("\n");
    return;
}

void operate(){
    int *result, size;
    input(&size);
    process(&result, size);
    output(result, size);
    free(result);
    return;
}

int main() {
    int time;
    scanf("%d", &time);
    for (int i = 0; i < time; i++)
        operate();
    return 0;
}