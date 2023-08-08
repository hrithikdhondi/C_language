#include<stdio.h>
// To perform left rotaion of an array by two positions.
int main(){
    int n,m;
    printf("Enter the number elements in array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers : ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        m=arr[0];
        if(i<2){
            for(int j=0; j<n; j++){
                if(j<n-1)
                arr[j]=arr[j+1];
            }
            arr[n-1]=m;
        }
    }
    for(int i=0; i<n; i++){
    printf("%d ",arr[i]);
    }
}