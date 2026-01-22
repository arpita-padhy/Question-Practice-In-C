#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "arpita"; 
    int n = strlen(str);
    int isPalindrome = 1; 
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            isPalindrome = 0; 
            break;
        }
    }

    printf("String: %s\n", str);
    if (isPalindrome)
        printf("It is a palindrome.\n");
    else
        printf("It is NOT a palindrome.\n");

    return 0;
}
