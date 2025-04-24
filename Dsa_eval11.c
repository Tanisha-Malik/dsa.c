//WAP to find the second largest element in a 2D array.
#include <stdio.h>

int main() {
    int i, j, a[10][10], n, m, max1, max2;

    
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &n, &m);

    
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    
    max1 = max2 = a[0][0];

    
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (a[i][j] > max1) {
                max2 = max1;
                max1 = a[i][j];
            } else if (a[i][j] > max2 && a[i][j] != max1) {
                max2 = a[i][j];
            }
        }
    }

    
    if (max1 == max2) {
        printf("No second largest element found (all elements may be the same).\n");
    } else {
        printf("The second largest element is: %d\n", max2);
    }

    return 0;
}
