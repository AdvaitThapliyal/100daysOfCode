//Q69: Find the second largest element in an array.//

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int largest, second;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n < 2) {
        printf("Not enough elements\n");
        return 0;
    }

    largest = second = -1000000; 

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    if (second == -1000000)
        printf("No second largest element\n");
    else
        printf("%d\n", second);

    return 0;
}
