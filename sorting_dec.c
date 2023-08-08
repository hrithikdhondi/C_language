#include<stdio.h>
// To sort array in descending order
int main(){
    int arr[10],ar[10],max,count=0,n=10;
    for(int i=0; i<10; i++){
        printf("Enter the values for %d index : ",i);
        scanf("%d",&arr[i]);
    }
    
    for(int i=0; i<10; i++){ 
        max=arr[0];   
            for(int k=0; k<n; k++){
                if(arr[k]>max)
                max=arr[k]; 
            }
            printf("%d\n",max);
            ar[i]=max;
        for(int j=0; j<n; j++){
            if(max==arr[j]){
                for(int l=j; l<n; l++){
                    arr[l]=arr[l+1];
                }
            }
        }
        n--;
    }
    printf("The ascending order of array is : ");
    for(int i=0; i<10; i++){
        printf("%d\n",ar[i]);
    }
}