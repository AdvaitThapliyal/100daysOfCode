//Q33: Write a program to check if a number is an Armstrong number.//

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>

int main() {
    int n, original, digits = 0, sum = 0, temp;

    scanf("%d", &n);

    original = n;
    temp = n;

        while (temp != 0) {
        digits++;
        temp = temp / 10;
    }

    temp = n;

        while (temp != 0) {
        int digit = temp % 10;
        int power = 1;

               for (int i = 0; i < digits; i++) {
            power *= digit;
        }

        sum += power;
        temp = temp / 10;
    }

    if (sum == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
