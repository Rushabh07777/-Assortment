#include <stdio.h>
main() {
    int rows;
    int cols;
    int i;
    int j;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);
    
    int array[rows][cols];
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    int largest = array[0][0];
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (array[i][j] > largest) {
                largest = array[i][j];
            }
        }
    }
    printf("The largest element in the array is: %d\n", largest);
}
