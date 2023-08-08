#include <stdio.h>
// to delete the duplicates elements in an array

// #define MAX 100
// void nonDuplicate(int *arr,int size){
//     int i,j=0;
//     int ar[MAX] = {0};
//     for(i=0;i<size;i++){
//         ar[arr[i]]++;
//         if(ar[arr[i]]==1){
//             printf("%dn",arr[i]);
//         }
//     }
// }
// void main(){
//     int size,i,*arr;
//     printf("Please enter the array size (not max to 100) : n");
//     scanf("%d", &size);
//     arr=(int*)malloc(sizeof(int)*size);
//     printf("please enter the array elements n");
//     for(i=0; i<size; i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("After removing duplicate elements:n");
//     nonDuplicate(arr, size);
//     getch();    
// }
int main()
{
   int n;
    printf("Enter the no.of values to be stored in array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter the value for index %d : ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                for(int k=j; k<n; k++){
                    arr[k]=arr[k+1]; 
                }
                n--;
            }
        }
    }
    printf("The new array is : ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

 