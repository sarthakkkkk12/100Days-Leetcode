#include <stdio.h>

int isIdentityMatrix(int** matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                if (matrix[i][j] != 1)
                    return 0;
            } else {
                if (matrix[i][j] != 0)
                    return 0;
            }
        }
    }
    return 1;
}

int main() {
    int n;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    // Convert 2D array to pointer-to-pointer style
    int* ptrs[n];
    for (int i = 0; i < n; i++)
        ptrs[i] = matrix[i];

    if (isIdentityMatrix(ptrs, n))
        printf("The matrix is an Identity Matrix.\n");
    else
        printf("The matrix is NOT an Identity Matrix.\n");

    return 0;
}
