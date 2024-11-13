#include <stdio.h>
void even_odd(int arr[], int size)
{
     for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int even = 0, odd = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d", even, odd);
}
int main()
{
    int n;
    scanf("%d", &n);
     int arr[n];
    even_odd(arr, n);

    return 0;
}