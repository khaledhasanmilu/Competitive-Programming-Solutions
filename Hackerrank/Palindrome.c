#include<stdio.h>
#include<string.h>
int is_palindrome(char str[],int len){
    for (int i = len; i > 0; i++)
    {
        return str[i];
    }
    
}
int main(){
char str[1001];
scanf("%s",str);
int length = strlen(str);
int result = is_palindrome(str,length);
if (result==str)
{
    printf("Palindrome\n");
}
else{
    printf("Not Palondrome\n");
}

    return 0;
}