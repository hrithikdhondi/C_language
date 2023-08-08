#include<stdio.h>
#include<stdlib.h>
// To find the first duplicate element in a given array. 
int main(){
    int size,*arr,count=0,count1,num;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    arr = (int*) malloc(size*sizeof(int));
    for(int i=0; i<size; i++){
        printf("Enter the values of %d index : ",i);
        scanf("%d", arr + i);
    }
    for(int i=0; i<size; i++){
        count=0;
        for(int j=0; j<size; j++){
            if(arr[i]==arr[j]){
            count++;      
            }        
        }
        if(count>1){
            printf("The first duplicate in array is %d",arr[i]);
            break;            
        }
    }
}
