//Q4: Write a program to calculate the area and circumference of a circle given its radius.//

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>
#define PI 3.1416

int main() {
    float radius, area, circumference;
    printf("Enter radius:");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);
    return 0;
}
