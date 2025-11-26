#include <stdio.h>
int main() {
    int arr[100], n, key, start, end, mid, found = 0;
    int i; 
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    start = 0;
    end = n - 1;
    while(start <= end) {
        mid = (start + end) / 2;

        if(arr[mid] == key) {
            printf("Element found at position %d\n", mid + 1);
            found = 1;
            break;
        }
        else if(arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    if(!found) {
        printf("Element not found in the array.\n");
    }
    return 0;
}

