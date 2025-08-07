#include <stdio.h>

int main() {
    int M, N;
    printf("Enter the number of rows and columns (M N): ");
    scanf("%d %d", &M, &N);

    if (M != N) {
        printf("Error: Matrix must be square (M = N).\n");
        return 1;
    }

    int matrix[M][N];
    printf("Enter the elements of the %d×%d matrix:\n", M, N);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int primarySum = 0, secondarySum = 0;
    for (int i = 0; i < M; i++) {
        primarySum += matrix[i][i];               // Primary diagonal
        secondarySum += matrix[i][M - i - 1];     // Secondary diagonal
    }

    printf("Primary Diagonal Sum: %d\n", primarySum);
    printf("Secondary Diagonal Sum: %d\n", secondarySum);
    printf("Total Diagonal Sum: %d\n", primarySum + secondarySum);

    return 0;
}