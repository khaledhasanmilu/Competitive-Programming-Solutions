#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum =0;
    for (int i = 2; i <=n; i++)
    {
        if (i%2==0)
        {
            sum = sum + i;
        }
        
    }
    printf("%d\n",sum);

    return 0;
}