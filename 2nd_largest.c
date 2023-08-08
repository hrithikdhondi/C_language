#include<stdio.h>
// gives the second largest number in the array
int main(){
    int n,FirstNum=0,SecondNum=0;
    printf("Enter the number of elements in array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers : ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]>FirstNum)
        SecondNum=FirstNum;
        FirstNum=arr[i];
    }
     
    
    printf("The second largest number is %d",SecondNum);
}