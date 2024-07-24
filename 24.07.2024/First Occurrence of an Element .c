#include <stdio.h>

int main() {
    int n, i, element, index = -1;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to find: ");
    scanf("%d", &element);
    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            index = i;
            break;
        }
    }
    if (index != -1)
        printf("First occurrence of %d is at index %d\n", element, index);
    else
        printf("%d not found in the array\n", element);
    return 0;
}
