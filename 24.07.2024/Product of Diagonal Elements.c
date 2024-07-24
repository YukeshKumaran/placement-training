#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;
    printf("Enter the order of the matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                product *= matrix[i][j];
            }
        }
    }
    printf("Product of diagonal elements: %lld\n", product);
    return 0;
}
