//Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m], b[n], c[m+n];

    for(int i = 0; i < m; i++) scanf("%d", &a[i]);
    for(int i = 0; i < n; i++) scanf("%d", &b[i]);

    int i = 0, j = 0, k = 0;

    while(i < m && j < n)
        c[k++] = (a[i] < b[j]) ? a[i++] : b[j++];

    while(i < m) c[k++] = a[i++];
    while(j < n) c[k++] = b[j++];

    for(int x = 0; x < m+n; x++)
        printf("%d ", c[x]);

    return 0;
}

