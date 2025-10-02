//Q86: Check if a string is a palindrome.//

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    char str[1000];
    int len = 0;

    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    int i = 0, j = len - 1;
    int isPalindrome = 1;

    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
