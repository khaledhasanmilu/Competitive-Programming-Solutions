#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a,b;
    scanf("%d%d",&a,&b);
    int difference = abs(a-b);
    printf("%d\n",difference);
    return 0;
}