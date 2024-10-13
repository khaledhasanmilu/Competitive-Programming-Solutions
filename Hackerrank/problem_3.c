#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 1000)
    {
        printf("Three Kacchi\n");
    }
    else if (n >= 500 && n < 1000)
    {
        printf("One Large Pizza\n");
    }
    else if (n >= 250 && n < 500)
    {
        printf("Three Small Burger\n");
    }
    else if (n >= 100 && n < 250)
    {
        printf("Three Fuchka\n");
    }
    else if (n < 100)
    {
        printf("Nothing\n");
    }

    return 0;
}