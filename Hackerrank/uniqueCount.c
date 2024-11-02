#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int arr[num];
    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    int uniqueCount = 0;

    for (int i = 0; i < num; i++) {
        int count = 0;
        for (int j = 0; j < num; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            uniqueCount++;
        }
    }

    printf("%d\n", uniqueCount);

    return 0;
}
