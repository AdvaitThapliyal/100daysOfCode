//Q64: Find the digit that occurs the most times in an integer number.//

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0}, digit, maxFreq = 0, mostDigit = 0;

    scanf("%lld", &n);

    while (n > 0) {
        digit = n % 10;
        freq[digit]++;
        if (freq[digit] > maxFreq) {
            maxFreq = freq[digit];
            mostDigit = digit;
        }
        n /= 10;
    }

    printf("%d\n", mostDigit);

    return 0;
}
