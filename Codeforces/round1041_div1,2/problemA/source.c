#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void input(int **array, int *size){
    scanf("%d", size);
    *array = (int*)malloc(*size * sizeof(int));
    for (int i = 0; i < *size; i++)
        scanf("%d", *array + i);
    return;
}

bool isGood(const int *array, int size) {
    int i = 0, value;
    while (array[i] < 0)
        i++;
    if (i >= size)
        return true;
    else if (array[i] == 0)
        return false;
    else
        value = array[i];
    for (i; i < size; i++)
        if (array[i] < 0)
            continue;
        else if (array[i] != value)
            return false;
    return true;
}

void output(bool status) {
    if (status)
        printf("Yes\n");
    else
        printf("No\n");
    return;
}

void operate(void) {
    int *array, size;
    input(&array, &size);
    output(isGood(array, size));
    free(array);
    return;
}

int main(){
    int time;
    scanf("%d", &time);
    for (int i = 0; i < time; i++)
        operate();
    return 0;
}