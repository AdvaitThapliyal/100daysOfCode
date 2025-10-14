//Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/

#include <stdio.h>

int majorityElement(int arr[], int n) {
    int count = 0, candidate = -1;
    for(int i=0; i<n; i++) {
        if(count == 0)
            candidate = arr[i];
        count += (arr[i] == candidate) ? 1 : -1;
    }
    count = 0;
    for(int i=0; i<n; i++)
        if(arr[i] == candidate) count++;
    if(count > n/2) return candidate;
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("%d", majorityElement(arr, n));
    return 0;
}
