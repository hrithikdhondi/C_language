#include<stdio.h>
// To sort array in ascending order

// int main(){
//     int num[10],temp;
//     printf("Enter 10 numbers : \n");
//     for(int i=0; i<10; i++){
//         scanf("%d",&num[i]);
//     }
//     for(int i=0; i<10; i++){
//         for(int j=0; j<10; j++){
//             if(num[i]<num[j]){
//                 temp=num[i];
//                 num[i]=num[j];
//                 num[j]=temp;
//             }
//         }
//     }
// }
int main(){
    
    int arr[10],ar[10],max,count=0,n=10;
    for(int i=0; i<10; i++){
        printf("Enter the values for %d index : ",i);
        scanf("%d",&arr[i]);
    }
    
    for(int i=0; i<10; i++){ 
        max=arr[0];   
            for(int k=0; k<n; k++){
                if(arr[k]<max)
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