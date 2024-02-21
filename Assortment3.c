#include <stdio.h>
main() {
    int size, i, j;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    int array[size][size], rushabh[size][size];

    printf("Enter array's elements:\n");
    for (i = 0; i < size; i++) {
    	
        for (j = 0; j < size; j++) {2
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            rushabh[j][i] = array[i][j];
        }
    }
    printf("Transpose of the matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d", rushabh[i][j]);
        }
        printf("\n");
    }

 }
