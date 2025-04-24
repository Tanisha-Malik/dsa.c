//WAP to print the second smallest number in the array.
 
#include<stdio.h> 
int main(){ 
    int arr[100],i,j,n,small,second_small; 
    printf("Enter the size of the array: "); 
    scanf("%d",&n); 
    for(i=0;i<n;i++){ 
        printf("Enter the elements of the array: "); 
        scanf("%d",&arr[i]); 
    } 
    small=arr[0]; 
    for(i=0;i<n;i++){ 
        if(arr[i]<small){ 
            small=arr[i]; 
        } 
    } 
    second_small=arr[1]; 
    if (small==second_small){ 
        second_small=arr[2]; 
    } 
    for(i=0;i<1;i++) 
    { 
        if(arr[i]>small && arr[i]<second_small) 
        { 
            second_small=arr[i]; 
        } 
 
    } 
    printf("The second smallest element is %d\n",second_small); 
    return 0; 
}