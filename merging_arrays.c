#include<stdio.h>
// To merge two arrays.
int main(){
    int size1, size2,Newsize,j;

    printf("Enter the size of the for first array : ");
    scanf("%d",&size1);

    int arr1[size1];
    for(int i=0; i<size1; i++){
        printf("Enter the value of index %d : ",i);
        scanf("%d",&arr1[i]);
    }

    printf("Enter the size of the for second array : ");
    scanf("%d",&size2);

    int arr2[size2];
    for(int i=0; i<size2; i++){
        printf("Enter the value of index %d : ",i);
        scanf("%d",&arr2[i]);
    }

    Newsize=size1+size2;
    int Newarr[Newsize];
    
    j=0;
    for(int i=0; i<Newsize; i++){
        if(i<size1)
        Newarr[i]=arr1[i];
        else {
        Newarr[i]=arr2[j];
        j++;
        }
    }
    printf("The New Array is : ");
 for(int i=0; i<Newsize; i++){
    printf("%d ",Newarr[i]);
    }
}