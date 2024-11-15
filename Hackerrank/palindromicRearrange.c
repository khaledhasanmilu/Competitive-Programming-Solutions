#include <stdio.h>
#include <string.h>
int main()
{
    char str[10001];
    scanf("%s", str);
    int frq[26] = {0};
    int oddCount = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        frq[str[i]-'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (frq[i]%2!=0)
        {
            oddCount++;
        }
        
    }
    if (oddCount>1)
    {
        printf("%d\n",oddCount-1);
    }
    else
    {
        printf("%d\n",0);
    }
    
    

    return 0;
}