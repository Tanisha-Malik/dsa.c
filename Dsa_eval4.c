//WAP to display the elements of a 3x3 matrix.
#include <stdio.h>

int main() {
    int a[3][3], i, j;



    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter the elements for the 3x3 matrix:\n");
            scanf("%d", &a[i][j]);
        }
    }


    printf("\nThe matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
