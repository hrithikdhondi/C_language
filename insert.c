#include<stdio.h>
// To insert an element at a given position in an array
int main(){
    int n,i;
    printf("Enter the number of elements in array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers : ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Given numbers are : ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\nEnter the position : ");
    scanf("%d",&i);
    printf("Enter the number to be inserted : ");
    scanf("%d",&arr[i-1]);
    printf("Given numbers are : ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}