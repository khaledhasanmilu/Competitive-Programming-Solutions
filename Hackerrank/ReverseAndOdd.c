#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long N;
    scanf("%lld", &N);

    int *arr = (int*)malloc(N * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = N - 1; i >= 0; i--) {
        if (i % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }

    free(arr);

    return 0;
}
