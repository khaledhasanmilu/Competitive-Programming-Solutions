#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d", &num);
    int *arr = (int *)malloc(1 * sizeof(int));

    for (int i = 0; i < num; i++) {
        int num;
        scanf("%d", &num);
        arr = (int *)realloc(arr, (i + 1) * sizeof(int));
        arr[i] = num;
    }
    for (int i = 0; i < num; i++) {
        printf("%d", arr[i]);
        if (i < num - 1) printf(" ");
    }
    free(arr);

    return 0;
}
