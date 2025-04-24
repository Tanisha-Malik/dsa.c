//Wap to multiply the m X n Matrix.
#include <stdio.h>

int main() {
    int i, j, k, m, n, p, q;

    
    printf("Enter the number of rows in Matrix 1: ");
    scanf("%d", &m);
    printf("Enter the number of columns in Matrix 1: ");
    scanf("%d", &n);

    int arr1[m][n];

    
    printf("Enter elements of Matrix 1:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("arr1[%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    
    printf("Enter the number of rows in Matrix 2: ");
    scanf("%d", &p);
    printf("Enter the number of columns in Matrix 2: ");
    scanf("%d", &q);

    
    if (n != p) {
        printf("Matrix multiplication is not possible!\n");
        return 0;
    }

    int arr2[p][q], mul[m][q];

    
    printf("Enter elements of Matrix 2:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("arr2[%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            mul[i][j] = 0;
            for (k = 0; k < n; k++) { // n (columns of Matrix 1) should be used
                mul[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    
    printf("\nResultant Matrix (Multiplication):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
