#include <stdio.h>

int main() {
    int matrix[4][4] = {
        {11, 27, 31, 45},
        {85, 99, 14, 12},
        {57, 69, 52, 78},
        {90, 11, 23, 34}
    };

    int rotated[4][4];

    // Rotate 90 degrees clockwise
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            rotated[j][3 - i] = matrix[i][j];
        }
    }

    // Print rotated matrix
    printf("Matrix after 90-degree clockwise rotation:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", rotated[i][j]);
        }
        printf("\n");
    }

    return 0;
}