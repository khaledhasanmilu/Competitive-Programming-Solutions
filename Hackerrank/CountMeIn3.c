#include<stdio.h>
#include<string.h>
int main(){
    char str[100001];
    int T;
    scanf("%d",&T);
    while(T--){
    scanf("%s",str);
    long long cap=0,sma=0,dig = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            cap++;
        }
        else if (str[i]>='a' && str[i]<='z')
        {
            sma++;
        }
         else if (str[i]>='0' && str[i]<='9')
        {
            dig++;
        }
      
    }
      printf("%lld %lld %lld\n",cap,sma,dig);
    }

    return 0;
}