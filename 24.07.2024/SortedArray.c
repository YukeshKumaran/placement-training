#include <stdio.h>

int main() {
    int n, i, sorted = 1;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            sorted = 0;
            break;
        }
    }
    if (sorted)
        printf("The array is sorted.\n");
    else
        printf("The array is not sorted.\n");
    return 0;
}
