//WAP to print the index of smallest element in an array.

#include<stdio.h> 
int main(){ 
    int i,rows; 
    printf("Enter the number of rows: "); 
    scanf("%d",&rows); 
    int arr[rows]; 
    int smallest=arr[0]; 
    for(i=0;i<rows;i++){ 
        printf("Enter the element: "); 
        scanf("%d",&arr[i]); 
        if(arr[i]<smallest){ 
            smallest=arr[i]; 
        } 
    } 
    printf("Smallest element is %d\n",smallest); 
    printf("Index of element is %d\n",arr[i]); 
    return 0; 
} 
 
