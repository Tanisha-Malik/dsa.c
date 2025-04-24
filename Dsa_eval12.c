//WAP to input n numbers and calculate their mean.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  
    int sum = 0;

    
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    
    float mean = (float)sum / n;
    printf("The mean of the numbers is: %.2f\n", mean);

    return 0;
}
