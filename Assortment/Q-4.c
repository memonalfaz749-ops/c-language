#include <stdio.h>

int main () {

    int i, j, array[100][100];
    int rows, cols;
    int rowNo, colNo;
    int rowSum = 0, colSum = 0;

    printf("Enter array's row size: ");
    scanf("%d", &rows);

    printf("Enter array's column size: ");
    scanf("%d", &cols);

    // Input array
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // Row sum
    printf("\nEnter row number: ");
    scanf("%d", &rowNo);

    printf("Elements of row %d: ", rowNo);
    for(j = 0; j < cols; j++) {
        printf("%d ", array[rowNo][j]);
        rowSum += array[rowNo][j];
    }
    printf("\nThe sum of row %d: %d\n", rowNo, rowSum);

    // Column sum
    printf("\nEnter column number: ");
    scanf("%d", &colNo);

    printf("Elements of column %d: ", colNo);
    for(i = 0; i < rows; i++) {
        printf("%d ", array[i][colNo]);
        colSum += array[i][colNo];
    }
    printf("\nThe sum of column %d: %d", colNo, colSum);

    return 0;
}

