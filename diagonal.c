#include <stdio.h>

int main() {
    int N;
    printf("Enter the size of the square matrix (N): ");
    scanf("%d", &N);

    int matrix[N][N];
    printf("Enter the elements of the %d×%d matrix:\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int diagonalSum = 0;
    for (int i = 0; i < N; i++) {
        diagonalSum += matrix[i][i];  // Only primary diagonal
    }

    printf("Sum of primary diagonal elements: %d\n", diagonalSum);

    return 0;
}