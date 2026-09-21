#include <stdio.h>

int main() {
    int rows, cols, i, j, d;

    scanf("%d %d", &rows, &cols);

    int a[rows][cols];

    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);

    for (d = 0; d < rows + cols - 1; d++) {
        int row = (d < rows) ? d : rows - 1;
        int col = d - row;

        while (row >= 0 && col < cols) {
            printf("%d ", a[row][col]);
            row--;
            col++;
        }
    }

    return 0;
}