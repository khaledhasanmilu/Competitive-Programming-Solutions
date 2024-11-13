#include <stdio.h>
#include <string.h>
int main()
{
    char str[100001];
    scanf("%s", str);
    int consCount = 0;
    //int s = strlen(str);
    //printf("Length--%d",s);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
        {
            consCount++;
        }
    }
    printf("%d\n", consCount);

    return 0;
}