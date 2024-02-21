#include <stdio.h>
main() {
    int rushabh, i;

    printf("Enter the array's size: ");
    scanf("%d", &rushabh);

    int array[rushabh];
    for (i = 0; i < rushabh; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
    }

    printf("Negative elements in the array : ");
    for (i = 0; i < rushabh; i++) {
        if (array[i] < 0) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");

}
