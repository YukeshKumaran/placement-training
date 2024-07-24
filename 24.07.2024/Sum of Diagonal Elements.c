#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter the order of the matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                sum += matrix[i][j];
            }
        }
    }
    printf("Sum of diagonal elements: %d\n", sum);
    return 0;
}
