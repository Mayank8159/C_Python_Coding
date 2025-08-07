#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {11, 27, 31},
        {85, 99, 14},
        {57, 69, 52}
    };

    int top = 0, bottom = 2;
    int left = 0, right = 2;

    printf("Spiral order:\n");

    while (top <= bottom && left <= right) {
        // Print top row
        for (int i = left; i <= right; i++) {
            printf("%d ", matrix[top][i]);
        }
        top++;

        // Print right column
        for (int i = top; i <= bottom; i++) {
            printf("%d ", matrix[i][right]);
        }
        right--;

        // Print bottom row (if any)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                printf("%d ", matrix[bottom][i]);
            }
            bottom--;
        }

        // Print left column (if any)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }

    return 0;
}
