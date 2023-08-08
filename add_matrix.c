#include<stdio.h>
// sum of two 3x3 martix.
int main(){
    int arr1[9],arr2[9],count=0;
    printf("Enter the 1st 3x3 matix : \n");
    for(int i=0; i<9; i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the 2nd 3x3 matrix : \n");
    for(int i=0; i<9; i++){
        scanf("%d", &arr2[i]);
    }
    for(int i=0; i<10; i++){
        arr1[i]=arr1[i]+arr2[i];
    }
    printf("The matrix additon is : \n");
    for(int j=0; j<9; j++){
        printf("%d ",arr1[j]);
        count++;
        if(count%3==0)
        printf("\n");
    }   
    return 0;
}