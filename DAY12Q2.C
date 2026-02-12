#include <stdio.h>

int main() {
    int n;
    int matrix[10][10];
    int isSymmetric = 1;

    // Input size
    printf("Enter order of the matrix (n x n): ");
    scanf("%d", &n);

    // Input matrix
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check symmetry
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }

    // Output result
    if (isSymmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}
