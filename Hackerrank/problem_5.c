#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            printf("%d Yes\n", i);
        }
        else
        {
            printf("%d No\n", i);
        }
    }

    return 0;
}