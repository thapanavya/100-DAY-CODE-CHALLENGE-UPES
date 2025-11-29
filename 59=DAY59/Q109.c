//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxSum = -1, sum;

    for(int i = 0; i <= n - k; i++) {
        sum = 0;
        for(int j = 0; j < k; j++)
            sum += arr[i + j];

        if(sum > maxSum) maxSum = sum;
    }

    printf("%d", maxSum);
    return 0;
}


