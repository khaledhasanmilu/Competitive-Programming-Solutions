#include <stdio.h>

int main() {
    int N, M, X;
    scanf("%d %d %d", &N, &M, &X);

    int arr[1001] = {0}; 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int el;
            scanf("%d", &el);
            arr[el]++;
        }
    }
    for (int i = 0; i < X; i++) {
        int arr1;
        scanf("%d", &arr1);
        printf("%d\n", arr[arr1]);
    }

    return 0;
}
