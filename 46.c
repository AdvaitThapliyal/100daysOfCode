//Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****//

/*
//Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****//

*/
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {       // 5 rows
        for (j = 1; j <= 5; j++) {   // 5 columns
            printf("*");
        }
        printf("\n");                // move to next line after each row
    }

    return 0;
}
