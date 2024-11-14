#include <stdio.h>
#include <string.h>

int is_palindrome(char str[], int len) {
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0;  // Not a palindrome
        }
    }
    return 1;  // Is a palindrome
}

int main() {
    char str[1001];
    scanf("%s", str);
    int length = strlen(str);
    int result = is_palindrome(str, length);

    if (result == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
