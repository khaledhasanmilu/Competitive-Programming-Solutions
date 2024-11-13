#include <stdio.h>
int main()
{
    long long N;
    scanf("%lld", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int X, V;
    scanf("%d%d", &X, &V);
    arr[X]=V;
    printf("after addded:\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i = N-1; i >=0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}