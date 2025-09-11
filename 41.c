//Q41: Write a program to swap the first and last digit of a number.//

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main() {
    int num, first, last, temp, powTen = 1, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;            

    
    while (temp >= 10) {
        temp /= 10;
        powTen *= 10;
        digits++;
    }
    first = temp;                 

   
    int middle = (num % powTen) / 10;

    int swapped = last * powTen + middle * 10 + first;

    printf("Number after swapping: %d\n", swapped);

    return 0;
}
