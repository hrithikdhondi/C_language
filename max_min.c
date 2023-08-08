#include<stdio.h>
#include<stdlib.h>
//to find max and min values in an array.
int main()
{
    int n,max;
    printf("Enter the no.of elements to be stored in array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values : ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("The maximum value in the given array is %d\n",max);
    for(int i=0; i<n; i++){
        if(arr[i]<max){
            max=arr[i];
        }
    }
    printf("The minimum value in the given array is %d",max);
}