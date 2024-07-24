#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, avg;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = sum / n;
    printf("Average of array elements: %.2f\n", avg);
    return 0;
}
