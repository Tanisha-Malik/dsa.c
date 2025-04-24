//WAP to find the dublicate values in an array.
#include <stdio.h>

int main() {
    int n, count = 0;

    
    printf("Input number of elements: ");
    scanf("%d", &n);


    int arr[n];

    
    for (int i = 0; i < n; i++) {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break;  
            }
        }
    }


    if (count > 0)
        printf("Number of duplicate elements: %d\n", count);
    else
        printf("No Duplicate Value Found!\n");

    return 0;
}
