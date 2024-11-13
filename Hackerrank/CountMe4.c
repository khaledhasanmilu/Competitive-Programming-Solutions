#include <stdio.h>
#include <string.h>
int main()
{
    char str[10001];
    int fre[26] = {0};
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++)
    {
        fre[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (fre[i] > 0)
        {
            printf("%c - %d\n", i + 'a', fre[i]);
        }
    }

    return 0;
}