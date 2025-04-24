#include <stdio.h>

int main() {
    int i, j, a[5][3], max;


    printf("Enter the marks of 5 students in 3 subjects:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter the marks of 5 students in 3 subjects:\n");
            scanf("%d", &a[i][j]);
        }
    }

    for (j = 0; j < 3; j++) {  
        max = a[0][j]; 
        for (i = 1; i < 5; i++) { 
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
        printf("The highest marks in Subject %d is: %d\n", j + 1, max);
    }

    return 0;
}
