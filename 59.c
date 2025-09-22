//Q59: Count even and odd numbers in an array.
#include <stdio.h>
int main() {
    int n, i;
    int arr[100];
    int even = 0, odd = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    printf("Even=%d, Odd=%d", even, odd);
    return 0;
}