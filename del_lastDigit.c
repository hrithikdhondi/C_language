#include<stdio.h>
// To delete the last digit in the given number.
int main(){
    int num, temp;
    printf("Enter the number : ");
    scanf("%d",&num);
    num=num/10;
    printf("After deleting the last digit in the number : %d",num);
}