#include<stdio.h>
// To find the duplicate elements in an array.
int main(){
    int n,count=0,count1=0,count2,m;
    printf("Number of values to be stored in array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values : ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        count=0;
        m=1;
        for(int j=i; j<n; j++){
            count2=0;
            if(arr[i]==arr[j]){
                count++;
            }
            if(i!=0 && m!=0 ){
                for(int k=i-1; k>=0; k--){
                    if(arr[i]==arr[k]){
                        count2++;
                    }
                }
                m=count2;
            }
            if(count2>0)
            break;
        }
        if(count2==0){
            if(count>1)
            count1++;
        }
    }
    printf("The total no.of duplicate elements in array are %d",count1);
}