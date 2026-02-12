int** transpose(int** matrix, int matrixSize, int* matrixColSize, 
                int* returnSize, int** returnColumnSizes) {

    int rows = matrixSize;              // number of rows
    int cols = matrixColSize[0];        // number of columns (given as array)

    // Transposed matrix will have:
    // rows = cols
    // cols = rows
    *returnSize = cols;

    // Allocate memory for returnColumnSizes
    *returnColumnSizes = (int*)malloc(cols * sizeof(int));

    // Each row in transposed matrix has 'rows' columns
    for (int i = 0; i < cols; i++) {
        (*returnColumnSizes)[i] = rows;
    }

    // Allocate memory for result matrix
    int** result = (int**)malloc(cols * sizeof(int*));
    for (int i = 0; i < cols; i++) {
        result[i] = (int*)malloc(rows * sizeof(int));
    }

    // Perform transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }

    return result;
}
